#pragma once

#include <vector>
#include <string>

struct Element {
    char id;
    int mass;
    int valence;
};

struct Substance {
    std::string id;
    std::string structure;
};

constexpr Element elements[] = {
    {'A', 2, 1},
    {'B', 3, 2},
    {'C', 5, 1}
};

const std::vector<Substance> substances = {
    {"X01", "AA"},
    {"X02", "CC"},
    {"X03", "AC"},
    {"X04", "ABA"},
    {"X05", "ABC"},
    {"X06", "CBC"},
    {"X07", "ABBA"},
    {"X08", "ABBC"}
};

constexpr int bond_energy[3][3] = {
    // A  B  C
    {  2, 4, 5 }, // A
    {  4, 7, 6 }, // B
    {  5, 6, 2 }  // C
};


void Mix(std::vector<std::string>);