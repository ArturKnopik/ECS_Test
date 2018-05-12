#pragma once
#include <string>
#include "ComponentList.h"
class Component
{
	std::string name;
protected:
	void setName(std::string name);
public:
	Component();
	virtual ~Component();
	virtual std::string getName() =0;
};

