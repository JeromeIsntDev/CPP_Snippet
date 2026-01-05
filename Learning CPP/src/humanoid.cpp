#include "../header/entity.h"
#include "../header/humanoid.h"

Humanoid::Humanoid()
	: Entity("Unknown/Unnamed Humanoid")
{
	Logger::PrintLog(INFO, "Humanoid Created: " + _name);
	//std::cout << "Entity Created: " << "'" << _name << "'"  << std::endl;
}

Humanoid::Humanoid(string name)
	: Entity(name)
{
	Logger::PrintLog(INFO, "Humanoid Created: " + _name);
	//std::cout << "Humanoid Created: " << "'" << _name << "'"  << std::endl;
}

Humanoid::Humanoid(const Humanoid& other)
	: Entity(other)
{
	//_name = other._name;
	Logger::PrintLog(WARNING, "Copying Humanoid: " + _name);
}

Humanoid::~Humanoid() {
	Logger::PrintLog(INFO, "Humanoid Deleted: " + _name);
	//std::cout << "Entity Deleted: " << "'" << _name << "'"  << std::endl;
}