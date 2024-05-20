#pragma once
#include "libincludes.h"
#include "vector2d.h"
#include "shape.h"

namespace CSG2D
{
class Rectangle: public Shape
{
public:
    Rectangle(float w, float h, const sf::Vector2f& position, float angle);

protected:
    sf::Vector2f position_;
    float w_;
    float h_;
    float angle_;

public:
    virtual bool isIn(const sf::Vector2f& test_position) const;
};
}  // namespace CSG2D
