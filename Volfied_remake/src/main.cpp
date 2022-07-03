#include "Player.h"
#include "Enemy.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Volfied-remake");
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Green);

    Player player;

    player.position = sf::Vector2f(0.f, 0.f);
    player.model = sf::CircleShape(30.f);
    player.model.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {   
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }        
        }
        //sf::Vector2f v2Pos = shape.getPosition();
        player.position = player.model.getPosition();

        for (player.position.y; sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) and player.position.y <= 600 - 2 * player.model.getRadius(); player.position.y += 5.f)
        {
            window.clear();
            player.model.setPosition(player.position.x, player.position.y);
            window.draw(player.model);
            window.display();
        }
        for (player.position.y; sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) and player.position.y >= 0; player.position.y -= 5.f)
        {
            window.clear();
            player.model.setPosition(player.position.x, player.position.y);
            window.draw(player.model);
            window.display();
        }
        for (player.position.x; sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) and player.position.x >= 0; player.position.x -= 5.f)
        {
            window.clear();
            player.model.setPosition(player.position.x, player.position.y);
            window.draw(player.model);
            window.display();
        }
        for (player.position.x; sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) and player.position.x < 800 - 2 * player.model.getRadius(); player.position.x += 5.f)
        {
            window.clear();
            player.model.setPosition(player.position.x, player.position.y);
            window.draw(player.model);
            window.display();
        }
        
        window.clear();
        window.draw(player.model);
        window.display();
    }

    return 0;
}