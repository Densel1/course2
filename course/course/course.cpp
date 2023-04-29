
#include <iostream>
#include "verblud.h"
#include "fastVerblud.h"

int main()
{
    verblud Verblud;
    Verblud.setDistance(4500);
    std::cout << "verblude " << Verblud.GetDriveTime();

    fastVerblud FastVerblud("Быстрый верблюд",40,4500,10,5,6.5,8);
 //   FastVerblud.setDistance(4500);
    std::cout << "verblude " << FastVerblud.GetDriveTime();

}

