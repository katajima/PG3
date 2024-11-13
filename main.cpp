#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <memory>

class Test
{
public:

	void Setfunc(int x) { x_ =x; };
	int func() { return func2(); };
	int func2() { return x_; };


private:
	int x_ = 10;
};


int main() {
	
	std::unique_ptr<Test> test;

	test = std::make_unique<Test>();

	//test->Setfunc(10);

	printf("%d", test->func());

	return 0;
}

