#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y; //두개의 입력 정수
	char op; //연산자 문자
	int result; 
	
	printf("enter the calculation: ");
	scanf("%d %c %d", &x,&op,&y);
	
	//연산자에 따라 결과값을 계산(result에 저장)
	if (op=='+')//op='+'아님 
		result=x+y;
	else if (op=='-')
		result=x-y;
	else if (op=='*')
		result=x*y;
	else if (op=='/')
		result=x/y;
		
	switch(op)//switch로 할 경우 
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
	
	//printf로 출력
	printf("=%i\n",result); 
	return 0; 
}
