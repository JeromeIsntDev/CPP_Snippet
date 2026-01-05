#include "../header/entity.h"
#include "../header/humanoid.h"

Humanoid::Humanoid() : Entity("Unknown/Unnamed Humanoid")
{
	Logger::PrintLog(INFO, "Humanoid Created: " + _name);
}

Humanoid::Humanoid(string name) : Entity(name)
{
	Logger::PrintLog(INFO, "Humanoid Created: " + _name);
}

Humanoid::Humanoid(const Humanoid& other) : Entity(other)
{
	Logger::PrintLog(WARNING, "Copying Humanoid: " + _name);
}

Humanoid::~Humanoid() {
	Logger::PrintLog(INFO, "Humanoid Deleted: " + _name);
}
