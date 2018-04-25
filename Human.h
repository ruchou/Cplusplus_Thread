//
//  Human.h
//  practive
//
//  Created by 周延儒 on 2018/4/18.
//  Copyright © 2018 周延儒. All rights reserved.
//

#ifndef Human_h
#define Human_h

#include <iostream>
#include <string>
#include <vector>
#include <thread>
using namespace std;
class Human {
    int age=10;
    string name;
    bool gender=true;
    
public:
    Human();
    Human(string name);
    Human(string name, int age);
    void say();
    void say_something(int);
    
};

#endif /* Human_h */
