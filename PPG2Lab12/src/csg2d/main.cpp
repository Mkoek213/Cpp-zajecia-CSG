#include "libincludes.h"
#include "functions.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "CSG2D");
    sf::View view(sf::Vector2f(0.f, 0.f), sf::Vector2f(1920.f, 1080.f));
    window.setFramerateLimit(60);

    // Load font
    sf::Font font;
    if (!font.loadFromFile("/Users/mikolaj/Desktop/Cpp-zajecia-CSG/PPG2Lab12/src/csg2d/Open_Sans/git.ttf"))
    {
        std::cerr << "Failed to load font!" << std::endl;
        return -1;
    }   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Resized)
            {
                std::cout << "Resize: " << event.size.width << ", " << event.size.height << std::endl;
                view.setSize(float(event.size.width), event.size.height);
            }

            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.setView(view);

        // Draw the C++ logo
        drawCppLogo(window, font);

        window.display();
    }

    return 0;
}
