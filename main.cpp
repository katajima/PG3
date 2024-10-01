#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <random>
#include <time.h> 



typedef int (*newType)(int a);

int randam_dice(int a) {
	
	a = rand() % 6 + 1;


	return a;
}


typedef void (*PFunc)(int*);

// コールバック関数
void DispResult(int* s) {
	printf("%d秒間待って実行されたよ\n", *s);
}

// 指定時間に時間
void setTimeout(PFunc p, int second) {
	// コールバック関数を呼び出す
	Sleep(second * 1000);

	p(&second);
}


int main() {
	srand(unsigned int(time(nullptr)));  // シードを一度だけ設定

	// 奇数か偶数かの判定用
	int num = 0;
	// ダイス
	int h = 0;

	// サイコロの出目の予想
	printf("サイコロを振るので出目が半(奇数)か丁(偶数)かを当ててください!!\n");
	printf("半(奇数)の場合は1、丁(偶数)の場合は0と入力してください :");
	scanf_s("%d", &num);


	// コールバック関数
	PFunc p;
	p = DispResult;
	// 三秒後に結果を表示
	setTimeout(p, 3);


	// 関数ポインタ
	newType calc;
	// 関数ポインタにrandam_diceを設定
	calc = &randam_dice;

	// サイコロを振り、その結果をhに格納
	h = calc(h);
	printf("サイコロの出目は: %d\n", h);


	// 出目が奇数か偶数かを判定
	int result = (h % 2 == 0) ? 0 : 1;

	// 正解判定
	if (result == num) {
		printf("正解!!\n");
	}
	else {
		printf("不正解\n");
	}
	
	





	return 0;

}

