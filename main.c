#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num=0; 
	
	printf("input a string: ");
	while ((c=getchar())!='\n')//�Է� ���ڰ� ���๮�ڰ� ���Ë����� �ݺ� 
	{
		if (c>='0'&&c<='9')//�Էµ� ���ڰ� �����ΰ�? '0'<=c<='9'�� �ϸ� �ȳ��� 
			num=num+1;//�׷��ٸ� num�� �ϳ��� ���� 
	}
	
	printf("the number of digits is %i",num);
	
	return 0;
}
