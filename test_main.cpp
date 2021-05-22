#include "SmartPointer.hh"
#include <iostream>

class Foo
{
    int mem;
public:
    Foo(int mem_) :mem(mem_) { std::cout << "New foo constructed" << std::endl; }
    ~Foo()
    {
        std::cout << "Foo destroyed" << std::endl;
    }
};

int main()
{
    int size = 5;
    SmartPtr::SmartPointer<Foo> intPtr(new Foo(size));
}