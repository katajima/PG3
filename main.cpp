#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <cmath>


class IShape
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size_;

};

class Circle  : public IShape {
public:
	void Size() override;
	void Draw() override;

	void SetRad(float rad);

private:
	float rad_;
	float pi_ = 3.14f;
};

class Rctangle : public IShape {
public:
	void Size() override;
	void Draw() override;

	void SetWH(float w,float h);

private:
	float whidth_;
	float height_;


};


int main() {
	
	Rctangle rect;
	rect.SetWH(10, 30);
	rect.Size();
	rect.Draw();
	Circle circle;
	circle.SetRad(10);
	circle.Size();
	circle.Draw();


	return 0;
}

void Rctangle::Size()
{
	size_ = height_ * whidth_;
}

void Rctangle::Draw()
{
	printf("size %f\n", size_);
}

void Rctangle::SetWH(float w, float h)
{
	whidth_ = w;
	height_ = h;
}

void Circle::Size()
{
	size_ = rad_ * rad_ * pi_;
}

void Circle::Draw()
{
	printf("size %f\n", size_);
}

void Circle::SetRad(float rad)
{
	rad_ = rad;
}
