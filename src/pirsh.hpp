#pragma once
#include <iostream>

class Pirsh {
public:
    const std::string PIRSH_SYM;
    Pirsh();
    
    std::string pirshInput();
    void setPirshSym(std::string *sym);
    std::string parseInput();

private:
    std::string input;
};
