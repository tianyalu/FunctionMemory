## FunctionMemory C/C++ 函数以及内存模型
### 一、C/C++函数
#### 1.1 代码
···c++
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
···
#### 1.2 基本数据类型
![image](https://github.com/tianyalu/FunctionMemory/blob/master/show/cplus_basic_data_type.png)
### 二、内存模型
#### 2.1 Java内存模型
![image](https://github.com/tianyalu/FunctionMemory/blob/master/show/android_memory.png)
#### 2.1 C内存模型
![image](https://github.com/tianyalu/FunctionMemory/blob/master/show/c_memory.png)
