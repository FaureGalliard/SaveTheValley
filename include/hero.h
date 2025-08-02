#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "action.h"
class Hero :  public sf::Transformable {
private:
    Action currentAction;
    sf::Vector2f position;
    float speed;

public:

    void initActions(){
        //Action idle;
    }
    void update(float dt) {
        
        // Update hero position or other logic here
    }

    void move(const sf::Vector2f& direction) {
        position += direction * speed;
    }
};
