# Vec3

Vec3 is a simple and lightweight C++ header-only 3D vector library.

## Getting Started

Place the Vec3.h file into the folder where your header files reside.
Now you can include the library (`#include "Vec3.h"`) wherever you need to use it.

## Usage

#### double length() const

Returns the length of a given vector.

`Example`

```C++
Vec3 vec(2.0, 1.0, 4.0);
double vecLength = vec.length();
std::cout << std::to_string(vecLength) << std::endl;
```

`Output`

```
4.582576
```

---

#### double lengthSquared() const

Returns the squared length of a given vector.

`Example`

```C++
Vec3 vec(5.0, 2.0, 9.4);
double vecSqLength = vec.lengthSquared();
std::cout << std::to_string(vecSqLength) << std::endl;
```

`Output`

```
117.360000
```

---

#### Vec3 unit() const 

Returns the unit vector of a given vector.

`Example`

```C++
Vec3 vec(12.4, 4.3, 15.7);
Vec3 vecUnit = vec.unit();
std::cout << vecUnit.toString() << std::endl;
```

`Output`

```
[0.605968,0.210134,0.767233]
```

---

#### void normalise() 

Normalises the vector to a unit vector.

`Example`

```C++
Vec3 vec(2.6, 7.9, 5.1);
vec.normalise();
std::cout << vec.toString() << std::endl;
```

`Output`

```
[0.266502,0.809756,0.522754]
```

---

#### double angleBetween(const Vec3 vec) const

Returns the angle between two given vectors (in degrees).

`Example Code`

```C++
Vec3 vec1(0.0, 5.0, -4.0);
Vec3 vec2(0.0, 5.0, 4.0);
double angle = vec1.angleBetween(vec2);
std::cout << std::to_string(angle) << std::endl;
```

`Output`

```
77.319617
```

---

#### double dot(const Vec3 vec) const

Returns the dot product of two given vectors.

`Example`

```C++
Vec3 vec1(2.1, 3.2, 4.1);
Vec3 vec2(3.5, 4.7, 1.8);
double dotProduct = vec1.dot(vec2);
std::cout << std::to_string(dotProduct) << std::endl;
```

`Output`

```
29.770000
```

---

#### Vec3 projection(const Vec3 vec) const

Returns the projected vector from two given vectors.

`Example`

```C++
Vec3 vec1(1.2, 5.0, 3.1);
Vec3 vec2(5.0, 7.7, 6.8);
Vec3 projection = vec1.projection(vec2);
std::cout << projection.toString() << std::endl;
```

`Output`

```
[2.182968,9.095700,5.639334]
```

---

#### Vec3 rejection(const Vec3 vec) const

Returns the rejected vector from two given vectors.

`Example`

```C++
Vec3 vec1(1.2, 5.0, 3.1);
Vec3 vec2(5.0, 7.7, 6.8);
Vec3 rejection = vec1.rejection(vec2);
std::cout << rejection.toString() << std::endl;
```

`Output`

```
[2.817032,-1.395700,1.160666]
```

---

#### Vec3 crossProduct(const Vec3 vec) const

Returns the cross product vector of two given vectors.

`Example`

```C++
Vec3 vec1(2.4, 1.7, 2.1);
Vec3 vec2(17.1, 9.4, 1.3);
Vec3 crossProduct = vec1.crossProduct(vec2);
std::cout << crossProduct.toString() << std::endl;
```

`Output`

```
[-17.530000,32.790000,-6.510000]
```

---

#### const std::string toString()

Casts a vector to a string and returns it.

`Example`

```C++
Vec3 vec(99.9, 99.9, 99.9);
std::cout << vec.toString() << std::endl;
```

`Output`

```
[99.900000,99.900000,99.900000]
```

---

### Overloaded operators

#### Vec3 operator+ (const Vec3 vec) const

#### Vec3 operator- (const Vec3 vec) const

#### Vec3 operator* (const double scalar) const

#### Vec3 operator/ (const double divisor) const

#### Vec3 operator+= (const Vec3 vec)

#### Vec3 operator-= (const Vec3 vec)

#### Vec3 operator- ()

#### bool operator== (const Vec3 vec) const

#### bool operator!= (const Vec3 vec) const

---

## Contact

* [Website](https://plisskit.w3spaces.com)
* [Twitter](https://twitter.com/plisskit)