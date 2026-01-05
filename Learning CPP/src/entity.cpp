#include "../header/entity.h"

Entity::Entity()
	: _name("Unknown/Unnamed Entity"), x(0.f), y(0.f)
{
	Logger::PrintLog(INFO, "Entity Created: " + _name);
	//std::cout << "Entity Created: " << "'" << _name << "'"  << std::endl;
}

Entity::Entity(string name)
	: _name(name), x(0.f), y(0.f)
{
	Logger::PrintLog(INFO, "Entity Created: " + _name);
	//std::cout << "Entity Created: " << "'" << _name << "'"  << std::endl;
}

//copy constructor
//explicit Entity::Entity(const Entity& other)
//	: x(other.x), y(other.y)
//{
//	_name = other._name;
//	Logger::PrintLog(WARNING, "Copying Entity: " + _name);
//}

Entity::~Entity() {
	Logger::PrintLog(INFO, "Entity Deleted: " + _name);
	//std::cout << "Entity Deleted: " << "'" << _name << "'"  << std::endl;
}

void Entity::Entity_SetPosition(float x, float y) {
	Entity::x = x;
	Entity::y = y;
}

void Entity::Entity_SetName(const string newName) {
	Entity::_name = newName;
}