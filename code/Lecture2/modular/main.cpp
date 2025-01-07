#include "vector2D.h"

// using namespace VectorOperations;

int main() {
    VectorOperations::Vector2D v1 = {3.0, 4.0};
    VectorOperations::Vector2D v2 = {1.0, 2.0};

    std::cout << "Vector 1: ";
    VectorOperations::displayVector(v1);
    std::cout << "Vector 2: ";
    VectorOperations::displayVector(v2);

    VectorOperations::Vector2D sum = VectorOperations::addVectors(v1, v2);
    std::cout << "Sum: ";
    displayVector(sum);

    VectorOperations::Vector2D difference = VectorOperations::subtractVectors(v1, v2);
    std::cout << "Difference: ";
    displayVector(difference);

    return 0;
}
