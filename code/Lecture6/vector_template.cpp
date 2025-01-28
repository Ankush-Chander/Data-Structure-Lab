#include <iostream>
#include <stdexcept> // to use std::out_of_range

template<typename T>
class Vector {
private:
    T* data;           // Pointer to the first element of the vector
    size_t size;       // Number of elements in the vector
    size_t capacity;   // Current allocated capacity of the vector

    void resize() {
        size_t new_capacity = capacity == 0? 1: capacity *2;
        reserve(new_capacity);
    }

public:
    Vector(){
        data = nullptr;
        size = 0;
        capacity = 0;
    } 

    ~Vector() {
        // deallocate underlying memory
    }

    size_t getSize() const {
        // return current size of the vector
        return size;
    }

    size_t getCapacity() const {
        // return current capacity of the vector
        return capacity;
    }

    void reserve(size_t new_capacity) {
        if(new_capacity > capacity) {
            T *new_data = new T [new_capacity];
            for(size_t i=0;i<size;i++){
                new_data[i]=data[i];
            } 
            delete[] data;
            capacity = new_capacity;
            data = new_data;
            
        }
    }

    
    void push_back(const int& value) {
        // check if capacity is full
        if(size==capacity){
            resize();
        }
        // insert value at the end
        data[size]= value;
        size++;
        
    }

    void pop_back() {
        // remove the last element
        size--;
    }

    void insert(size_t index, const int& value) {
        // if index > size raise exception
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        
        if(size==capacity){
            resize();
        }
        
        size++;

        // shift all elements after index to the right
        for(size_t i=size;i>=index;i--){
            data[i] = data[i-1];
        }

        data[index] = value;
        // insert value
    }

    void erase(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        // move all elements after index to the left
        for(size_t i=index;i<size-1;i++){
            data[i] = data[i+1];
        }
        size--;
        // decrement size
    }

    void clear() {
        size = 0;
    }

    T operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        // apply index operator on the underlying data
        return data[index];
    }

    // disallow copy constructor and assignment operator
    Vector(const Vector&) = delete;
    Vector& operator=(const Vector&) = delete;
};


int main() {
    Vector<int> vec;
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

    // Vector<int> vec2 = vec;
    // std::cout << "After copy constructor: ";
    // for (size_t i = 0; i < vec2.getSize(); ++i) {
    //     std::cout << vec2[i] << " ";
    // }
    // std::cout << std::endl;

    vec.clear();
    std::cout << "After clear, size: " << vec.getSize() << std::endl;
    

    Vector<float> vec2;
    vec2.push_back(0.1);
    vec2.push_back(0.2);
    vec2.push_back(0.3);
    std::cout << "Size: " << vec2.getSize() << std::endl;
    std::cout << "Capacity: " << vec2.getCapacity() << std::endl;
    return 0;
}