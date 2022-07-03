#pragma once
#ifndef PLAYER_H_

#define PLAYER_H_

#include <SFML/Graphics.hpp>

typedef struct Player
{
	int score = 0;
	short int lives = 0;
	sf::Vector2f position;
	sf::CircleShape model;
} Player;

int getScore(Player player);

int getLives(Player player);



#endif