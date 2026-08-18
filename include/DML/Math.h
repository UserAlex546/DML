#ifndef DML_MATH_H
#define DML_MATH_H

#include <SDL3/SDL.h>
#include <random>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#define PI 3.14159265

// Structs

// 2 dimensional float vector with X and Y
struct Vec2 {
	float x, y;

	Vec2(): x(0.0f), y(0.0f) {}

	Vec2(float i_x, float i_y): x(i_x), y(i_y) {}

	Vec2 operator+(const Vec2& o) const {return {x + o.x, y + o.y}; };
	Vec2 operator-(const Vec2& o) const {return {x - o.x, y - o.y}; };
	Vec2 operator*(const Vec2& o) const {return {x * o.x, y * o.y}; };
	Vec2 operator/(const Vec2& o) const {return {x / o.x, y / o.y}; };

	float length() const
	{
        return std::sqrt(x * x + y * y);
    }
};

// 3 dimensional float vector with X, Y and Z
struct Vec3 {
	float x, y, z;

	Vec3(): x(0.0f), y(0.0f), z(0.0f) {}

	Vec3(float i_x, float i_y, float i_z): x(i_x), y(i_y), z(i_z) {}

	Vec3 operator+(const Vec3& o) const {return {x + o.x, y + o.y, z + o.z}; };
	Vec3 operator-(const Vec3& o) const {return {x - o.x, y - o.y, z - o.z}; };
	Vec3 operator*(const Vec3& o) const {return {x * o.x, y * o.y, z * o.z}; };
	Vec3 operator/(const Vec3& o) const {return {x / o.x, y / o.y, z / o.z}; };

	float length() const
	{
        return std::sqrt(x * x + y * y + z * z);
    }
};

// 4 dimensional float vector with X, Y, Z and W
// ..
// Rick and Morty time police reference?
struct Vec4 {
	float x, y, z, w;

	Vec4(): x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

	Vec4(float i_x, float i_y, float i_z, float i_w): x(i_x), y(i_y), z(i_z), w(i_w) {}

	Vec4 operator+(const Vec4& o) const {return {x + o.x, y + o.y, z + o.z, w + o.w}; };
	Vec4 operator-(const Vec4& o) const {return {x - o.x, y - o.y, z - o.z, w - o.w}; };
	Vec4 operator*(const Vec4& o) const {return {x * o.x, y * o.y, z * o.z, w * o.w}; };
	Vec4 operator/(const Vec4& o) const {return {x / o.x, y / o.y, z / o.z, w / o.w}; };

	float length() const
	{
		return std::sqrt(x * x + y * y + z * z + w * w);
	}
};

/// Math

// Approach function
float approach(float current, float target, float deltaTime);

// Lerp function
void lerp(float& current, float target, float delta);

// Dot products function
float dot(float x1, float y1, float x2, float y2);

float lengthSq(float x, float y);

// Random
template <typename T>

T random(T smallest, T biggest)
{
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(smallest, biggest);

    T randomNum = distrib(gen);
    return randomNum;
}

template <typename T>

T chooseRandom(T a, T b)
{
    static bool seeded = false;
    if (!seeded)
	{
        srand(static_cast<unsigned>(time(nullptr)));
        seeded = true;
    }
    return (rand() % 2) ? a : b;
}

// Clamp function
template <typename T>

constexpr const T& clamp(const T& v, const T& lo, const T& hi)
{
    return std::max(lo, std::min(v, hi));
}

/// Functions

// Collisions
// This is a simple collision system
bool rectCollide(float x1, float y1, float w1, float h1, float x2, float y2, float w2, float h2);

#endif //DML_MATH_H
