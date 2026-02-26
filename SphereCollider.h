#pragma once
#include "Collider.h"

class SphereCollider : public Collider
{
private:
	float radius;
public:
	SphereCollider(float radius, Transformations transformations) : radius(radius), Collider(transformations) {};
	virtual ~SphereCollider() = default;
	virtual void Update(float deltaTime) override {
		// Sphere collider does not need to update over time, so this can be left empty.
	}
	float GetRadius() const { return radius; }
};
