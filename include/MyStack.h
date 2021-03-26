//
//  MyStack.h
//  ex10
//
//  Created by Anastasiya Rogozyan
//  19.03.2021.
//  Copyright © 2021 Anastasiya Rogozyan.
//  All rights reserved.
//

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
#include <iostream>
#include <string>
template <class T>
class MyStack {
};
 private:
     T* stack;
     int size;
     int size_max;

 public:
     explicit MyStack(int n) {
         this->size = 0;
         this->size_max = n;
         this->stack = new T[n];
     }
     MyStack(const MyStack& Stack) {
         this->size = Stack.size;
         this->size_max = Stack.size_max;
         this->stack = new T[Stack.size_max];
         for (int i = 0; i < size_max; i++) {
             stack[i] = Stack.stack[i];
         }
     }
     ~MyStack() {
         delete[] stack;
         size = 0;
         size_max = 0;
     }
     T get() const {
         if (!isEmpty()) {
             return stack[size - 1];
         }
         return 0;
     }
     T pop() {
         if (!isEmpty()) {
             T res = stack[size - 1];
             size--;
             return res;
         }
         return 0;
     }
     void push(T elem) {
         if (!isFull()) {
             stack[size] = elem;
             size++;
         }
     }
     bool isFull() const {
         return (size == size_max);
     }
     bool isEmpty() const {
         return (size == 0);
     }
};
#endif  // INCLUDE_MYSTACK_H_
