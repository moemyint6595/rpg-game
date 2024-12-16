#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include "Character.h"

//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(800,800), "RPG Game");  //accept 2 argument ,Video Mode , window title    
//
//	while (window.isOpen())  //Game loop
//	{
//		//------------------------------------------ Update ----------------------- 
//
//		sf::Event event;
//		while (window.pollEvent(event))  //Event loop   //store event in "event" and execute 
//		{
//			if (event.type == sf::Event::Closed) 
//			{
//				window.close();
//			}
//			else if (event.type == sf::Event::KeyPressed)
//			{
//				/*if(event.key == sf::Event::KeyEvent::alt)*/
//
//			}
//		}
//		//------------------------------------------  Update   ----------------------- 
//
//
//		//------------------------------------------Draw-----------------------
//
//		window.clear(sf::Color::Black);
//		
//		//We draw our curret render here // aka backbuffer
//		//Draw
//
//		window.display(); //Copying data from Back Buffer and display on the screen => game loop start
//
//		//------------------------------------------Draw----------------------- 
//	}
//
//    return 0;
//}

//int main() 
//{
//	sf::RenderWindow window(sf::VideoMode(800,600), "MyGame");
//	sf::CircleShape shape(50.0f);
//	/*shape.setFillColor(sf::Color::Green);*/
//	shape.setPosition(sf::Vector2f(100,100));
//	shape.setOutlineThickness(10.0f);
//	shape.setOutlineColor(sf::Color::Yellow);
//	shape.setOrigin(50.0f, 50.0f);
//
//	//Texture
//	sf::Texture texture;
//	texture.loadFromFile("brick.jpg");
//	shape.setTexture(&texture);
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed) 
//			{
//				window.close();
//			}
//			else if (event.type == sf::Event::KeyPressed)
//			{
//				switch (event.key.code) {
//				case sf::Keyboard::A:
//					/*std::cout << "A key was pressed!" << std::endl;*/
//					break;
//				case sf::Keyboard::Escape:
//					//std::cout << "Escape key was pressed!" << std::endl;
//					window.close();
//					break;
//				default:
//					/*std::cout << "Some other key was pressed: "
//						<< event.key.code << std::endl;*/
//					break;
//				}
//			}
//			else if (event.type == sf::Event::Resized) {
//				std::cout << "New window width : " << event.size.width << "New window height : " << event.size.height << std::endl;
//			}
//			else if (event.type == sf::Event::TextEntered) 
//			{
//				if (event.text.unicode < 128 )
//				{
//					//printf("%c", event.text.unicode);
//				}
//				
//			}
//
//		}
//
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) 
//		{
//			sf::Vector2i mousePos = sf::Mouse::getPosition(window);
//			shape.setPosition((float)mousePos.x, (float)mousePos.y);
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) 
//		{
//			shape.move(-0.1f, 0.0f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
//		{
//			shape.move(0.1f, 0.0f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
//		{
//			shape.move(0.0f, -0.1f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
//		{
//			shape.move(0.0f, 0.1f);
//		}
//
//		window.clear(sf::Color::Black);
//		window.draw(shape);
//		window.display();
//	}
//
//	return 0;
//}

//int main()
//{
//	//------------------------------------------ Initialize ----------------------- 
//	sf::ContextSettings settings;
//	settings.antialiasingLevel = 8;
//	sf::RenderWindow window(sf::VideoMode(800,800), "RPG Game");  //accept 2 argument ,Video Mode , window title    
//	//------------------------------------------ Initialize ----------------------- 
//
//	//------------------------------------------ Load ----------------------- 
//
//	sf::Texture playerTexture;
//	sf::Sprite playerSprite;
//
//	if (playerTexture.loadFromFile("assets/Player/Textures/spritesheet.png"))
//	{
//		playerSprite.setTexture(playerTexture);
//
//		int XIndex = 0; int YIndex = 0; int IR = 64;
//		playerSprite.setTextureRect(sf::IntRect(XIndex * IR, YIndex * IR, IR, IR));
//		playerSprite.scale(sf::Vector2f(2, 2));
//
//	}
//
//	//------------------------------------------ Load ----------------------- 
//
//	while (window.isOpen())  //Game loop
//	{
//		//------------------------------------------ Update ----------------------- 
//
//		sf::Event event;
//		while (window.pollEvent(event))  //Event loop   //store event in "event" and execute 
//		{
//			if (event.type == sf::Event::Closed) 
//			{
//				window.close();
//			}
//		}
//
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
//		{
//			playerSprite.move(-0.1f, 0.0f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
//		{
//			playerSprite.move(0.1f, 0.0f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
//		{
//			playerSprite.move(0.0f, -0.1f);
//		}
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
//		{
//			playerSprite.move(0.0f, 0.1f);
//		}
//		//------------------------------------------  Update   ----------------------- 
//
//		//------------------------------------------Draw-----------------------
//
//		window.clear(sf::Color::Black);
//		
//		//We draw our curret render here // aka backbuffer
//		//Draw
//		window.draw(playerSprite);
//		window.display(); //Copying data from Back Buffer and display on the screen => game loop start
//
//		//------------------------------------------Draw----------------------- 
//	}
//
//    return 0;
//}



//===========================================SHooting========================================

//sf::Vector2f NormalizeVection(sf::Vector2f vector) {
//
//	float m = std::sqrt(vector.x * vector.x + vector.y * vector.y);
//
//	sf::Vector2f NormalizedVector;
//
//	NormalizedVector.x = vector.x / m;
//	NormalizedVector.y = vector.y / m;
//
//	return NormalizedVector;
//
//}

//int main()
//{
//	//------------------------------------------ Initialize ----------------------- 
//	sf::ContextSettings settings;
//	settings.antialiasingLevel = 8;
//	sf::RenderWindow window(sf::VideoMode(1920, 1080), "RPG Game");  //accept 2 argument ,Video Mode , window title    
//	//------------------------------------------ Initialize ----------------------- 
//
//	//------------------------------------------ Load ----------------------- 
//	std::vector<sf::RectangleShape> bullets;
//	float bullet_speed = 2.0f;
//	//------------------------------------------ Player ----------------------- 
//	Character player;
//	Character skeleton;
//
//	player.Initialize();
//	skeleton.Initialize();
//
//	player.Load(0, 2, 64, sf::Vector2f(800.0f, 800.0f));
//	skeleton.Load(0, 0, 64, sf::Vector2f(100.0f, 100.0f));
//	//------------------------------------------ Player ----------------------- 
//
//	//------------------------------------------ Load ----------------------- 
//
//	while (window.isOpen())  //Game loop
//	{
//		//------------------------------------------ Update ----------------------- 
//
//		sf::Event event;
//		while (window.pollEvent(event))  //Event loop   //store event in "event" and execute 
//		{
//			if (event.type == sf::Event::Closed)
//			{
//				window.close();
//			}
//		}
//
//		player.Update();
//
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
//		{
//			//------------------------------ Load a bullet -------------------
//			bullets.push_back(sf::RectangleShape(sf::Vector2f(10.0f, 10.0f)));
//			//------------------------------ Load a bullet -------------------
//
//			//------------------------------ Set bullet position -------------------
//			int i = bullets.size() - 1;
//			bullets[i].setPosition(player.sprite.getPosition());
//			//------------------------------ Set bullet position -------------------
//		}
//
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			//------------------------------ Calculate bullet_direction of bullet -------------------
//			sf::Vector2f bullet_direction = skeleton.sprite.getPosition() - bullets[i].getPosition();
//			bullet_direction = NormalizeVection(bullet_direction);
//			//------------------------------ Calculate bullet_direction of bullet -------------------
//
//			//------------------------------ Fire bullet to a direction with speed -------------------
//			bullets[i].setPosition(bullets[i].getPosition() + bullet_direction * bullet_speed);
//			//------------------------------ Fire bullet to a direction with speed -------------------
//		}
//
//		//------------------------------------------  Update ----------------------- 
//		 
//		//------------------------------------------Draw-----------------------
//
//		window.clear(sf::Color::Black);
//		//We draw our curret render here // aka backbuffer
//		//Draw
//
//		player.Draw(window);
//		skeleton.Draw(window);
//
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			window.draw(bullets[i]);
//		}
//		window.display(); //Copying data from Back Buffer and display on the screen => game loop start
//		//------------------------------------------Draw----------------------- 
//	}
//
//	return 0;
//}
//===========================================SHooting========================================


//===========================================AABB Collision========================================
sf::Vector2f NormalizeVection(sf::Vector2f vector) {

	float m = std::sqrt(vector.x * vector.x + vector.y * vector.y);

	sf::Vector2f NormalizedVector;

	NormalizedVector.x = vector.x / m;
	NormalizedVector.y = vector.y / m;

	return NormalizedVector;

}
int main()
{
	//------------------------------------------ Initialize ----------------------- 
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "RPG Game");
	//------------------------------------------ Initialize ----------------------- 

	//------------------------------------------ Load ----------------------- 
	Character player;
	Character skeleton;

	player.Initialize(true, sf::Vector2i(64,64), sf::Vector2i(0,2), sf::Vector2f(800.0f, 800.0f), sf::Vector2f(1.8f, 1.8f));
	skeleton.Initialize(false, sf::Vector2i(64, 64), sf::Vector2i(0, 0), sf::Vector2f(100.0f, 100.0f), sf::Vector2f(1.8f, 1.8f));

	player.Load();
	skeleton.Load();
	//------------------------------------------ Load ----------------------- 

	while (window.isOpen())
	{
		//------------------------------------------ Update ----------------------- 
		sf::Event event;
		while (window.pollEvent(event))  //Event loop   //store event in "event" and execute 
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		player.Update(skeleton.sprite.getPosition());
		//------------------------------------------  Update ----------------------- 
		 
		//------------------------------------------Draw-----------------------
		window.clear(sf::Color::Black);
		player.Draw(window);
		skeleton.Draw(window);
		window.display();
		//------------------------------------------Draw----------------------- 
	}
	return 0;
}
//===========================================AABB Collision========================================


//=============================================ANIMATION=============================================

//#include "Animation.h"
// 
//sf::Vector2f NormalizeVection(sf::Vector2f vector) {
//
//	float m = std::sqrt(vector.x * vector.x + vector.y * vector.y);
//
//	sf::Vector2f NormalizedVector;
//
//	NormalizedVector.x = vector.x / m;
//	NormalizedVector.y = vector.y / m;
//
//	return NormalizedVector;
//
//}
//
//int main()
//{
//	//------------------------------------------ Initialize ----------------------- 
//	sf::ContextSettings settings;
//	settings.antialiasingLevel = 8;
//	sf::RenderWindow window(sf::VideoMode(1920, 1080), "RPG Game");  //accept 2 argument ,Video Mode , window title    
//	//------------------------------------------ Initialize ----------------------- 
//
//	//------------------------------------------ Load ----------------------- 
//	std::vector<sf::RectangleShape> bullets;
//	float bullet_speed = 2.0f;
//	//------------------------------------------ Player ----------------------- 
//	AnimationCharacter player;
//	AnimationCharacter skeleton;
//
//	player.Initialize();
//	skeleton.Initialize();
//
//	player.Load(0, 2, 64,sf::Vector2f(800.0f, 800.0f), sf::Vector2f(2.0f,2.0f));
//	skeleton.Load(0, 0, 64,sf::Vector2f(100.0f, 100.0f), sf::Vector2f(2.0f, 2.0f));
//
//	//Animation
//	Animation playerAnimation(&player.texture, sf::Vector2u(9,4), 0.3);
//	Animation skeletonAnimation(&skeleton.texture, sf::Vector2u(9,4), 0.3);
//	
//	float deltaTime = 0.0f;
//	sf::Clock clock;
//
//	//------------------------------------------ Player ----------------------- 
//
//	//------------------------------------------ Load ----------------------- 
//
//	while (window.isOpen())  //Game loop
//	{
//
//		deltaTime = clock.restart().asSeconds();
//
//		//------------------------------------------ Update ----------------------- 
//
//		sf::Event event;
//		while (window.pollEvent(event))  //Event loop   //store event in "event" and execute 
//		{
//			if (event.type == sf::Event::Closed)
//			{
//				window.close();
//			}
//		}
//
//		player.Update();
//
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
//		{
//			//------------------------------ Load a bullet -------------------
//			bullets.push_back(sf::RectangleShape(sf::Vector2f(10.0f, 10.0f)));
//			//------------------------------ Load a bullet -------------------
//
//			//------------------------------ Set bullet position -------------------
//			int i = bullets.size() - 1;
//			bullets[i].setPosition(player.sprite.getPosition());
//			//------------------------------ Set bullet position -------------------
//		}
//
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			//------------------------------ Calculate bullet_direction of bullet -------------------
//			sf::Vector2f bullet_direction = skeleton.sprite.getPosition() - bullets[i].getPosition();
//			bullet_direction = NormalizeVection(bullet_direction);
//			//------------------------------ Calculate bullet_direction of bullet -------------------
//
//			//------------------------------ Fire bullet to a direction with speed -------------------
//			bullets[i].setPosition(bullets[i].getPosition() + bullet_direction * bullet_speed);
//			//------------------------------ Fire bullet to a direction with speed -------------------
//		}
//
//		//------------------------------------------  Update ----------------------- 
//
//		//------------------------------------------Draw-----------------------
//
//		window.clear(sf::Color::Black);
//		//We draw our curret render here // aka backbuffer
//		//Draw
//
//		//----------------Animation-----------------
//		playerAnimation.Update(1, deltaTime);
//		player.sprite.setTextureRect(playerAnimation.uvRect);
//
//		skeletonAnimation.Update(3, deltaTime);
//		skeleton.sprite.setTextureRect(skeletonAnimation.uvRect);
//		//------------------Animation--------------------
//
//		player.Draw(window);
//		skeleton.Draw(window);
//
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			window.draw(bullets[i]);
//		}
//		window.display(); //Copying data from Back Buffer and display on the screen => game loop start
//		//------------------------------------------Draw----------------------- 
//	}
//
//	return 0;
//}

//=============================================ANIMATION=============================================
