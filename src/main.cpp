#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "chem.hpp"
#include "lore.hpp"


std::vector<std::string> split(const std::string& s) {
    std::istringstream iss(s);
    std::vector<std::string> words;
    std::string w;
    while (iss >> w) {
        words.push_back(w);
    }
    return words;
}

int main()
{
    InitDialogue("start");

    while(1)
    {
        std::string line;
        std::getline(std::cin, line);
        std::vector<std::string> v = split(line);
        if(v.size() == 0) continue;
        if(v[0] == "exit") break;
        if(v[0] == "mix") Mix(v);
    }
}