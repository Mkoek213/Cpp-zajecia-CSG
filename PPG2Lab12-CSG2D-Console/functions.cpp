#include "functions.h"
#include "circle.h"
#include "rectangle.h"
// #include "complexshape.h"




Vector2D rotate(const Vector2D& v, float angle_rad)
{
    const float cs = std::cos(angle_rad);
    const float sn = std::sin(angle_rad);

    return {v.x() * cs - v.y() * sn, v.x() * sn + v.y() * cs};
}

void drawToConsole(const CSG2D::Shape& s, const std::uint32_t res_x, const std::uint32_t res_y, const char foreground_char, const char& background_char)
{
    const float center_x = res_x / 2.f - 0.5f;
    const float center_y = res_y / 2.f - 0.5f;
    for(std::size_t py = 0u; py < res_y; ++py)
    {
        for(std::size_t px = 0u; px < res_x; ++px)
        {
            auto pos_x = px - center_x;
            auto pos_y = py - center_y;
            pos_y = -pos_y;

            const auto character = s.isIn(Vector2D(pos_x, pos_y)) ? foreground_char : background_char;

            std::cout << character;
        }
        std::cout << std::endl;
    }
}

std::shared_ptr<CSG2D::Shape> createCSG2DScene()
{
	// std::shared_ptr<CSG2D::Shape> shp;
	// return shp;

    // auto circle_shp = std::make_shared<CSG2D::Circle>(Vector2D(30.f, 10.f), 10.f);
    // return circle_shp;

    auto rect_shp = std::make_shared<CSG2D::Rectangle>(16.f, 8.f, Vector2D(-32.f, -12.f), std::numbers::pi / 4.f);
    return rect_shp;
}
