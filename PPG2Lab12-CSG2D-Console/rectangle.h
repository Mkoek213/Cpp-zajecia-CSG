#pragma once
#include "libincludes.h"
#include "vector2d.h"
#include "shape.h"

namespace CSG2D
{
class Rectangle: public Shape
{
public:
    Rectangle(float w, float h, const Vector2D& position, float angle);

protected:
    Vector2D position_;
    float w_;
    float h_;
    float angle_;

public:
    virtual bool isIn(const Vector2D& test_position) const;
};
}  // namespace CSG2D
