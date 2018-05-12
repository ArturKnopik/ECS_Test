#include "TestSystem.h"
#include "Entity.h"
#include "PositionComponent.h"
#include "HealthComponent.h"
#include <iostream>


TestSystem::TestSystem()
{
}


TestSystem::~TestSystem()
{
}

void TestSystem::update(std::shared_ptr<Entity> entity)
{
	std::shared_ptr<PositionComponent> position;
	std::shared_ptr<HealthComponent> health;
	if (entity->findComponent(ComponentEnum::HEALTH_COMPONENT) == true && (entity->findComponent(ComponentEnum::POSITION_COMPONENT)))
	{
		if (!(position = std::dynamic_pointer_cast <PositionComponent>(entity->getComponent(ComponentEnum::POSITION_COMPONENT))))
		{
			std::cout << "Cant dynamic cast!!!: " <<  std::endl;
		}
		if (!(health = std::dynamic_pointer_cast <HealthComponent>(entity->getComponent(ComponentEnum::HEALTH_COMPONENT))))
		{
			std::cout << "Cant dynamic cast!!!: " << std::endl;
		}
		std::cout << "Position.x: " << position->x << std::endl;
		std::cout << "Health.hp: " << health->currentHealth<< std::endl;
		position->x = position->x + 1;
		health->currentHealth++;
		std::cout << "Position.x: " << position->x << ", Health.hp: " << health->currentHealth << std::endl;
	}
	
	
}
