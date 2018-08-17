#include <stdio.h>

//定义和访问结构体 

	/*struct 关键字用于定义结构体*/
	struct complex_struct{
		double x, y;
	};

int main(void){
	struct complex_struct z1, z2; 
	double x = 3.0;
	z1.x = x;
	z1.y = x;
	z2.x = x;
	z2.y = 4.0;
	if (z1.y<z2.y)
		printf("z=%f+%fi\n", z1.x, z1.y);
	else
		printf("z=%f+%fi\n", z2.x, z2.y); 
		
	return 0;
}
