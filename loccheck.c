//查看变量的内存地址
#include <stdio.h>
void mikado();
int main(void){
	int pooh = 2, bah = 5;
	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	mikado(pooh);
	return 0;
} 

void mikado(int bah){
	int pooh = 10;
	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}

//函数的独立性，pooh作为参数传递给mikado()函数的时候，确实把值传递给了它。 
