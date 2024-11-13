#include <stdio.h>
#include <iostream>
#include <Windows.h>

template <typename Type1, typename Type2>

class Comparator
{
public:
	
	Comparator(Type1 num1, Type2 num2) : num1(num1), num2(num2){};

	// min比較
	Type1 Min() { return (num1 < num2) ? num1 : num2; }


private:
	Type1 num1;
	Type2 num2;
};



int main() {
	// int int 
	Comparator<int, int> int2(15, 3);
	// float float
	Comparator<float, float> float2(1.0f, 3.0f);
	// float float
	Comparator<double, double> double2(5.0, 3.0);
	// int float
	Comparator<int, float> intfloat(132, 37.0f);
	// int double
	Comparator<int, double> intdouble(154, 335.0);
	// int float
	Comparator<float, double> floatdouble(134.0f, 63.0);



	std::cout << "Min(int, int): " << int2.Min() << std::endl; 
	std::cout << "Min(float, float): " << float2.Min() << std::endl;
	std::cout << "Min(double, double): " << double2.Min() << std::endl;
	std::cout << "Min(int, float): " << intfloat.Min() << std::endl;
	std::cout << "Min(int, double): " << intdouble.Min() << std::endl; 
	std::cout << "Min(float, double): " << floatdouble.Min() << std::endl;

	/*printf("%d\n",int2.Min());
	printf("%f\n", float2.Min());
	printf("%lf\n", double2.Min());
	printf("%f\n", intfloat.Min());
	printf("%f\n", intdouble.Min());
	printf("%f\n", floatdouble.Min());*/

	return 0;
}

