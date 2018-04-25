//
//  main.cpp
//  practive
//
//  Created by 周延儒 on 2018/4/18.
//  Copyright © 2018 周延儒. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Human.h"

#include <thread>



using namespace std;

void threadFunction(int i){
    cout<<i<<endl;
    
}
int main(int argc, const char * argv[]) {
 
    thread mthread(threadFunction,10);
    mthread.join();
    
    
    
    Human bill("bill",22);
    thread sthread(&Human::say,&bill);
    sthread.join();

    return 0;
}
