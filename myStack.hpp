#pragma once
#include <string>

class MyStack {
    static constexpr int arrSize = 10;
public:
    MyStack();
    bool push(int);
    void pop();
    int top();
    bool empty();
    bool full();
    std::string print();
private:
    int index;
    int arr[arrSize];
};