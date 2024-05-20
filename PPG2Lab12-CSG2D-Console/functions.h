#pragma once
#include "shape.h"
#include "vector2d.h"

Vector2D rotate(const Vector2D& v, float angle_rad);
inline float degToRad(float deg)
{
    return deg / 180.f * std::numbers::pi;
}
inline float radToDeg(float rad)
{
    return rad / std::numbers::pi * 180.f;
}
void drawToConsole(const CSG2D::Shape& s, const std::uint32_t res_x, const std::uint32_t res_y, const char foreground_char, const char& background_char);
std::shared_ptr<CSG2D::Shape> createCSG2DScene();
