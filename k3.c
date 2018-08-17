#include <stdio.h>

//定义和访问结构体 

	/*struct 关键字用于定义结构体*/
	struct complex_struct{
		double x, y;
	};

int main(void){
	/*在定义的时候初始化变量*/
	struct complex_struct z1={1.0, 2.0}, z2={3.0, 4.0};
	//注意两个数字的类型为double，虽然直接输入{1，2}也不会错，但有逻辑漏洞。 
	
	/*
	有一种错误情形： 
	struct complex_struct z1, z2;
	z1 = {1.0, 2.0}; 
	z2 = {2.0, 3.0};
	这样并不能够用于结构体的赋值和初始化
	*/ 
	
	if (z1.y<z2.y)
		printf("z=%f+%fi\n", z1.x, z1.y);
	else
		printf("z=%f+%fi\n", z2.x, z2.y); 
		
	return 0;
}
