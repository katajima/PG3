#pragma once



class Player;

class ICommand
{
public:
	virtual ~ICommand();
	virtual void Exec(Player& player) = 0;

private:

};

class MoveRightCommand : public ICommand
{
public:
	void Exec(Player& player) override;
};

class MoveLeftCommand : public ICommand
{
public:
	void Exec(Player& player) override;
};


