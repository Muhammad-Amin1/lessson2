#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int count = 0;
    int mass[5];

    /*
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ввод: ";
        std::cin >> player;
        if (player == 0)
        {
            player = -1;
        }
        mass[i] = player;

    }



    for (int i = 0; i < 5; i++)
    {
        if (mass[i] > 0)
        {
            std::cout << "Вывод" << mass[i] << "\n";
        }

    }

    for (int i = 0; i < 5; i++)
    {

        if (mass[i] < 0)
        {
            std::cout << "Вывод" << mass[i] << "\n";
        }
    }

    */

    for (int i = 0; i < 5; i++)
    {
        
        mass[i] = rand() % 6;
        std::cout << mass[i] << " ";
 
    }



    for (int i = 0; i < 5; i++)
    {
        if (mass[i] != 0)
        {
            mass[count] = mass[i];
            count++;
        }
        
    }

    std::cout << "\n\n";
    for (int i = count; i < 5; i++)
    {
        mass[i] = -1;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout  << mass[i] << " ";
    }

    return 0;
}


