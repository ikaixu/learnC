#include <stdio.h>

//����ͷ��ʽṹ�� 

	/*struct �ؼ������ڶ���ṹ��*/
	struct complex_struct{
		double x, y;
	};

int main(void){
	/*�ڶ����ʱ���ʼ������*/
	struct complex_struct z1={1.0, 2.0}, z2={3.0, 4.0};
	//ע���������ֵ�����Ϊdouble����Ȼֱ������{1��2}Ҳ����������߼�©���� 
	
	/*
	��һ�ִ������Σ� 
	struct complex_struct z1, z2;
	z1 = {1.0, 2.0}; 
	z2 = {2.0, 3.0};
	���������ܹ����ڽṹ��ĸ�ֵ�ͳ�ʼ��
	*/ 
	
	if (z1.y<z2.y)
		printf("z=%f+%fi\n", z1.x, z1.y);
	else
		printf("z=%f+%fi\n", z2.x, z2.y); 
		
	return 0;
}
