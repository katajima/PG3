#include "stdlib.h"
#include <stdio.h>


// 一般的な賃金体系
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

	// 時間
	int hour = 0;

	// 一般資金トータル
	int common_total = 0;

	// 再帰的資金
	int recursiveSalary = 100;
	
	// 再帰的資金トータル
	int recursiveSalary_total = 0;

	// 時間
	printf("働く時間を入力してください: ");
	scanf_s("%d", &hour);
	printf("\n");

	common_total = COMMON_WAGE * hour;

	recursiveSalary_total = Recursive(recursiveSalary,hour);

	// 結果を表示
	printf("一般的な賃金体系での合計賃金: %d円\n", common_total);
	printf("再帰的な賃金体系での合計賃金: %d円\n", recursiveSalary_total);


	return 0;
}

