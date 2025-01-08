// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

int contaPalavras(std::string fileName) {
    std::vector<std::string> words;
    int qnt = 0;
    std::string temp;

    std::ifstream input(fileName);
    std::string text;

    while (input >> text) {
        words.push_back(text);
    }
    input.close();
    for (auto it = words.begin(); it  != words.end(); ++it) {
       //std::cout << *it << std::endl;
       ++qnt;
    }

    for (int i = 0; i < qnt; ++i){
        for (int j = i+1; j<qnt;++j){
            if (words[i] > words[j]){
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            };
        };
    };

    for ( auto it = words.begin(); it != words.end(); ++it){
        std::cout << *it << std::endl;
    };

    return 0;
}
