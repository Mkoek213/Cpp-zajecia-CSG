#include "rectangle.h"
#include <math.h>
#include "functions.h"


namespace CSG2D {
Rectangle::Rectangle(float w, float h, const sf::Vector2f &position, float angle)
    : Shape(position, angle), position_(position),angle_(angle), w_(w), h_(h) {}  // Initialize Shape with position and a default angle


bool Rectangle::isIn(const sf::Vector2f& test_position) const {
    sf::Vector2f diff_vect = test_position - position_ ;
    sf::Vector2f rot_vect = rotate(diff_vect, angle_);
    bool within_width = std::abs(rot_vect.x) <= w_ / 2;
    bool within_height = std::abs(rot_vect.y) <= h_ / 2;
    
    return within_width && within_height;
}
}
