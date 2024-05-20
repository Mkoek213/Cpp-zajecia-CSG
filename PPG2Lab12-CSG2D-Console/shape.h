#pragma once
#include "libincludes.h"
#include "vector2d.h"

namespace CSG2D
{
class Shape
{
public:
    Shape(const Vector2D& position, double angle_rad) : position_(position), angle_rad_(angle_rad) {}

protected:
    Vector2D position_;
    double angle_rad_;

public:
    [[nodiscard]] virtual bool isIn(const Vector2D& test_position) const = 0;
};
}  // namespace CSG2D
