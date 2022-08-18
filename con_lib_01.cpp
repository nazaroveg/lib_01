// hello, name.cpp :
//

#include <iostream>
#include "Greeter.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    std::string name;
    std::cout << "Введите имя:\n";
    std::cin >> name;
    Greeter::Greeter names;

    std::cout << names.setgreet(name);
    return 0;
}

