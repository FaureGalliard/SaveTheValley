//main.cpp
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
#include "utils.h"
int main() {
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mi primer juego con SFML");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            }
        window.clear();
        
        window.display();
    }


        return 0;
}