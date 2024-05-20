#include "functions.h"
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
// #include "complexshape.h"

sf::Vector2f rotate(const sf::Vector2f &v, float angle_rad)
{
	const float cs = std::cos(angle_rad);
	const float sn = std::sin(angle_rad);

	return { v.x*cs - v.y*sn, v.x*sn + v.y*cs };
}

void updateTexture(sf::Texture &t, const CSG2D::Shape &s, const sf::Color &foreground_color, const sf::Color &background_color)
{
	const auto tex_size = t.getSize();
	std::vector<sf::Uint8> tex_data(tex_size.x*tex_size.y*4u, 0u);
	const sf::Vector2f center = sf::Vector2f(tex_size)/2.f - sf::Vector2f(0.5f, 0.5f);
    for(std::size_t py = 0u; py < tex_size.y; ++py)
    {
	    for(std::size_t px = 0u; px < tex_size.x; ++px)
	    {
	        auto pos = sf::Vector2f(px, py) - center;
	        pos.y = -pos.y;
	        
	        const auto color = s.isIn(pos) ? foreground_color : background_color;

	        const std::size_t pi = py*tex_size.x + px;
	        const auto i = pi*4u;
	        tex_data[i] = color.r;
	        tex_data[i + 1u] = color.g;
	        tex_data[i + 2u] = color.b;
	        tex_data[i + 3u] = color.a;
	    }
    }
    t.update(tex_data.data());
}

std::shared_ptr<CSG2D::Shape> createCSG2DScene()
{
	// std::shared_ptr<CSG2D::Shape> shp;
	// return shp;

    // auto circle_shp = std::make_shared<CSG2D::Circle>(Vector2D(30.f, 10.f), 10.f);
    // return circle_shp;

    auto rect_shp = std::make_shared<CSG2D::Rectangle>(800.f, 460.f, sf::Vector2f(-32.f, -12.f), std::numbers::pi / 4.f);
    return rect_shp;
}

sf::ConvexShape createHexagon(float radius, const sf::Vector2f& position, const sf::Color& color) {
    sf::ConvexShape hexagon;
    hexagon.setPointCount(6);
    for (int i = 0; i < 6; ++i) {
        float angle = i * 60 * 3.14159265f / 180.f;
        hexagon.setPoint(i, sf::Vector2f(radius * std::cos(angle), radius * std::sin(angle)));
    }
    hexagon.setPosition(position);
    hexagon.setFillColor(color);
    return hexagon;
}

void drawCppLogo(sf::RenderTarget &target, const sf::Font &font)
{
    float hexRadius = 250.f;
    sf::Vector2f hexPositions[] = {
        {0.f, -300.f},
        {75.f, -300.f},
        {37.5f, -375.f},
        {37.5f, -235.f},
    };

    for (const auto &pos : hexPositions)
    {
        sf::ConvexShape hexagon = createHexagon(hexRadius, pos, sf::Color::Blue);
        target.draw(hexagon);
    }

    sf::Text plusPlus("++", font, 150);
    plusPlus.setFillColor(sf::Color::White);
    plusPlus.setPosition(100.f, -350.f);
    target.draw(plusPlus);

    sf::Text C("C", font, 500);
    C.setFillColor(sf::Color::White);
    C.setPosition(-200.f, -600.f); 
    target.draw(C);

    sf::Text name("M.K", font, 600);
    name.setFillColor(sf::Color::Red);
    name.setPosition(-400.f, -100.f); 
    target.draw(name);

}