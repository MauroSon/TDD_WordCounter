// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_WordCounter/catch.hpp"

TEST_CASE("Teste Inicio", "[single-file]") {
    std::string testeInicio = {"inputFile.txt"};
    REQUIRE(contaPalavras(testeInicio) == 0);
}
