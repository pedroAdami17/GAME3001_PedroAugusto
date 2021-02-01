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
	glm::vec2 getOrientation();
	void setOrientation(glm::vec2 orientation);
	float getRotation() const;
	void setRotation(float angle);
	float getTurnRate();
	void setTurnRate(float rate);
	float getAccelerationRate();
	void setAccelerationRate(float rate);

private:

	glm::vec2 m_destination;
	glm::vec2 m_targetDirection;
	glm::vec2 m_orientation;
	float m_rotationAngle;
	float m_maxSpeed;
	float m_turnRate;
	float m_accelerationRate;

	//private function
	void m_Move();
	
};



#endif // defined (__Space_Ship__)
