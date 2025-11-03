#include "bird.h"
#include <iostream>

Duck::Duck() : Bird("Duck") {
    cry(); 
}
Duck::~Duck() {
    cry(); 
}
void Duck::cry() {
    std::cout << "Quack!" << std::endl;
}


Penguin::Penguin() : Bird("Penguin") {
    cry();
}
Penguin::~Penguin() {
    cry();
}
void Penguin::cry() {
    std::cout << "Squawk!" << std::endl;
}
void Penguin::fly() {
    std::cout << "This bird can't fly." << std::endl;
}

Eagle::Eagle() : Bird("Eagle") {
    cry();
}
Eagle::~Eagle() {
    cry();
}
void Eagle::cry() {
    std::cout << "Screech!" << std::endl;
}
void Eagle::swim() {
    std::cout << "This bird can't swim." << std::endl;
}
