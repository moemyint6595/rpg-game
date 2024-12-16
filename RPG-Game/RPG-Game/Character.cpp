#include "Character.h"
#include "Math.h"

void Character::Initialize(bool isShooter, sf::Vector2i size, sf::Vector2i imageCor , sf::Vector2f postion, sf::Vector2f scale)
{
	this->isShooter = isShooter;
	this->size = size;
	this->imageCoordinate = imageCor;
	this->position = postion;
	this->scale = scale;

	hitbox.setFillColor(sf::Color::Transparent);
	hitbox.setOutlineColor(sf::Color::Red);
	hitbox.setOutlineThickness(2);
}

void Character::Load()
{
	if (texture.loadFromFile("assets/Player/Textures/spritesheet.png"))
	{
		sprite.setTexture(texture);
		sprite.setTextureRect(sf::IntRect(imageCoordinate.x * size.x, imageCoordinate.y * size.y, size.x, size.y));
		sprite.scale(scale);
		sprite.setPosition(position);

		hitbox.setSize(sf::Vector2f(size.x, size.y));
		hitbox.setScale(scale);
		hitbox.setPosition(position);
	}
}

void Character::Update(sf::Vector2f enemyPosition)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		sprite.move(-0.5f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		sprite.move(0.5f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		sprite.move(0.0f, -0.5f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		sprite.move(0.0f, 0.5f);
	}

	hitbox.setPosition(sprite.getPosition());

	if (isShooter) 
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
		{
			//------------------------------ Load a bullet -------------------
			bullets.push_back(sf::RectangleShape(sf::Vector2f(10.0f, 10.0f)));
			//------------------------------ Load a bullet -------------------

			//------------------------------ Set bullet position -------------------
			int i = bullets.size() - 1;
			bullets[i].setPosition(sprite.getPosition());
			//------------------------------ Set bullet position -------------------
		}

		for (size_t i = 0; i < bullets.size(); i++)
		{
			//------------------------------ Calculate bullet_direction of bullet -------------------
			sf::Vector2f bullet_direction = enemyPosition - bullets[i].getPosition();
			bullet_direction = Math::NormalizeVection(bullet_direction);
			//------------------------------ Calculate bullet_direction of bullet -------------------

			//------------------------------ Fire bullet to a direction with speed -------------------
			bullets[i].setPosition(bullets[i].getPosition() + bullet_direction * bullet_speed);
			//------------------------------ Fire bullet to a direction with speed -------------------
		}
	}
}

void Character::Draw(sf::RenderWindow& window)
{
	window.draw(sprite);
	window.draw(hitbox);
	if (isShooter) 
	{
		for (size_t i = 0; i < bullets.size(); i++)
		{
			window.draw(bullets[i]);
		}
	}
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
