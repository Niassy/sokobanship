#ifndef PACKER

#define PACKER

#include "cocos2d.h"

USING_NS_CC;

#include <string>

class GameWorld;
 
class Packer : public Sprite
{

protected:

	Packer(std::string file,Vec2 pos,GameWorld* game);
	~Packer();


	// coordinate's tile of the packer
	// this will be used to multiply with the
	// tile size

	int tileX;
	int tileY;



public:
		

	static Packer* create(std::string file,Vec2 pos,GameWorld* game);

	void update(float dt);

	void updateMovement(float dt);

	void Start();

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();




};


#endif