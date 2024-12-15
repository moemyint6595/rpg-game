#include "Character.h"

void Character::Initialize()
{

}

void Character::Load(int XIndex, int YIndex, int IR, sf::Vector2f postion, sf::Vector2f scale)
{
	if (texture.loadFromFile("assets/Player/Textures/spritesheet.png"))
	{
		sprite.setTexture(texture);
		//sprite.setTextureRect(sf::IntRect(XIndex * IR, YIndex * IR, IR, IR));
		sprite.scale(scale);
		sprite.setPosition(postion);
	}
}

void Character::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		sprite.move(-0.3f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		sprite.move(0.3f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		sprite.move(0.0f, -0.3f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		sprite.move(0.0f, 0.3f);
	}
}

void Character::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}



//PlayerAnimation
void AnimationCharacter::Initialize()
{

}

void AnimationCharacter::Load(int XIndex, int YIndex, int IR, sf::Vector2f postion, sf::Vector2f scale)
{
	if (texture.loadFromFile("assets/Player/Textures/spritesheet.png"))
	{
		sprite.setTexture(texture);
		//sprite.setTextureRect(sf::IntRect(XIndex * IR, YIndex * IR, IR, IR));
		sprite.scale(scale);
		sprite.setPosition(postion);
	}
}

void AnimationCharacter::Update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		sprite.move(-0.3f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		sprite.move(0.3f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		sprite.move(0.0f, -0.3f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		sprite.move(0.0f, 0.3f);
	}
}

void AnimationCharacter::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}
