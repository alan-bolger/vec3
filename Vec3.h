#ifndef VEC3_H
#define VEC3_H

#include <string>
#include <cmath>

constexpr auto PI = 3.14159265358979323846;

class Vec3
{
public:
	double x;
	double y;
	double z;

	Vec3() : x{ 0.0 }, y{ 0.0 }, z{ 0.0 } { };
	Vec3(double x, double y, double z) : x{ static_cast<double>(x) }, y{ static_cast<double>(y) }, z{ static_cast<double>(z) } { };
	~Vec3() { };

	double length() const
	{ 
		return std::sqrt(Vec3(x, y, z).lengthSquared());
	};

	double lengthSquared() const
	{ 
		return x * x + y * y + z * z;
	};

	Vec3 unit() const 
	{ 
		double l = Vec3(x, y, z).length();
		return Vec3(x / l, y / l, z / l);
	};

	void normalise()
	{
		double l = Vec3(x, y, z).length(); x = x / l; y = y / l; z = z / l;
	};

	double angleBetween(const Vec3 vec) const
	{
		double a = ((x * vec.x) + (y * vec.y) + (z * vec.z)) / ((std::sqrt((x * x) + (y * y) + (z * z))) * (std::sqrt((vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z))));
		return std::acos(a) * 180.0 / PI;
	};

	double dot(const Vec3 vec) const
	{ 
		return (x * vec.x) + (y * vec.y) + (z * vec.z);
	};

	Vec3 projection(const Vec3 vec) const
	{ 
		double div = ((x * vec.x) + (y * vec.y) + (z * vec.z)) / (std::sqrt((x * x) + (y * y) + (z * z)) * std::sqrt((x * x) + (y * y) + (z * z)));
		return Vec3(div * x, div * y, div * z);
	};

	Vec3 rejection(const Vec3 vec) const 
	{
		return vec - Vec3(x, y, z).projection(vec);
	};

	Vec3 crossProduct(const Vec3 vec) const
	{
		return Vec3((y * vec.z) - (z * vec.y), (z * vec.x) - (x * vec.z), (x * vec.y) - (y * vec.x));
	};

	std::string toString() 
	{ 
		return "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	};

	Vec3 operator+ (const Vec3 vec) const
	{
		return Vec3(x + vec.x, y + vec.y, z + vec.z);
	};

	Vec3 operator- (const Vec3 vec) const
	{
		return Vec3(x - vec.x, y - vec.y, z - vec.z);
	};

	Vec3 operator* (const double scalar) const
	{
		return Vec3(x * scalar, y * scalar, z * scalar);
	};

	Vec3 operator/ (const double divisor) const
	{
		return Vec3(x / divisor, y / divisor, z / divisor);
	};

	Vec3 operator+= (const Vec3 vec)
	{
		return Vec3(x + vec.x, y + vec.y, z + vec.z);
	};

	Vec3 operator-= (const Vec3 vec)
	{
		return Vec3(x - vec.x, y - vec.y, z - vec.z);
	};

	Vec3 operator- ()
	{
		return Vec3(x * -1, y * -1, z * -1);
	};

	bool operator== (const Vec3 vec) const
	{
		return x == vec.x && y == vec.y && vec.z;
	};

	bool operator!= (const Vec3 vec) const
	{
		return x != vec.x || y != vec.y || z != vec.z;
	};
};

#endif // !VEC3_H