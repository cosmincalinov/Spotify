#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Interface.h"



int main()
{
    srand(time(NULL));
    Interface::getInstance().displayGreetingMessage();
    //Interface::getInstance().run();
    return 0;
}
