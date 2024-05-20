#pragma once
#include "libincludes.h"
#include "vector2d.h"
#include "shape.h"

namespace CSG2D
{
class Circle: public Shape
{
public:
    Circle(const Vector2D& position, float r);

protected:
    Vector2D position_;
    float r;

public:
    virtual bool isIn(const Vector2D& test_position) const;
};
}  // namespace CSG2D
