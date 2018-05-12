#pragma once
#include "System.h"
class TestSystem :
	public System
{
public:
	TestSystem();
	virtual ~TestSystem();
	void update(std::shared_ptr<Entity> entity);
};

