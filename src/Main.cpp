#include <iostream>
#include "Log.h"

void InitLog();
int main()
{
    InitLog();
    Log("Hello World!");
    std::cin.get();
}
