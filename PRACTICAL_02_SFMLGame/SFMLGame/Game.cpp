#include <Game.h>
#include <SFML/Graphics.hpp>
#include "NPC.h"
#include "Player.h"

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");

	
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		player->update();
		npc->update();
	}

	if (npc->npcSprite.getGlobalBounds().intersects(player->playerSprite.getGlobalBounds()))
	{ 
		std::cout << "Collision Brah" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		
		player->playerSprite.setPosition(player->playerSprite.getPosition().x - 1, player->playerSprite.getPosition().y);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{

		player->playerSprite.setPosition(player->playerSprite.getPosition().x + 1, player->playerSprite.getPosition().y);
	}
}

void Game::draw()
{
	window->clear();
	//window->draw(shape);
	player->draw();
	//npc->draw();

	window->draw(npc->npcSprite);
	window->draw(player->playerSprite);
	window->display();
	
}


