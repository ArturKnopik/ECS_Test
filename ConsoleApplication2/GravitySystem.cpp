
#include "GravitySystem.h"
#include <iostream>

GravitySystem::GravitySystem()
	:gravityPower(1)
{
}

GravitySystem::GravitySystem(int gravityPower)
	:gravityPower(gravityPower)
{
}



GravitySystem::~GravitySystem()
{
}

void GravitySystem::update(std::shared_ptr<Entity> entity)
{
	std::shared_ptr<PositionComponent> position;;
	if (entity->findComponent(ComponentEnum::POSITION_COMPONENT) == true)
	{
		if (position = std::dynamic_pointer_cast<PositionComponent>(entity->getComponent(ComponentEnum::POSITION_COMPONENT)))
		{
			std::cout << "True" << std::endl;
		}
		else
		{
			std::cout << "False" << std::endl;
		}
	}
	position->x = position->x + 1;
	std::cout << "Position.x: " << position->x << std::endl;
}
