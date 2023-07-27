#pragma once
#include <iostream>
#include <vector>
#include <array>
struct TokenHandler{
    //store list of strings ... 
    std::vector<std::string> tokens{};

    std::string seperateTokensBy = " ()";

    //() brakets are always seperated...
    void tokenize(std::string);

};