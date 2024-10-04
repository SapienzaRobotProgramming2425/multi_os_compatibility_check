#include <Eigen/Dense>
#include <iostream>
#include <opencv2/opencv.hpp>

#include "camera.h"

int main() {
  std::vector<Eigen::Vector3f> points;
  for (int i = 0; i < 100; ++i) {
    points.push_back(Eigen::Vector3f::Random() * 10);
  }

  cv::Mat img = cv::Mat(100, 100, CV_8UC3, cv::Scalar(0, 0, 0));

  PinholeCamera camera(10, 10, 50, 50, 100, 100);

  auto projections = camera.project(points);
  for (const auto &projection : projections) {
    std::cout << projection.transpose() << std::endl;
    if (projection.x() >= 0 and projection.x() < 100 and projection.y() >= 0 and
        projection.y() < 100) {
      img.at<cv::Vec3b>(projection.y(), projection.x()) =
          cv::Vec3b(255, 255, 255);
    }
  }
  return 0;
}