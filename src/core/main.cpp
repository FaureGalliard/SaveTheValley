//main.cpp
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
#include "utils.h"
int main() {
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mi primer juego con SFML");
    window.setFramerateLimit(60);

    sf::RectangleShape rectangle(sf::Vector2f(120.f, 60.f));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(400.f, 300.f);

    sf::Font font;
    font.loadFromFile("assets/fonts/NotoSans-Bold.ttf");
    bool condicion = false;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            }
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            if(rectangle.getGlobalBounds().contains(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window)))) {
                condicion=!condicion;
            }

            window.clear();
            window.draw(rectangle);  
            window.display();       
        }
    }
    return 0;
}