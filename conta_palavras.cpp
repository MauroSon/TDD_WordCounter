// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

int contaPalavras(std::string fileName) {
    std::vector<std::string> words;

    std::ifstream input(fileName);
    std::string text;

    while (input >> text) {
        words.push_back(text);
    }
    input.close();
    for (auto it = words.begin(); it  != words.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
