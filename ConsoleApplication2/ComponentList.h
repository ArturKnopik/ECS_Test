#pragma once
#include <string>
enum ComponentEnum
{
	POSITION_COMPONENT,
	HEALTH_COMPONENT
};

class ComponentNameGetter
{
public:
	ComponentNameGetter();
	~ComponentNameGetter();
	std::string getComponentName(ComponentEnum componentName);
};

