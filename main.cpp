#include <stdio.h>
#include <iostream>
#include <Windows.h>


// 一般的な賃金体系
#define COMMON_WAGE 1072
#define F_WAGE 100

int Recursive(int  hour,int num) {

	
	if (hour <= 1) {
		return num;
	}
	else if (hour) {

		return num + Recursive(hour - 1, (num * 2) -50);
	}
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

	if (hour <= 0) {
		printf("0時間より大きく時間を入力してください: ");
		printf("\n");
		return 0;
	}

	int old_hour = hour;

	// 一般的な
	common_total = COMMON_WAGE * hour;

	// 再帰的な
	recursiveSalary_total = Recursive(hour, recursiveSalary);

	// 結果を表示
	printf("一般的な賃金体系での合計賃金: %d円\n", common_total);
	printf("再帰的な賃金体系での合計賃金: %d円\n", recursiveSalary_total);

	if (common_total > recursiveSalary_total) {
		printf("%d時間の場合、一般的な賃金体系の方が合計賃金が多い", old_hour);
	}
	else if(common_total < recursiveSalary_total){
		printf("%d時間の場合、再帰的な賃金体系の方が合計賃金が多い", old_hour);
	}
	else {
		printf("%d時間の場合、一般的な賃金体系と再帰的な資金体系の合計賃金は同じ", old_hour);
	}

	return 0;
}

