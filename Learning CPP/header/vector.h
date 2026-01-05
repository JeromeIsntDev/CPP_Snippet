#pragma once

#ifndef _VEC_H_
#define _VEC_H_

#include <string>
#define string std::string

struct Vector2 {
	float x, y;
	Vector2(float x, float y) : x(x), y(y) {
		Logger::PrintLog(INFO, "Creating Vector");
	}

private:
	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}

	bool Equals(const Vector2& other) const {
		return (x == other.x) && (y == other.y);
	}

public:
	Vector2 operator+(const Vector2& other) const {
		return Add(other);
	}

	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}

	bool operator==(const Vector2& other) const {
		return Equals(other);
	}

	bool operator!=(const Vector2& other) const {
		return !(*this == other);
	}
};

//Overloads the operator '<<' to allow for Vectors to be output directly
std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << other.x << "," << other.y;
	return stream;
}

#endif // !_VEC_H_
