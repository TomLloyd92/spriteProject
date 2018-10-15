#include <NPC.h>

NPC::NPC() { initialize(); };
NPC::~NPC(){};

void NPC::initialize()
{
	//cout << "NPC initialize" << endl;
	if (!npcTexture.loadFromFile("npc.png"))
	{
		std::cout << "ERROR NPC Didnt load" << std::endl;
	}
}
void NPC::update()
{
	//cout << "NPC updating" << endl;

	npcSprite.setTexture(npcTexture);
	npcSprite.setPosition(300, 130);
}
void NPC::draw(sf::RenderWindow t_window)
{
	//cout << "NPC drawing" << endl;
}