#include "myStack.hpp"
#include <iostream>

using namespace std;

MyStack::MyStack() {
    index = -1;
}

bool MyStack::push(int x) {
    if (index == arrSize-1) {
        return false;
    } else {
        arr[++index] = x;
        return true;
    }
}

void MyStack::pop() {
    if (index != -1) {
        index--;
    }
}

int MyStack::top() {
    return arr[index];
}

bool MyStack::empty() {
    if(index == -1) {
        return true;
    } else {
        return false;
    }

}

bool MyStack::full() {
    if(index == arrSize-1) {
        return true;
    } else {
        return false;
    }
}

string MyStack::print() {
    string s;
    for(int i = 0; i < index+1; i++) {
        s += to_string(arr[i]) + " ";
    }
    return s;
}