#pragma once

#include <string>

struct Dialogue
{
    std::string label;
    std::string text;
};

static const Dialogue DIALOGUES[] = 
{
    {"start", "ajkfhaslufh uofa hfoha fhals fhasf asf askfah aklfh sj fla hlfga fhlb"}
};

static const size_t DIALOGUES_COUNT = sizeof(DIALOGUES)/sizeof(Dialogue);

void InitDialogue(std::string);