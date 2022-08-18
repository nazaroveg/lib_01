#include "Greeter.h"

namespace Greeter
{

    std::string Greeter::Greeter::setgreet(std::string name)
    {
        std::string result = "Здравствуйте, " + name + " !";
        return result;
    }
}