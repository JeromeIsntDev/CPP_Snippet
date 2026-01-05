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

//Constructors & Destructors
public:
	Entity();
	Entity(string name);
	//Constructor that copies another Entity's Variables
	explicit Entity(const Entity& other);
	~Entity();

//Functions
public:
	void Entity_SetPosition(float x, float y);
	void Entity_SetName(string newName);
	virtual string Entity_GetName();
	//Taken from iPrintable interface
	string GetClassType() override;

};


#endif // !_ENT_H_