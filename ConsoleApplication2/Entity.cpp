
#include "Entity.h"
#include "HealthComponent.h"

int Entity::currentID = 0;
Entity::Entity()
{
	this->uID = currentID;
	currentID++;
}


Entity::~Entity()
{
}

void Entity::update()
{
}

void Entity::draw()
{
}

void Entity::pushComponent(std::shared_ptr<Component> component)
{
	componentList.push_back(component);
}

bool Entity::findComponent(ComponentEnum component)
{
	for (int i = 0; i < componentList.size(); ++i)
	{
		if (componentList[i]->getName() == ComponentNameGetter().getComponentName(component))
		{
			return true;
		}
	}
	return false;
}

std::shared_ptr<Component> Entity::getComponent(ComponentEnum component)
{
	for (int i = 0; i < componentList.size(); ++i)
	{
		if (componentList[i]->getName() == ComponentNameGetter().getComponentName(component))
		{
			return componentList[i];
		}
	}
}
