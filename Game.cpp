// Game.cpp
#include "Game.h"

// инициализируем пустой конструктор класса 
Game::Game() {}

// инициализируем пустой деструктор класса 
Game::~Game() {}

// инициализируем метод для получения названия игры
std::string Game::getTitle() const {
    return title;
}

// инициализируем метод для получения жанра игры
std::string Game::getGenre() const {
    return genre;
}

// инициализируем метод для получения платформы игры
std::string Game::getPlatform() const {
    return platform;
}

// инициализируем метод для получения года выпуска игры
int Game::getYear() const {
    return year;
}

// инициализируем метод для получения разработчика игры
std::string Game::getDeveloper() const {
    return developer;
}

// инициализируем метод для получения допустимого количесва игроков игры
int Game::getPlayers() const {
    return players;
}

// инициализируем метод для получения минимальной CPU игры
int Game::getMinCPU() const {
    return min_cpu;
}

// инициализируем метод для получения минимальной RAM игры
int Game::getMinRAM() const {
    return min_ram;
}

// инициализируем метод для получения минимальной HDD игры
int Game::getMinHDD() const {
    return min_hdd;
}

// инициализируем метод для считывания данных об игре из консоли
void Game::inputData() {
    std::cout << "введите название игры: ";
    std::cin.ignore();
    // считваем введенное значение из консоли
    std::getline(std::cin, title);

    std::cout << "введите жанр игры: ";
    // считваем введенное значение из консоли
    std::getline(std::cin, genre);

    std::cout << "введите платформу игры: ";
    // считваем введенное значение из консоли
    std::getline(std::cin, platform);

    std::cout << "введите год выпуска игры: ";
    // считваем введенное значение из консоли
    std::cin >> year;

    std::cout << "введите разработчика игры: ";
    std::cin.ignore();
    // считваем введенное значение из консоли
    std::getline(std::cin, developer);

    do {
        std::cout << "введите количество игроков (больше 0): ";
        std::cin >> players;
    } while (players <= 0);  // проверка на положительное количество игроков


    std::cout << "введите минимальную частоту CPU: ";
    // считваем введенное значение из консоли
    std::cin >> min_cpu;

    std::cout << "введите минимальный объем RAM: ";
    // считваем введенное значение из консоли
    std::cin >> min_ram;

    std::cout << "введите минимальный объем HDD: ";
    // считваем введенное значение из консоли
    std::cin >> min_hdd;
}

// инициализируем метод для считывания данных об игре из файла
void Game::readFromFile(std::ifstream& inputFile) {
    // считываем построчно значения из файла
    inputFile >> title >> genre >> platform >> year >> developer >> players >> min_cpu >> min_ram >> min_hdd;
}

// инициализируем метод для вывода данных об игре
void Game::display() const {
    std::cout << "Название: " << title << std::endl;
    std::cout << "Жанр: " << genre << std::endl;
    std::cout << "Платформа: " << platform << std::endl;
    std::cout << "Год выпуска: " << year << std::endl;
    std::cout << "Разработчик: " << developer << std::endl;
    std::cout << "Игроки: " << players << std::endl;
    std::cout << "Минимальный CPU: " << min_cpu << std::endl;
    std::cout << "Минимальный RAM: " << min_ram << std::endl;
    std::cout << "Минимальный HDD: " << min_hdd << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

// инициализируем методя для записи данных в файл
void Game::writeToFile(std::ofstream& outputFile) const {
    // записываем построчно значения в файл
    outputFile << title << "\n" << genre << "\n" << platform << "\n" << year << "\n" << developer
        << "\n" << players << "\n" << min_cpu << "\n" << min_ram << "\n" << min_hdd << "\n";
}