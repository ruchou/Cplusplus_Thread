//
//  Human.cpp
//  practive
//
//  Created by 周延儒 on 2018/4/18.
//  Copyright © 2018 周延儒. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
#include "Human.h"



void Human::say(){
    
    cout<<"hello"<<endl;
    cout<<"My name is "<<this->name<<endl;
    thread mthread(&Human::say_something,this,this->age);
    mthread.join();
    
}

void Human::say_something(int i){
    
    cout<<"this is a thread "<<i<<endl;
    
}

Human::Human(){
    this->age=25;
    this->name="";
    
    
}

Human::Human(string name){
    this->name=name;
    
}
Human::Human(string name, int age){
    this->name=name;
    this->age=age;
    
    
}

