#pragma once
#include "Collider.h"

class PlaneCollider : public Collider
{
private:
	glm::vec3 normal;
	float distance;

public:
	PlaneCollider(const glm::vec3& normal, float distance, Transformations transformations) : 
		normal(normal), distance(distance), Collider(transformations) {};
	virtual ~PlaneCollider() = default;
	virtual void Update(float deltaTime) override {
		// Plane collider does not need to update over time, so this can be left empty.
	}
	const glm::vec3& GetNormal() const { return normal; }
	float GetDistance() const { return distance; }
};