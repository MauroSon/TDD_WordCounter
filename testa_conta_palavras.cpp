// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_WordCounter/catch.hpp"

TEST_CASE("Teste Inicio", "[single-file]") {
    CustomDictionary expectedAswer;
    std::string testeInicio = {"inputFile.txt"};

    expectedAswer.insert("a",1);
    expectedAswer.insert("b",1);
    expectedAswer.insert("c",1);

    REQUIRE(contaPalavras(testeInicio) == expectedAswer);
}
