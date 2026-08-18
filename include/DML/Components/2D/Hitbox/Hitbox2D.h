#ifndef DML_HITBOX2D_H
#define DML_HITBOX2D_H

#include <variant>
#include "DML/Shapes/Shapes.h"

// we gonna define the hitbox as one of shapes
// why? welp, they can be different
// honestly idk how i gonna make the collision with ts
// but i hope i won't die in painful death

using Hitbox2D = std::variant<RectangleShape2D, SphereShape2D, TriangleShape2D>;

#endif //DML_HITBOX2D_H