#pragma once
#include "Component.h"
class HealthComponent :
	public Component
{
public:
	int maxHealth;
	int currentHealth;
	HealthComponent();
	HealthComponent(int maxHealth);
	virtual ~HealthComponent();
	std::string getName();
};

