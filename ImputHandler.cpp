#include "ImputHandler.h"
#include"Novice.h"

ICommand* ImputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D)) {
		return prassKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return prassKeyA_;
	}


	return nullptr;
}

void ImputHandler::AssignMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveLeftCommand();
	this->prassKeyA_ = command;
}

void ImputHandler::AssignMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	this->prassKeyD_ = command;
}
