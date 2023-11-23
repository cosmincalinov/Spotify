#pragma once
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <exception>
#include <Windows.h>
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
        system("cls");
        std::cout << "Empty playlist!" << std::endl;
        std::cout << std::endl;
        Interface::getInstance().run();
    }
    catch (const WrongInput& w) {
        system("cls");
        std::cout << "Wrong input!" << std::endl;
        std::cout << std::endl;
        Interface::getInstance().run();
    }

    return 0;
}
