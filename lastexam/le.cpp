#include <iostream>
using namespace std;
class Base
{
public:
    Base() { std::cout << "1. Base()" << std::endl; }
    Base(int val) { std::cout << "2. Base(int val)" << std::endl; }
    ~Base() { std::cout << "3. ~Base()" << std::endl; }
};

class Derived : public Base
{
public:
    Derived() { std::cout << "4. Derived()" << std::endl; }
    Derived(int val) { std::cout << "5. Derived(int val)" << std::endl; }
    ~Derived() { std::cout << "6. ~Derived()" << std::endl; }
};


int main()
{
    Derived d(1);
}
