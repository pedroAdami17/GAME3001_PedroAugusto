#pragma once
#ifndef __OBSTACLE__
#define __OBSTACLE__
#include "DisplayObject.h"


class Obstacle final : public DisplayObject
{
public:
	//constructors
	Obstacle();

	//destructors
	~Obstacle();
	
	void draw() override;
	void update() override;
	void clean() override;
};

#endif /*defined (__OBSTACLE__)*/

