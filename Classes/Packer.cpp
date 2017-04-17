#include "Packer.h"
#include "GameWorld.h"



Packer::Packer(std::string file,Vec2 pos,GameWorld* game)
{
	//setTexture(file);

	//game->addChild(this,10);



	// search for the tile
	tileX =   (int) pos.x / 32;
	tileY  = (int) pos.y / 32;

	pos.x = tileX * 32;
	pos.y = tileY * 32;

	setPosition(pos);


	//this->scheduleUpdate();

}

Packer::~Packer()
{

}


void Packer::Start()
{

}


void Packer::update(float dt)
{
	this->updateMovement(dt);
}


void Packer::updateMovement(float dt)
{
	/*auto tileSize = theWorld->getMap()->getTileSize();

	auto mapSize = theWorld->getMap()->getMapSize(); 

	Vec2 tileLength = Vec2( (int) (  mapSize.width / tileSize.width ), (int) ( mapSize.height / tileSize.height ));

	Vec2 pos =  Vec2( tileLength.x * tileX,  tileLength.y *  tileY );
	*/


	// for test only
	//tileX--;

	Vec2 pos = Vec2(tileX * 32, tileY * 32 );
	setPosition(pos);

}


Packer* Packer::create(std::string file,Vec2 pos,GameWorld* game)
{
	Packer* sprite = new  Packer(file,pos,game);

	
	if (sprite && sprite->init())
	{
		sprite->autorelease();
		sprite->setTexture(file);
		return sprite;
	}


	CC_SAFE_DELETE(sprite);

	//game->addChild(sprite);

	return nullptr;
}



void Packer::moveLeft()
{
	tileX--;

	if (tileX < 0)
		tileX = 0;
}


void Packer::moveRight()
{
	tileX++;

	/*auto size = theWorld->getMap()->getMapSize();

	if (tileX > size.width - 1)
		tileX = size.width - 1;


	if (theWorld->getMap())
	{
		auto layer = theWorld->getMap()->getLayer("Layer 0");

		//if (layer)
		//{
			
		//}

	}*/
}

void Packer::moveUp()
{
	tileY--;

	if (tileY < 0)
		tileY = 0;
}


void Packer::moveDown()
{
	tileY++;

	auto size = theWorld->getMap()->getMapSize();

	if (tileY > size.height - 1)
		tileY = size.height - 1;

}
