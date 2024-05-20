#include "rectangle.h"
#include <math.h>
#include "functions.h"
#include "vector2d.h"

namespace CSG2D {
Rectangle::Rectangle(float w, float h, const Vector2D& position, float angle)
    : Shape(position, angle), position_(position),angle_(angle), w_(w), h_(h) {}  // Initialize Shape with position and a default angle


bool Rectangle::isIn(const Vector2D& test_position) const {
    Vector2D diff_vect = test_position - position_ ;
    Vector2D rot_vect = rotate(diff_vect, angle_);
    bool within_width = std::abs(rot_vect.x_) <= w_ / 2;
    bool within_height = std::abs(rot_vect.y_) <= h_ / 2;
    
    return within_width && within_height;
}
}
