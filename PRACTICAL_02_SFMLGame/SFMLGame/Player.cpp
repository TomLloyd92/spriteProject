#include <Player.h>

Player::Player() { initialize(); };
Player::~Player(){};

void Player::initialize()
{
	
	if (!playerTexture.loadFromFile("megaman.png"))
	{
		std::cout << "Player NPC Didnt load" << std::endl;
	}

	//cout << "Player initialize" << endl;
}
void Player::update()
{
	//cout << "Player updating" << endl;
	
	playerSprite.setTexture(playerTexture);
}
void Player::draw()
{
	//cout << "Player drawing" << endl;
}