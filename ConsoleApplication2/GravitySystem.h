#pragma once
#include "System.h"
#include "GravitySystem.h"
#include "Entity.h"
#include "PositionComponent.h"
class GravitySystem :
	public System
{
	int gravityPower;
public:
	GravitySystem();
	GravitySystem(int gravityPower=1);
	virtual ~GravitySystem();
	void update(std::shared_ptr<Entity> entity);
};

