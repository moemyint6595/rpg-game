#pragma once
#include <SFML/Graphics.hpp>

class Character
{

private:
	sf::Texture texture;

public:
	sf::Sprite sprite;

public:
	void Initialize();
	void Load(int, int, int, sf::Vector2f);
	void Update();
	void Draw();
};