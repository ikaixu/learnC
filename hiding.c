/*代码块变量*/
#include <stdio.h>
int main(){
	int x = 30;//初始化
	printf("x in outer block: %d\n", x);
	
	{
		int x = 77;//新的x，覆盖第一个x
		printf("x in inner block: %d\n", x);
	 } 
	 
	printf("x in outer block: %d\n", x);
	
	while (x++ < 33){
		int x = 100;//新的x，覆盖第一个x
		x++;
		printf("x in while loop: %d\n", x);
	}
	//讲解：循环中x来自外部，所以x=30，循环次数只有3次 
	
	printf("x in outer block: %d\n", x);
	return 0;
}
