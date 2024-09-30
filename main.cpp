#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include"string"

template<typename T>
T Min(T a, T b) {

	if (a > b) {
		return static_cast<T>(b);
	}
	else {
		return static_cast<T>(a);
	}
	
}
template<>
char Min<char>(char a, char b) {
	printf("数字以外は返せません\n");
	return 0;
}


int main() {
	
	printf("LE2A_09_カタジマ_ロウノシン_PG3\n");



	printf("%d\n", Min<int>(114,514));
	printf("%5.2f\n", Min<float>(11.4f,51.4f));
	printf("%5.2f\n", Min<double>(11.42,51.42));
	printf("%c\n", Min<char>('a', 'b'));


	return 0;
}

