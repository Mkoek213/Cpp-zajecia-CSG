#pragma once
#include "libincludes.h"
#include "vector2d.h"
#include "shape.h"

namespace CSG2D
{
class Circle: public Shape
{
public:
    Circle(const sf::Vector2f position, float r);

protected:
    sf::Vector2f position_;
    float r;

public:
    virtual bool isIn(const sf::Vector2f& test_position) const;
};
}  // namespace CSG2D
