#include "circle.h"

namespace CSG2D {
Circle::Circle(const Vector2D& position, float r)
    : Shape(position, 0.0), position_(position),r(r) {}  // Initialize Shape with position and a default angle


bool Circle::isIn(const Vector2D& test_position) const {
    float distance = std::sqrt(std::pow(test_position.x_ - position_.x_, 2) + std::pow(test_position.y_ - position_.y_, 2));
    return distance <= r;
}
}
