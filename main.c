#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;//�������� ���� �Ŷ� 0���� �ʱ�ȭ 
	int x;//������ �� ó������ �� ������ �ʿ� ����. �ϴٰ� �־��  
	int i;//�� for ���� ������ �ȵ�? 
	
	printf("������ �Է��Ͻÿ�");
	scanf("%d", &x);
	
	//for���� Ȱ���ؼ� 1���� x���� sum�� ���ϴ� �� 
	for (i=0;i<=x;i++)//�ݺ� (�ʱ��;���ǽ�;������) 
		sum=sum+i;//���ϱ� 
	
	printf("���ϱ� ����� %i�Դϴ�", sum);//��� ��� 
}
