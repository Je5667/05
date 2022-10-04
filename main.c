#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial=0;	
	
	
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &x);
		if (x>answer)
			printf("high!");
		else if (x<answer)
			printf("low!");
		trial=trial+1;
		}
	while (x!=answer);
	
	//정답과 같은지 여부 판단 
	printf("congradulation! trials: %i\n", trial);

	return 0;
}
