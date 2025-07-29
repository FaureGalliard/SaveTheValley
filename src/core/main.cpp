//main.cpp
#include <SFML/Graphics.hpp>
#include <nlohmann/json.hpp>
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Mi Juego con UI");
    window.setFramerateLimit(60);

    // Botón (rectángulo)
    sf::RectangleShape boton(sf::Vector2f(200.f, 60.f));
    boton.setPosition(300.f, 250.f);
    boton.setFillColor(sf::Color::Blue);

    // Texto del botón
    sf::Font font;
    if (!font.loadFromFile("assets/fonts/NotoSans-Regular.ttf")) return -1;

    sf::Text texto("¡Botón presionado!", font, 24);
    texto.setFillColor(sf::Color::White);
    texto.setPosition(340.f, 265.f);  // Ajusta manualmente

    // Bucle principal
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Click en el botón
            if (event.type == sf::Event::MouseButtonPressed &&
                event.mouseButton.button == sf::Mouse::Left) {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                if (boton.getGlobalBounds().contains((float)mousePos.x, (float)mousePos.y)) {
                    // Acción del botón
                    printf("¡Botón presionado!\n");
                }
            }
        }

        window.clear(sf::Color::Black);
        window.draw(boton);
        window.draw(texto);
        window.display();
    }

    return 0;
}