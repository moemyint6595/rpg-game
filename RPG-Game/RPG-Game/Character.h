#pragma once
#include <SFML/Graphics.hpp>

class Character
{

private:
	sf::Texture texture;

	std::vector<sf::RectangleShape> bullets;
	float bullet_speed = 2.0f;

	bool isShooter;

	sf::RectangleShape hitbox;

	sf::Vector2i size;
	sf::Vector2i imageCoordinate;
	sf::Vector2f position;
	sf::Vector2f scale;

public:
	sf::Sprite sprite;

public:
	void Initialize(bool, sf::Vector2i, sf::Vector2i, sf::Vector2f, sf::Vector2f);
	void Load();
	void Update(sf::Vector2f);
	void Draw(sf::RenderWindow& window);
};


//Animation Class
class AnimationCharacter
{

private:
	

public:
	sf::Sprite sprite;
	sf::Texture texture;

public:
	void Initialize();
	void Load(int, int, int, sf::Vector2f, sf::Vector2f);
	void Update();
	void Draw(sf::RenderWindow& window);
};