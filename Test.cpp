#include "Test.h"

Test* Test::GetInstance()
{
    static Test instance;
    return &instance;
}
