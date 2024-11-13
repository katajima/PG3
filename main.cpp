#include <stdio.h>
#include <iostream>
#include <Windows.h>


// 基底クラス
class Animal {
public:

	// 鳴く
	virtual void CryVoice();

protected:

};

// 派生クラス
class Cat : public Animal
{
public:

	void CryVoice() override;


private:

};

// 派生クラス 
class Dog : public Animal
{
public:

	void CryVoice() override;


private:

};



int main() {
	
	Cat cat;
	cat.CryVoice();
	Dog dog;
	dog.CryVoice();


	return 0;
}




void Cat::CryVoice()
{
	printf("ニャー!!\n");
}


void Dog::CryVoice()
{
	printf("ワン!!\n");
}



void Animal::CryVoice()
{
}
