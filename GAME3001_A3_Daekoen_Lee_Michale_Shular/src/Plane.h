#pragma once
#ifndef __PLANE__
#define __PLANE__

#include "Sprite.h"

class Plane final : public Sprite
{
public:
	Plane();
	~Plane();

	// Life Cycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	int getHealth();
	void setHealth(int a);

private:
	void m_buildAnimations();
	int m_health;
};

#endif /* defined (__PLANE__) */
