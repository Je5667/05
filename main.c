#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("���� �ϳ��� �Է��Ͻÿ�:\n");
	scanf("%d",&a);
	
	if (a>0)
		printf("����Դϴ�", &a);
	else if (a<0)
		printf("�����Դϴ�", &a);
	else
		printf("0�Դϴ�", &a);
	return 0;
}
