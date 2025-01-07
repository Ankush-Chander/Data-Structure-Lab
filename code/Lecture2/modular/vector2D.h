// Vector2D.h
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

namespace VectorOperations {

// define a struct to represent a 2D vector
typedef struct {
    float x;
    float y;
} Vector2D;

// note that functions are only declared here with signatures(argument types + return type)
// implementation elsewhere

// Function to add two vectors
Vector2D addVectors(Vector2D v1, Vector2D v2);

// Function to subtract two vectors
Vector2D subtractVectors(Vector2D v1, Vector2D v2);

// Function to display a vector
void displayVector(Vector2D v);

} // namespace VectorOperations

#endif // VECTOR2D_H
