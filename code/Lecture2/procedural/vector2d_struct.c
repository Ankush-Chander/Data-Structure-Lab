#include <stdio.h>

// define a struct to represent a 2D vector
typedef struct {
    float x;
    float y;
} Vector2D;

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

int main() {
    Vector2D v1 = {3.0, 4.0};
    Vector2D v2 = {1.0, 2.0};

    printf("Vector 1: ");
    displayVector(v1);
    printf("Vector 2: ");
    displayVector(v2);

    Vector2D sum = addVectors(v1, v2);
    printf("Sum: ");
    displayVector(sum);

    Vector2D difference = subtractVectors(v1, v2);
    printf("Difference: ");
    displayVector(difference);

    return 0;
}
