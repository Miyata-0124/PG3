#include "Test.h"

TestSingleton::~TestSingleton()
{
}

TestSingleton* TestSingleton::GetInstance()
{
	static TestSingleton instance;
	return &instance;
}
