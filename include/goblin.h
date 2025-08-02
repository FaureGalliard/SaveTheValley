//hero.h
#pragma once
#include <SFML/Graphics.hpp>

class Goblin : public sf::Drawable, public sf::Transformable
{
    sf::Sprite currentSprite;
    sf::Texture texture;
    
    
public:

    Goblin(){


    };
};