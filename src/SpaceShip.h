#pragma once
#ifndef __Space_Ship__
#define __Space_Ship__
#include "DisplayObject.h"
#include "TextureManager.h"

class SpaceShip final : public DisplayObject
{
public:
	// constructor(s)
	SpaceShip();

	// Destructor
	~SpaceShip();


	// Life-cycle methods inherited from DisplayObject
	void draw() override;
	void update() override;
	void clean() override;
};

#endif // defined (__Space_Ship__)
