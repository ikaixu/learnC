#include <stdio.h>

#define MAXTITL 40	//书名最大长度 
#define MAXAUTL 40	//作者名最大长度 
#define MAXBKS 100	//最多容纳的图书册数 

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 
/*模板，模板标记为book，结构设计声明*/


int main(void){
	struct book library[MAXBKS];//和这种struct book library;声明语句有什么区别？ 
	/*结构数组*/ 
	int count = 0;
	int index;
	
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of line to stop.\n");
	
	while(count < MAXBKS && gets (library[count].title) != NULL
	&& library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		gets(library[count].author);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	
	if(count>0)
	{
		printf("Here is the list of your books: \n");
		for (index = 0; index < count; index++)
		printf("%s by %s: $%.2f\n", library[index].title, 
				library[index].author, library[index].value);
	}
	else printf("No books? Too bad.\n");
	
	return 0;
}
