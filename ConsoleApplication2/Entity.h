#pragma once
#include "Component.h"
#include <memory>
#include <vector>
#include <utility>
class Entity
{
private:
	int uID;
	static int currentID;
	std::vector<std::shared_ptr<Component>> componentList;
public:
	Entity();
	virtual ~Entity();
	virtual void update();
	virtual void draw();
	void pushComponent(std::shared_ptr<Component> component);
	bool findComponent(ComponentEnum component);
	std::shared_ptr<Component> getComponent(ComponentEnum component);
};

