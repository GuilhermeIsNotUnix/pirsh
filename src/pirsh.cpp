#include <iostream>
#include <string>
#include "pirsh.hpp"

#ifdef _WIN32
   #include <windows.h>
#elif __APPLE__
    #include <unistd.h>
#elif __linux__
    #include <unistd.h>
#elif __unix__
    #include <unistd.h>
#endif

class Pirsh {
public:
    const std::string PIRSH_SYM = "";

    Pirsh() {
        while(true) {
            pirshInput();
        }
    }

    void setPirshSym(std::string *sym) {
        this->PIRSH_SYM._Equal("^");
    }

    std::string pirshInput() {
        std::cout << PIRSH_SYM << " ";
        std::getline(std::cin, this->input);
    }

private:
    std::string input = "";
};
