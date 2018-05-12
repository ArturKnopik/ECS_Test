
#include "PositionComponent.h"


PositionComponent::PositionComponent()
	:x(0),y(0)
{
	setName("PositionComponent");
}

PositionComponent::PositionComponent(int x, int y)
	:x(x), y(y)
{
	setName("PositionComponent");
}

std::string PositionComponent::getName()
{
	return "PositionComponent";
}


PositionComponent::~PositionComponent()
{
}
