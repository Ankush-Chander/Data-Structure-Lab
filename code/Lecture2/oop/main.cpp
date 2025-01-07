#include "vector2d.h"

using namespace VectorOperations;

int main() {
    Vector2D v1(3.0, 4.0);
    Vector2D v2(1.0, 2.0);

    std::cout << "Vector 1: ";
    v1.displayVector();
    std::cout << "Vector 2: ";
    v2.displayVector();

    Vector2D sum = v1.addVectors(v2);
    std::cout << "Sum: ";
    sum.displayVector();

    Vector2D difference = v1.subtractVectors(v2);
    std::cout << "Difference: ";
    difference.displayVector();

    return 0;
}
