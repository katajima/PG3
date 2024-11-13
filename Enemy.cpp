#include "Enemy.h"
#include "stdio.h"




void Enemy::Approach()
{
	printf("近接\n");
}

void Enemy::Shot()
{
	printf("射撃\n");
}

void Enemy::Breakaway()
{

	printf("離脱\n");

}

void Enemy::Update()
{

	//
	for (int i = 0; i < 3;i++) {
		// フェーズ更新
		static_cast<size_t>(phase_);

		(this->*spfuncTeble[phase_])();


		phase_ = (phase_ + 1) % 2;
	}
}
