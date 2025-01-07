#include "vector2D.h"

namespace VectorOperations {

// note that functions are defined here with full implementation
// Function to add two vectors
Vector2D addVectors(Vector2D v1, Vector2D v2) {
    Vector2D result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

// Function to subtract two vectors
Vector2D subtractVectors(Vector2D v1, Vector2D v2) {
    Vector2D result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    return result;
}

// Function to display a vector
void displayVector(Vector2D v) {
    printf("(%.2f, %.2f)\n", v.x, v.y);
}

} // namespace VectorOperations
