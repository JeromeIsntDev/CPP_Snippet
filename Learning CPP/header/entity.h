#pragma once

#ifndef _ENT_H_
#define _ENT_H_

#include <iostream>
#include <string>
#include "../header/iPrintable.h"
#include "../header/log.h"

#define string std::string

class Entity : public iPrintable{
//Variables
protected:
	float x, y;
	string _name;
//!Variables

//Structors
public:
	Entity();
	Entity(string name);
	//copy constructor
	explicit Entity(const Entity& other);
	~Entity();
//!Structors

//Functions
public:
	void Entity_SetPosition(float x, float y);
	void Entity_SetName(string newName);
	virtual string Entity_GetName() { return _name; }
	//Taken from iPrintable interface
	string GetClassType() override { return "Entity"; }
//!Functions


};//!

#endif // !_ENT_H_