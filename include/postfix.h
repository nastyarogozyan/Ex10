//
//  postfix.h
//  ex10
//
//  Created by Anastasiya Rogozyan
//  19.03.2021.
//  Copyright © 2021 Anastasiya Rogozyan.
//  All rights reserved.
//
#ifndef INCLUDE_POSTFIX_H_
#define INCLUDE_POSTFIX_H_
#include "MyStack.h"
#include <string>

int priority(char a);
std::string infix2postfix(std::string infix);

#endif  // INCLUDE_POSTFIX_H_
