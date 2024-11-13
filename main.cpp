#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include "Enemy.h"


void(Enemy::* Enemy::spfuncTeble[])()
= {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Breakaway
};


int main() {
	Enemy* enemy  = new Enemy();

	enemy->Update();

	
	delete enemy;

	return 0;
}




