#include "circle.h"
#include "functions.h"

namespace CSG2D {
Circle::Circle(const sf::Vector2f position, float r)
    : Shape(position, 0.0), position_(position),r(r) {}  // Initialize Shape with position and a default angle


bool Circle::isIn(const sf::Vector2f& test_position) const {
    float distance = std::sqrt(std::pow(test_position.x - position_.x, 2) + std::pow(test_position.y - position_.y, 2));
    return distance <= r;
}
}
