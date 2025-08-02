#pragma once
#include <SFML/Graphics.hpp>
#include "spritecomponent.h"
class Action
{
private:
    SpriteComponent spriteComponent;
    sf::RectangleShape hitbox;
        
public:
    Action(const std::string& textureFile,
           const sf::Vector2f& frameCount)
        : spriteComponent(textureFile, frameCount)
    {
        hitbox.setSize(spriteComponent.getFrameSize());
        hitbox.setOrigin(hitbox.getSize().x / 2, hitbox.getSize().y / 2); // Centrado
        hitbox.setFillColor(sf::Color(255, 0, 0, 100)); // Rojo semitransparente (para debug)
    }

    void draw(sf::RenderTarget& target, sf::RenderStates states) const {
        target.draw(spriteComponent, states);
    }
};
