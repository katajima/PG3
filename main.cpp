#include "stdlib.h"
#include <stdio.h>


// ��ʓI�Ȓ����̌n
#define COMMON_WAGE 1072
#define F_WAGE 100

int Recursive(int recursive_total , int  hour) {
	

	if (hour <= 1) {
		
		return recursive_total;
	}
	else if (hour) {

	}


	return Recursive((recursive_total * 2) - 50, hour -1);
};




int main() {

	// ����
	int hour = 0;

	// ��ʎ����g�[�^��
	int common_total = 0;

	// �ċA�I����
	int recursiveSalary = 100;
	
	// �ċA�I�����g�[�^��
	int recursiveSalary_total = 0;

	// ����
	printf("�������Ԃ���͂��Ă�������: ");
	scanf_s("%d", &hour);
	printf("\n");

	common_total = COMMON_WAGE * hour;

	recursiveSalary_total = Recursive(recursiveSalary,hour);

	// ���ʂ�\��
	printf("��ʓI�Ȓ����̌n�ł̍��v����: %d�~\n", common_total);
	printf("�ċA�I�Ȓ����̌n�ł̍��v����: %d�~\n", recursiveSalary_total);


	return 0;
}

