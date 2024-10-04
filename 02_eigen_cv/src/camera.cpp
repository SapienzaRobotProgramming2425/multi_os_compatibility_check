#include "camera.h"

std::vector<Eigen::Vector2f> PinholeCamera::project(
    const std::vector<Eigen::Vector3f> &points) {
  std::vector<Eigen::Vector2f> projections;
  for (const auto &point : points) {
    if (point.z() <= 0) continue;
    Eigen::Vector2f projection;
    projection.x() = fx * point.x() / point.z() + cx;
    projection.y() = fy * point.y() / point.z() + cy;
    projections.push_back(projection);
  }
  return projections;
}