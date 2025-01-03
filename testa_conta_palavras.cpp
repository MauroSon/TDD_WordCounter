// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_WordCounter/catch.hpp"

TEST_CASE("Testa Inicio","[single-file]"){
    std::string testeInicio = {"inputFile.txt"};
    std::vector<std::string> asw = {"dois:","1","Teste:","1","três:","1","um:","1"};
    REQUIRE(contaPalavras(testeInicio) == asw);
}