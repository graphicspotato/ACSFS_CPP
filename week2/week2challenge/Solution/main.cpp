#include <iostream>

// This class Pair has already been defined for you.
// (You may not change this definition.)
class Pair {
public:
    int first, second;
    void check() {
        first = 5;
        std::cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << std::endl;
    }
};

// Insert your declaration and implementation of the function pairFactory()
// below, by replacing "..." with proper C++ code. Be sure to declare the
// function type to return a pointer to a Pair.

Pair* pairFactory()
{
    Pair *p = new Pair;
    return p;
}

int main()
{
    Pair* p = pairFactory();

    p->check();

    delete p;
    p = nullptr;
    
    return 0;
}