#pragma once
#include "Component.h"
class PositionComponent :
	public Component
{
public:
	int x, y;
	PositionComponent();
	PositionComponent(int x, int y);
	std::string getName();

	virtual ~PositionComponent();
};

