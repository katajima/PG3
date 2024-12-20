#pragma once
#include<Command.h>

class ImputHandler
{
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommand2PressKeyA();
	void AssignMoveRightCommand2PressKeyD();
private:
	ICommand* prassKeyD_;
	ICommand* prassKeyA_;


};

