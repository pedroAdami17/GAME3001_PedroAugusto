#pragma once
#ifndef __SEEK_SCENE__
#define __SEEK_SCENE__

#include "Scene.h"
#include "Button.h"
#include "Label.h"
#include "Obstacle.h"
#include "SpaceShip.h"
#include "Target.h"
#include "ship.h"


class SeekScene : public Scene
{
public:
	SeekScene();
	~SeekScene();

	
	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;


private:
	// IMGUI Function
	void GUI_Function() const;
	std::string m_guiTitle;

	glm::vec2 m_mousePosition;

	SpaceShip* m_pSpaceShip;
	Target* m_pTarget;
	Obstacle* m_pObstacle;

	Label* m_pStartLabel{};
	Label* m_pInstructionsLabel{};

	Ship* m_pShip{};

};

#endif
