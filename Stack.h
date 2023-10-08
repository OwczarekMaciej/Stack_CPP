#ifndef STACK_H
#define STACK_H

#pragma once

class Stack
{
public:
    Stack();
    ~Stack();
    void push(int element);
    int pop();
    bool isEmpty();

private:
    int top_element;
    int size;
    int *array;
};

#endif