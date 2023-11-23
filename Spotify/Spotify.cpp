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
        std::cout << "Empty playlist!" << std::endl;
        Interface::getInstance().run();
    }
    catch (const WrongInput& w) {
        std::cout << "Wrong input!" << std::endl;
        Interface::getInstance().run();
    }

    return 0;
}
