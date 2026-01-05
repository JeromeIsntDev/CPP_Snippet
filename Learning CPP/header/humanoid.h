#pragma once

#ifndef _HUM_H_
#define _HUM_H_

#include "../header/entity.h"

class Humanoid : public Entity {

//Constructors & Destructors
public:
	Humanoid();
	Humanoid(string name);
	Humanoid(const Humanoid& other);
	~Humanoid();

//Functions
public:
	string Entity_GetName() override { return _name; }
	string GetClassType() override { return  "Humanoid"; }

}; 

#endif // !_HUM_H_