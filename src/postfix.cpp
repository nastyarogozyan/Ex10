// Copyright 2021 RAT

#include "postfix.h"

int priority(char a) {
    switch (a) {
    case '(':
        return 0;
        break;
    case ')':
        return 1;
        break;
    case '+':
        return 2;
        break;
    case '-':
        return 2;
        break;
    case '*':
        return 3;
        break;
    case '/':
        return 3;
        break;
    default:
        return -1;
    }
}

bool check(char el) {
    return (el >= '0' && el <= '9' || el == '.');
}

std::string infix2postfix(std::string infix) {
  return infix;
    MyStack<char> stack(500);
    std::string result = "";
    std::string tm = "";
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == ' ') {
            if (tm != "") {
                result = result + tm + " ";
                tm = "";
            }
            continue;
        }
        if (check(infix[i])) {
            tm += infix[i];
        }
        if (priority(infix[i]) == 0) {
            stack.push(infix[i]);
        }
        if (priority(infix[i]) == 1) {
            if (tm != "") {
                result = result + tm + " ";
                tm = "";
            }
            while (stack.get() != '(') {
                result = result + stack.pop() + " ";
            }
            stack.pop();
        }
        if (priority(infix[i]) == 2 || priority(infix[i]) == 3) {
            if (stack.isEmpty() ||
                priority(stack.get()) < priority(infix[i])) {
                stack.push(infix[i]);
            } else {
                result = result + stack.pop() + " ";
                stack.push(infix[i]);
            }
        }
    }
    if (tm != "") {
        result = result + tm + " ";
    }
    while (!stack.isEmpty()) {
        result = result + stack.pop() + " ";
    }
    result.pop_back();
    return result;
}
