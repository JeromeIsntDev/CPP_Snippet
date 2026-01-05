#pragma once

#ifndef _VEC_H_
#define _VEC_H_

#include "../header/log.h"
#include <sstream>

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
	Vector2 operator+(const Vector2& other) const;
	Vector2 operator*(const Vector2& other) const;
	bool operator==(const Vector2& other) const;
	bool operator!=(const Vector2& other) const;
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
	stream << other.x << "," << other.y;
	return stream;
}

#endif // !_VEC_H_
