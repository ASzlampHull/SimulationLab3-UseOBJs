#include "PhysicsObject.h"

void PhysicsObject::Update(float deltaTime)
{
}

void PhysicsObject::CreateSphereCollider(float radius) {
	collider = std::make_unique<SphereCollider>(radius, transformations);
}

void PhysicsObject::CreatePlaneCollider(const glm::vec3& normal, float distance)
{
	collider = std::make_unique<PlaneCollider>(normal, distance, transformations);
}


