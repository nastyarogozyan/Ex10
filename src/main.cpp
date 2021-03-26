//
//  main.cpp
//  ex10
//
//  Created by Anastasiya Rogozyan
//  19.03.2021.
//  Copyright © 2021 Anastasiya Rogozyan.
//  All rights reserved.
//
#include <iostream>
#include <string>

#include "postfix.h"

int main() {
  return 0;
    std::string str_1 = "1 + 2";
    std::cout << infix2postfix(str_1) << std::endl;
    std::string str_2 = "2 + 6 * 3 / (4 - 2)";
    std::cout << infix2postfix(str_2) << std::endl;
    std::string str_3 = "12 - 6 * 4 - (56 - 9) / (3 + 5)";
    std::cout << infix2postfix(str_3) << std::endl;
    std::string str_4 = "45.67 - 7 / 8 * (4.3 + 8 / 4)";
    std::cout << infix2postfix(str_4) << std::endl;
    std::string str_5 = "((55 + 56) / (88 - 44) + (5 * 7 / 3))";
    std::cout << infix2postfix(str_5) << std::endl;
    return 0;
}
