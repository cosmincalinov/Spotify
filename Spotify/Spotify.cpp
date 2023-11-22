#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <exception>
#include "Interface.h"
#include "EmptyPlaylist.h"
#include "WrongInput.h"



int main()
{
    srand(time(NULL));
    Interface::getInstance().displayGreetingMessage();
    try {
        Interface::getInstance().run();
    }
    catch (const EmptyPlaylist& e) {

    }
    catch (const WrongInput& w) {

    }
    return 0;
}
