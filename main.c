#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;//누적으로 더할 거라 0으로 초기화 
	int x;//변수는 꼭 처음부터 다 설정할 필요 없음. 하다가 넣어도됨  
	int i;//왜 for 위로 넣으면 안됨? 
	
	printf("정수를 입력하시오");
	scanf("%d", &x);
	
	//for문을 활용해서 1부터 x까지 sum에 더하는 코 
	for (i=0;i<=x;i++)//반복 (초기식;조건식;증감식) 
		sum=sum+i;//더하기 
	
	printf("더하기 결과는 %i입니다", sum);//결과 출력 
}
