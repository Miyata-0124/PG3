#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	float Size()override;
	void Draw()override;

private:
	float x = 10;
	float y = 10;
};

