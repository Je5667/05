#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y; //�ΰ��� �Է� ����
	char op; //������ ����
	int result; 
	
	printf("enter the calculation: ");
	scanf("%d %c %d", &x,&op,&y);
	
	//�����ڿ� ���� ������� ���(result�� ����)
	if (op=='+')//op='+'�ƴ� 
		result=x+y;
	else if (op=='-')
		result=x-y;
	else if (op=='*')
		result=x*y;
	else if (op=='/')
		result=x/y;
		
	switch(op)//switch�� �� ��� 
	{
		
		case '+':
			result=x+y;
			break;
		case '-':
			result=x-y;
			break;
		case '*':
			result=x*y;
			break;
		case '/':
			result=x/y;
			break;
	 } 
	
	//printf�� ���
	printf("=%i\n",result); 
	return 0; 
}
