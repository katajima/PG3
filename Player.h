#pragma once
#include <Novice.h>
#include <Vector2.h>
class Player
{
public:
	Player();
	
	void Inti();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_;
	float speed_;
};

