

#include "stdafx.h"

/*
�������� ���������, ������� ����������� � ������������ ���,
���� � ���, � ����� ����������� ����������� ����� � ����,
������� ������������ � ���������� ��������� (��������, ����������,
�����)
*/


int main()
{

	char sex;


	printf("Enter your sex(m/f): ");
	scanf_s("%c", &sex);

	while (sex != 'm' && sex != 'f')
	{
		rewind(stdin);
		printf("Do you think its funny? Only M or F allowed! \n");
		printf("Enter your sex(m/f):");
		scanf_s("%c", &sex);
	}
 
	getchar();
	getchar();
	return 0;
}

