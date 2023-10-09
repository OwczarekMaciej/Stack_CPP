#include <iostream>
#include "Stack.h"
#include <iomanip>

int main()
{
    int elements = 10;
    Stack new_stack;

    std::cout << std::boolalpha;

    for (size_t i = 0; i < elements; i++)
    {
        new_stack.push(i);
    }

    std::cout << "Is new stack empty? - " << new_stack.isEmpty() << std::endl;
    
    for (size_t i = 0; i < elements; i++)
    {
        new_stack.pop();
    }

    //new_stack.pop();

    std::cout << "Is new stack empty? - " << new_stack.isEmpty() << std::endl;

    return 0;
}
