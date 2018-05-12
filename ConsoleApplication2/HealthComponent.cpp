
#include "HealthComponent.h"


HealthComponent::HealthComponent()
	:maxHealth(100), currentHealth(100)
{
	setName("HealthComponent");
}

HealthComponent::HealthComponent(int maxHealth)
	:currentHealth(maxHealth), maxHealth(maxHealth)
{
	setName("HealthComponent");
}


HealthComponent::~HealthComponent()
{
}

std::string HealthComponent::getName()
{
	return "HealthComponent";
}




