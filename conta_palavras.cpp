#include "../TDD_WordCounter/conta_palavras.hpp"

std::vector<std::string> contaPalavras(std::string fileName){
    //Inicializa o vetor de palavras
    std::vector<std::string> words;

    //Inicializa a leitura do arquivo externo
    std::ifstream input(fileName);
    std::string text;

    while(input>>text){
        std::cout << text << std::endl;
    }
    input.close();

    return words;
}