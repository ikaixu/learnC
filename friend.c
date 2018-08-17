/*嵌套结构*/

#include <stdio.h>
#define LEN 20

const char * msgs[5] = 
{
	"     Tkank you for the wonderful evening, ",
	"You certainly prove that a ",
	"is a spectial kind of guy. We must get together",
	"over a delicious ",
	" and have a few laughs"
};

//第一个结构声明 
struct names {
	char first[LEN];
	char last[LEN];
};

// 第二个结构声明 
struct guy {
	struct names handle;//嵌套了第一个结构 
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void){
	struct guy fellow = {
		"Ewen", "Villard", "girlled salmon", 
		"personality coach", 58112.00
	};//初始化 
	
	printf("Dear %s, \n\n", fellow.handle.first);
	printf("%s%s.\n", msgs[0], fellow.handle.first);
	printf("%s%s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
	
	if (fellow.income > 150000.0) puts("!!");
	else if (fellow.income > 75000.0) puts("!");
	else puts(".");
	
	printf("\n%40s%s\n", " ", "See you soon, ");
	printf("%40s%s\n", " ", "Shalala");
	
	return 0;
}
