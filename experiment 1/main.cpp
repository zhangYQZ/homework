#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{
	printf("----ѧ���ɼ��������ϵͳ------ \n");
	int N = 0;     
	SS  *pstu = NULL;    


	pstu = readDataFromFile(&N);
	calcuScore(pstu, N);//����ѧ���ܳɼ�
	sortScore(pstu, N);//����ѧ���ɼ�����
	printOut(pstu, N);//�����������ѧ����Ϣ


	free(pstu);

	printf("\n");
	system("pause");


	return 0;
}