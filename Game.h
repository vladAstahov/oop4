#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Game {
private:
    std::string title;
    std::string genre;
    std::string platform;
    int year;
    std::string developer;
    int players;
    int min_cpu;
    int min_ram;
    int min_hdd;

public:
    Game();
    ~Game();

    std::string getTitle() const;
    std::string getGenre() const;
    std::string getPlatform() const;
    int getYear() const;
    std::string getDeveloper() const;
    int getPlayers() const;
    int getMinCPU() const;
    int getMinRAM() const;
    int getMinHDD() const;

    void inputData();
    void readFromFile(std::ifstream& inputFile);
    void display() const;
    void writeToFile(std::ofstream& outputFile) const;
};