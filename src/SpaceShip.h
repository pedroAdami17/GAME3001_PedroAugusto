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

//Getters and Setters
	void setDestination(glm::vec2 destination);
	void setMaxSpeed(float speed);

private:

	glm::vec2 m_destination;
	glm::vec2 m_targetDirection;
	float m_maxSpeed;

	//private function
	void m_Move();
	
};


#endif // defined (__Space_Ship__)
