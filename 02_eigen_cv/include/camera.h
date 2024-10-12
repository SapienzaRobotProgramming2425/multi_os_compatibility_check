#pragma once

#include <Eigen/Dense>
#include <vector>

class PinholeCamera {
 public:
  PinholeCamera(float fx, float fy, float cx, float cy, int width, int height)
      : fx(fx), fy(fy), cx(cx), cy(cy), width(width), height(height) {}

  std::vector<Eigen::Vector2f> project(
      const std::vector<Eigen::Vector3f> &points);

 protected:
  float fx, fy, cx, cy;
  int width, height;
};
