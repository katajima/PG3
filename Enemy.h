#pragma once
#include <iostream>
#include <Windows.h>

class Enemy
{
public:
	void Approach();
	

	void Shot();

	void Breakaway();

	void Update();

private:
	// メンバ関数ポインタテーブル
	static void(Enemy::* spfuncTeble[])();

	int phase_ = 0 ;
};