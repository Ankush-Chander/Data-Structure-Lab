#include <iostream>
#include <stdexcept> // to use std::out_of_range


class IntVector {
private:
    int* data;           // Pointer to the first element of the vector
    size_t size;       // Number of elements in the vector
    size_t capacity;   // Current allocated capacity of the vector

    void resize(size_t new_capacity) {
    // allocate new contigous memory with new capacity
    // copy data to newly allocated memory
    // free older memory
    // point data to new memory
    }

public:
    IntVector(){
        data = nullptr;
        size = 0;
        capacity = 0;
    } 

    ~IntVector() {
        // deallocate underlying memory
    }

    size_t getSize() const {
        // return current size of the vector
    }

    size_t getCapacity() const {
        // return current capacity of the vector
    }

    void reserve(size_t new_capacity) {
       // check if new capacity is greater than current capacity
       // if so, resize to new capacity
    }

    void push_back(const int& value) {
        // check if capacity is full
        if(size==capacity){
            // if full, double the capacity
            size_t new_capacity = capacity == 0? 1: capacity *2;
            int *new_data = new int[new_capacity];
            for(int i=0;i<size;i++){
                new_data[i]=data[i];
            } 
            delete[] data;
            data = new_data;
        }
        data[size]= value;
        size++;
        // insert value at the end
    }

    void pop_back() {
        // remove the last element
    }

    void insert(size_t index, const int& value) {
        // if index > size raise exception
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        // if capacity full, double the capacity
        // shift all elements after index to the right
        // insert value
    }

    void erase(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        // move all elements after index to the left
        // decrement size
    }

    void clear() {
        size = 0;
    }

    int operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        // apply index operator on the underlying data
        return data[index];
    }

    // disallow copy constructor and assignment operator
    IntVector(const IntVector&) = delete;
    IntVector& operator=(const IntVector&) = delete;
};


int main() {
    IntVector vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);


    std::cout << "Size: " << vec.getSize() << std::endl;
    std::cout << "Capacity: " << vec.getCapacity() << std::endl;

    vec.insert(1, 4);
    std::cout << "After insert(1,4): ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.erase(2);
    std::cout << "After erase(2): ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // IntVector<int> vec2 = vec;
    // std::cout << "After copy constructor: ";
    // for (size_t i = 0; i < vec2.getSize(); ++i) {
    //     std::cout << vec2[i] << " ";
    // }
    // std::cout << std::endl;

    vec.clear();
    std::cout << "After clear, size: " << vec.getSize() << std::endl;
    
    return 0;
}