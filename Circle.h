#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	float Size()override;
	void Draw()override;
private:
	float radius = 16;//”¼Œa
};

