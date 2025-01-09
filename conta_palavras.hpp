// Copyright @2024 Mauro Silva

/**
    * @file conta_palavras.hpp
    * @brief Este arquivo define o header do projeto, serve para declarar interfaces de funções, classes, estruturas, constantes, macros e outras
    * entidades que devem estar disponíveis para outros arquivos.
    * 
    * O objetivo principal é separar a declaração e a implementação do código afim de organizar o código, tornar o processo de compilação mais eficiente e
    * permitir reuso de código.abs
    * 
    * @author Mauro Silva
    * @date 2025-01-09
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <utility>

/**
 * @class CustomDictionary
 * @brief Representa um dicionário customizado que organiza seus elementos na ordem que são inseridos.
 */

class CustomDictionary {
 public:
        /**
         * @brief Insere um novo par de chave e valor no dicionário caso não exista, se existir atualiza o valor da chave.
         * @param key Representa a chave do elemento, assinalado como uma string.
         * @param value Representa o valor do elemento, assinalado como um int.
         */
        void insert(const std::string& key, int value) {
            for (auto& pair : dictionary) {
                if (pair.first == key) {
                    pair.second = value;
                    return;
                }
            }
            dictionary.push_back({key, value});
        }

        /**
         * @brief Imprime os elementos do dicionário customizado na ordem que eles foram inseridos.
         */
        void print() const {
            for (const auto& pair : dictionary) {
                std::cout << pair.first << ": " << pair.second << std::endl;
            }
        }

        /**
         * @brief Define o operador de igualdade para comparação entre objetos do tipo dicionário customizado por meio de sobrecarga de operador.
         * @return Boolean(True ou False), se os objetos forem iguais ou diferentes respectivamente.
         */

        bool operator==(const CustomDictionary& other) const {
            if (dictionary.size() != other.dictionary.size()) {
                return false;
            }

            for (size_t i = 0; i < dictionary.size(); ++i) {
                if (dictionary[i] != other.dictionary[i]) {
                    return false;
                }
            }

            return true;
        }

 private:
        std::vector<std::pair<std::string, int>> dictionary;
};

/**
 * @brief Avalia o nome do arquivo, lê as palavras escritas e as conta e ordena alfabeticamente.
 * @param nomeDoArquivo representada por uma string.
 * @return Retorna o dicionário customizado com as palavras contadas e ordenadas alfabeticamente.
 */

CustomDictionary contaPalavras(std::string fileName);
