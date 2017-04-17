#include "GameWorld.h"

#include "Packer.h"

GameWorld::GameWorld()
{
}


GameWorld::~GameWorld()
{
}


GameWorld* GameWorld::getInstance()
{
	static GameWorld game;
	return &game;
}


void GameWorld::Start()
{
	
	//auto map = TMXTiledMap::create("level1.tmx");
//   addChild(map, 0);

	//auto layer = map->getLayer("Layer 0");
 //   
	//auto tile0= layer->getTileAt( Vec2(6,8) );
	////tile0->setScale(2);
 //   
	////layer->setTileGID(1,Vec2(3,0));

	//Packer* packer = Packer::create("ship1.png",Vec2(800,100),this);
	//packer->setScale(0.4);
	//addChild(packer,5);

	//m_pMainPlayer = packer;

	//// create your packer

	////Packer* packer = Packer::create("ship1.png",Vec2(600,600),theWorld);
	////packer->setScale(10);

	////addChild(packer,10);
	////packer->setPosition(Vec2(400,400));


	//MenuItemImage *l1 = MenuItemImage::create(
	//	"b1.png",
	//	"b2.png",
	//	CC_CALLBACK_1(GameWorld::OnClickButton1,this));

	//MenuItemImage *l2 = MenuItemImage::create(
	//	"b1.png",
	//	"b2.png",
	//	CC_CALLBACK_1(GameWorld::OnClickButton2,this));


	//MenuItemImage *l3 = MenuItemImage::create(
	//	"b1.png",
	//	"b2.png",
	//	CC_CALLBACK_1(GameWorld::OnClickButton2,this));


	//MenuItemImage *l4 = MenuItemImage::create(
	//	"b1.png",
	//	"b2.png",
	//	CC_CALLBACK_1(GameWorld::OnClickButton2,this));

	//// position management
	//l2->setPosition(Vec2(100,0));
	//l2->setRotation(180);

	//l3->setPosition(Vec2(50,70));
	//l3->setRotation(90);

	//
	//l4->setPosition(Vec2(50,-70));
	//l4->setRotation(-90);

	//Menu* pMenu = Menu::create(l1,l2,l3,l4,NULL);
	//addChild(pMenu);

	//pMenu->setPosition(Vec2(pMenu->getPositionX() + 330 ,pMenu->getPositionY() - 200));

	//this->scheduleUpdate();

}




// will be called when button marine is clicked
void GameWorld::OnClickButton1(Ref* pSender)
{
	/*if (m_pMainPlayer)
	{
		m_pMainPlayer->moveLeft();
	}*/
}


// will be called when button marine is clicked
void GameWorld::OnClickButton2(Ref* pSender)
{
	/*if (m_pMainPlayer)
	{
		m_pMainPlayer->moveRight();
	}*/
}



// will be called when button marine is clicked
void GameWorld::OnClickButton3(Ref* pSender)
{
	/*if (m_pMainPlayer)
	{
		m_pMainPlayer->moveUp();
	}*/
}


// will be called when button marine is clicked
void GameWorld::OnClickButton4(Ref* pSender)
{
	/*if (m_pMainPlayer)
	{
		m_pMainPlayer->moveDown();
	}*/
}


void GameWorld::update(float dt)
{
	/*if (m_pMainPlayer)
		m_pMainPlayer->update(dt);*/
}

