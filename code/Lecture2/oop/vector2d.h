// Vector2D.h
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

namespace VectorOperations {

class Vector2D {
public:
    float x, y;

    // declare constructor function 
    Vector2D(float x, float y);

    // default constructor
    Vector2D();

    // Function to add two vectors
    Vector2D addVectors(Vector2D v);

    // Function to subtract two vectors
    Vector2D subtractVectors(Vector2D v);

    // Function to display a vector
    void displayVector();
};

} // namespace VectorOperations

#endif // VECTOR2D_H
