#ifndef _GAMEWORLD_

#define _GAMEWORLD_

#include "cocos2d.h"

USING_NS_CC;


//#include <string>


//provide easy access
#define theWorld GameWorld::getInstance()

class Packer;


class GameWorld: public  Layer
{

private:

	GameWorld();
	~GameWorld();


	// a pointer to the map
	 TMXTiledMap* m_pMap;

	 // a pointer to the main player
	 Packer* m_pMainPlayer;



public:

	static GameWorld* getInstance();

	void update(float dt);

	void Start();

	TMXTiledMap* getMap(){return m_pMap;}

	// will be called when button marine is clicked
	virtual void OnClickButton1(Ref* pSender);


	// will be called when button marauder is clicked
	virtual void OnClickButton2(Ref* pSender);

	// will be called when button marine is clicked
	virtual void OnClickButton3(Ref* pSender);


	// will be called when button marauder is clicked
	virtual void OnClickButton4(Ref* pSender);



};


#endif