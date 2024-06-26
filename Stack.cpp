#include "Stack.h"
#include <iostream>

#define SIZE 1

Stack::Stack()
    : top_element(0), size(SIZE)
{
    array = (int *)malloc(sizeof(int) * size);
    alloc_check();
    std::cout << "Stack initialized" << std::endl;
}

Stack::~Stack()
{
    free(array);
    std::cout << "Stack destroyed" << std::endl;
}

void Stack::push(int element)
{
    if (top_element >= size)
    {
        size *= 2;
        array = (int *)realloc(array, sizeof(int) * size);
        alloc_check();
        std::cout << "Stack size increased to " << size << std::endl;
    }
    array[top_element++] = element;
    std::cout << "Pushed " << element << " to stack" << std::endl;
}

bool Stack::isEmpty()
{
    return (top_element == 0);
}

int Stack::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
        abort();
    }
    else
    {
        top_element--;
        std::cout << "Popped " << array[top_element] << " from stack" << std::endl;
        return array[top_element];
    }
}

void Stack::alloc_check()
{
    if (array == NULL)
    {
        std::cout << "Wrong memory alloc" << std::endl;
        abort();
    }
}
