#include <string>
#include <thread>
#include <chrono>
#include <iostream>

#include "lore.hpp"

void InitDialogue(std::string label)
{
    std::string text = "";
    for(int i = 0; i < DIALOGUES_COUNT; i++)
    {
        if(DIALOGUES[i].label == label)
        {
            text = DIALOGUES[i].text;
            break;
        }
    }

    for(char c : text)
    {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
}