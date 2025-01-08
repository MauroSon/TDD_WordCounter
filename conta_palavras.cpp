#include "../TDD_WordCounter/conta_palavras.hpp"

void contaPalavras(std::string fileName){
    std::vector<std::string> words;

    std::ifstream input(fileName);
    std::string text;

    while (input>>text){
        words.push_back(text);
    }

    for (auto it = words.begin(); it  != words.end(); ++it){
        std::cout << *it << std::endl;
    }
}