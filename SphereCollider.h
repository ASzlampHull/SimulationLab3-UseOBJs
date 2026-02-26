#pragma once
#include "Collider.h"

class SphereCollider : public Collider
{
private:
	float radius;
public:
	SphereCollider(float radius, Transformations transformations) : radius(radius), Collider(transformations) {};
	virtual ~SphereCollider() = default;
	virtual void Update(float timeStep) override {
		
	}
	float GetRadius() const { return radius; }
};
