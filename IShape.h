#pragma once
#define PI 3.141592;
//���N���X
class IShape
{
public:
	virtual float Size() = 0;
	virtual void Draw() = 0;
};