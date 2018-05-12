
#include "ComponentList.h"


ComponentNameGetter::ComponentNameGetter()
{
}


ComponentNameGetter::~ComponentNameGetter()
{
}

std::string ComponentNameGetter::getComponentName(ComponentEnum componentName)
{
	switch (componentName)
	{
	case HEALTH_COMPONENT:
		return "HealthComponent";
		break;
	case POSITION_COMPONENT:
		return "PositionComponent";
		break;


	default:
		return "Error";
		break;
	}
	return std::string();
}
