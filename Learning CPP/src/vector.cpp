#include "../header/vector.h"

Vector2 Vector2::operator+(const Vector2& other) const {
	return Add(other);
}

Vector2 Vector2::operator*(const Vector2& other) const {
	return Multiply(other);
}

bool Vector2::operator==(const Vector2& other) const {
	return Equals(other);
}

bool Vector2::operator!=(const Vector2& other) const {
	return !(*this == other);
}
