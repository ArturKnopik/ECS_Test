#pragma once
#include <memory>
class Entity;
class System
{
public:
	System();
	virtual ~System();
	virtual void update(std::shared_ptr<Entity> entity) = 0;
		
};

