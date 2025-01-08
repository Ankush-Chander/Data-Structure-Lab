#include <iostream>
// define vector class

class Vector2D {
    private:
        float x, y;
    public:
        Vector2D(float x, float y){
            std::cout << "constructor called" << "(" << x << ", " << y << ")" << std::endl;
            this->x = x;
            this->y = y;
        }
        // default constructor
        Vector2D(){
            std::cout << "default constructor called" << std::endl;
            this->x = 0;
            this->y = 0;
        }

        // destructor
        ~Vector2D(){
            
            std::cout << "destructor called" << "(" << x << ", " << y << ")" <<  std::endl;
            
        }

        // Function to add two vectors
        Vector2D addVectors(Vector2D v) const {
            return Vector2D(this->x + v.x, this->y + v.y);
        }

        // Function to subtract two vectors
        Vector2D subtractVectors(Vector2D v) {
            return Vector2D(this->x - v.x, this->y - v.y);
        }

        void displayVector(){
            std::cout << "(" << x << ", " << y << ")" << std::endl;
}
};

int main(int argc, char const *argv[])
{
    
    // initialise vector v1
    Vector2D v1(3.0, 4.0);
    std::cout << "Vector 1: ";
    v1.displayVector();
    


    // initialise vector v2
    Vector2D v2(1.0, 2.0);
    std::cout << "Vector 2: ";
    v2.displayVector();

    std::cout << "calling addVectors" << std::endl;
    Vector2D sum = v1.addVectors(v2);
    std::cout << "called addVectors" << std::endl;
    std::cout << "Sum: ";
    sum.displayVector();
    

    // Vector2D difference = v1.subtractVectors(v2);
    // std::cout << "Difference: ";
    // difference.displayVector();

    
    Vector2D *v3 = new Vector2D(5, 7);
    // std::cout << "calling addVectors" << std::endl;
    // Vector2D sum2 = v3->addVectors(v1);
    // std::cout << "called addVectors" << std::endl;
    
    // v1 used last time
    // std::cout << "Sum2: ";
    // sum2.displayVector();
    delete v3;

    // Vector2D v1_copy = v1;
    // Vector2D v2_copy = v2;

    return 0;
}
