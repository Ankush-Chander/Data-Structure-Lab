#include "vector2d.h"

namespace VectorOperations {

// constructor
Vector2D::Vector2D(float x, float y){
    this->x = x;
    this->y=y;
}

// default constructor
Vector2D::Vector2D(){
    this->x = 0;
    this->y = 0;
}

Vector2D Vector2D::addVectors(Vector2D v) {
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::subtractVectors(Vector2D v){
    return Vector2D(x - v.x, y - v.y);
}

void Vector2D::displayVector(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

}