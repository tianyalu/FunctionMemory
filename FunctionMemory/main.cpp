//
//  main.cpp
//  FunctionMemory
//
//  Created by 天涯路 on 2019/11/16.
//  Copyright © 2019年 天涯路. All rights reserved.
//

#include <iostream>
#include "func.h"

//函数指针：本质是一个指针变量
int (*funcp)();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    func();
    
    funcp = func;
    funcp();
    
    return 0;
}

//普通函数
int func(void) {
    printf("函数\n");
    return -1;
}

//指针函数：返回值为指针 //参数void* 可以传入任意类型的指针
int* int_add_func(void* paraName, int a) {
    printf("指针函数2\n");
    int b = 10;
    int *p = &b;
    return p;
}
