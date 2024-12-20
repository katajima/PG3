#include "Player.h"

Player::Player()
{
}

void Player::Inti()
{
	
	pos_ = { 30,300 };
	speed_ = 3.0f;
}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 64, 64, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}
