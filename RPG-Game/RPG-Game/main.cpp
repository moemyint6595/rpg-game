#include <SFML/Graphics.hpp>
#include <iostream>
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

#include <math.h>

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
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "RPG Game");  //accept 2 argument ,Video Mode , window title    
	//------------------------------------------ Initialize ----------------------- 

	//------------------------------------------ Load ----------------------- 

	std::vector<sf::RectangleShape> bullets;
	//sf::RectangleShape bullet(sf::Vector2f(10.0f,10.0f));
	float bullet_speed = 2.0f;


	//------------------------------------------ Player ----------------------- 
	sf::Texture playerTexture;
	sf::Sprite playerSprite;

	sf::Texture skeletonTexture;
	sf::Sprite skeletonSprite;

	if (playerTexture.loadFromFile("assets/Player/Textures/spritesheet.png"))
	{
		playerSprite.setTexture(playerTexture);
		skeletonSprite.setTexture(playerTexture);

		int XIndex = 0; int YIndex = 2; int IR = 64;
		playerSprite.setTextureRect(sf::IntRect(XIndex * IR, YIndex * IR, IR, IR));
		playerSprite.scale(sf::Vector2f(2, 2));
		playerSprite.setPosition(sf::Vector2f(1650.0f, 800.0f));
		//bullet.setPosition(InitialPosition);

		int SXIndex = 0; int SYIndex = 0; int SIR = 64;
		skeletonSprite.setTextureRect(sf::IntRect(SXIndex * IR, SYIndex * SIR, SIR, SIR));
		skeletonSprite.scale(sf::Vector2f(2, 2));
		skeletonSprite.setPosition(sf::Vector2f(100.0f, 500.0f));
	}
	//------------------------------------------ Player ----------------------- 

	//------------------------------------------ Load ----------------------- 

	while (window.isOpen())  //Game loop
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

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			playerSprite.move(-0.3f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			playerSprite.move(0.3f, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			playerSprite.move(0.0f, -0.3f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			playerSprite.move(0.0f, 0.3f);
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
		{
			//------------------------------ Load a bullet -------------------
			bullets.push_back(sf::RectangleShape(sf::Vector2f(10.0f, 10.0f)));
			//------------------------------ Load a bullet -------------------

			//------------------------------ Set bullet position -------------------
			int i = bullets.size() - 1;
			bullets[i].setPosition(playerSprite.getPosition());
			//------------------------------ Set bullet position -------------------

			

		}

		for (size_t i = 0; i < bullets.size(); i++)
		{
			//------------------------------ Calculate bullet_direction of bullet -------------------
			sf::Vector2f bullet_direction = skeletonSprite.getPosition() - bullets[i].getPosition();
			bullet_direction = NormalizeVection(bullet_direction);
			//------------------------------ Calculate bullet_direction of bullet -------------------

			//------------------------------ Fire bullet to a direction with speed -------------------
			bullets[i].setPosition(bullets[i].getPosition() + bullet_direction * bullet_speed);
			//------------------------------ Fire bullet to a direction with speed -------------------
		}

		//------------------------------------------  Update ----------------------- 
		 
		//------------------------------------------Draw-----------------------

		window.clear(sf::Color::Black);

		//We draw our curret render here // aka backbuffer
		//Draw
		window.draw(playerSprite);
		window.draw(skeletonSprite);
		for (size_t i = 0; i < bullets.size(); i++)
		{
			window.draw(bullets[i]);
		}
		//window.draw(bullet);
		window.display(); //Copying data from Back Buffer and display on the screen => game loop start

		//------------------------------------------Draw----------------------- 
	}

	return 0;
}

