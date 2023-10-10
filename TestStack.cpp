#include <iostream>
#include "Stack.h"
#include <iomanip>

int main()
{
    int elements_in_stack = 10;
    Stack new_stack;

    for (size_t i = 0; i < elements_in_stack; i++)
    {
        new_stack.push(i);
    }

    std::cout << std::boolalpha;
    std::cout << "Is new stack empty? - " << new_stack.isEmpty() << std::endl;
    
    for (size_t i = 0; i < elements_in_stack; i++)
    {
        new_stack.pop();
    }

    //new_stack.pop();

    std::cout << "Is new stack empty? - " << new_stack.isEmpty() << std::endl;

    return 0;
}
