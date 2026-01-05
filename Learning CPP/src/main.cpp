#include <iostream>
#include <vector>
#include <array>
#include "../header/log.h"
#include "../header/entity.h"
#include "../header/humanoid.h"
#include "../header/iPrintable.h"
#include "../header/vector.h"

#ifndef _TEMPLATES_

template <typename T>
void PrintType(T value) {
	std::cout << value << std::endl;
}

template <class C>
void PrintClass(C value) {
	std::cout << *value << std::endl;
}

static void TemplateExample() {
	//Templates
	PrintType<int>(2);
	PrintType<float>(2.1f);
	PrintClass(new Vector2({ 1.f,1.f }));
}

#endif // !_TEMPLATES_

#ifndef _CLASSES_

static void PrintEntityName(Entity* ePointer) {
	std::cout << "Entity Name: "
		<< ePointer->Entity_GetName() << std::endl;
}

static void GetClassType(Entity* e) {
	Logger::PrintLog(INFO, "Class of: " + e->Entity_GetName() + " is " + e->GetClassType());
}

//REMINDER!! Things created in this ClassExample is destroyed/deleted when
//it ends. Things only exist within the scope/stack in such context. 
static void ClassExample() {
	Entity entity("Stack Entity"); //STACK Allocation, i.e. exists only in scope
	Entity* p_Entity = new Entity("Heap Entity"); //HEAP Allocation, i.e. exists beyond scope (Must be manually deleted)

	Humanoid* human = new Humanoid("Jerome");
	Humanoid* human2 = new Humanoid;

	Entity entityCopy(*human);
	Humanoid humanoidCopy(*human);

	//PrintEntityName(human);
	//PrintEntityName(human2);

	//GetClassType(&entity);
	//GetClassType(human);

	delete(p_Entity);
	delete human;
	delete(human2);

	//To signify end of scope in console
	Logger::PrintLog(WARNING, "Function End");
}

#endif // !_CLASSES_

#ifndef _STRUCTS_AND_OPERATOR_OVERLOADING_

static void StructAndOperatorOverloadingExample() {
	Vector2 testV0(2.f, 5.f);
	Vector2 testV1(3.f, 2.f);
	std::cout << "Vector2(x,y) Vector 1: " << testV0 << std::endl;
	std::cout << "Vector2(x,y) Vector 2: " << testV1 << std::endl;

	Vector2 result = testV0 + testV1;
	std::cout << "Vector2(x,y) Addition: " << result << std::endl;

	result = testV0 * testV1;
	std::cout << "Vector2(x,y) Mutliplication: " << result << std::endl;

	int t = testV0 == testV1;
	std::cout << "Vector2(x,y) If Equals: " << t << std::endl;
	t = testV0 != testV1;
	std::cout << "Vector2(x,y) If Not Equals: " << t << std::endl;
}

#endif // !_STRUCTS_AND_OPERATOR_OVERLOADING_

#ifndef _ARRAYS_AND_FUNCTION_POINTER_

static void PrintValue(int value) {
	std::cout << "Value: " << value << std::endl;
}

//Function Pointer Example
static void ForEach(std::vector<int>& values, void(*func)(int)) {
	for (int i : values) {
		func(i);
	}
}

static void DynamicArrayExample() {
	//Dynamic Arrays
	std::vector<int> ints;
	//To prevent constant resizing
	ints.reserve(4);
	ints.push_back({ 1 });
	ints.push_back({ 2 });
	ints.push_back({ 5 });
	ints.push_back({ 3 });

	//For-all-in
	Logger::PrintLog(INFO, "Printing ForEach using PrintValue(int)");
	ForEach(ints, PrintValue);
	//Captcha Example with square brackets
	Logger::PrintLog(INFO, "Printing ForEach using Captcha/Lambda Method [](int value)");
	ForEach(ints, 
		[](int value) { 
			std::cout << "Value: " << value << std::endl; 
		}
	);
}

static void StaticArrayExample() {
	std::array<int, 5> ints = { 1,3,5,9,5 };

	for (int i = 0; i < ints.size(); ++i) {
		std::cout << i + 1 << ". Array Value: " << ints[i] << std::endl;
	}
}

#endif // !_ARRAYS_AND_FUNCTION_POINTER_


//Comment and Uncomment Examples to see how things work
int main() {
	//ClassExample();
	//DynamicArrayExample();
	//StaticArrayExample();
	//StructAndOperatorOverloadingExample();
	TemplateExample();
	
	//Wait for user input
	std::cin.get();

	return 0;
}
