// Copyright @2024 Mauro Silva

#include "../TDD_WordCounter/conta_palavras.hpp"

#define CATCH_CONFIG_MAIN
#include "../TDD_WordCounter/catch.hpp"

TEST_CASE("Teste Alfabético", "[single-file]") {
    CustomDictionary expectedAswer;
    std::string fileName = {"inputFile1.txt"};

    expectedAswer.insert("a",1);
    expectedAswer.insert("b",1);
    expectedAswer.insert("c",1);
    expectedAswer.insert("d",1);
    expectedAswer.insert("e",1);
    expectedAswer.insert("f",1);
    expectedAswer.insert("g",1);
    expectedAswer.insert("h",1);
    expectedAswer.insert("i",1);
    expectedAswer.insert("j",1);
    expectedAswer.insert("k",1);
    expectedAswer.insert("l",1);
    expectedAswer.insert("m",1);
    expectedAswer.insert("n",1);
    expectedAswer.insert("o",1);
    expectedAswer.insert("p",1);
    expectedAswer.insert("q",1);
    expectedAswer.insert("r",1);
    expectedAswer.insert("s",1);
    expectedAswer.insert("t",1);
    expectedAswer.insert("u",1);
    expectedAswer.insert("v",1);
    expectedAswer.insert("w",1);
    expectedAswer.insert("x",1);
    expectedAswer.insert("y",1);
    expectedAswer.insert("z",1);

    REQUIRE(contaPalavras(fileName) == expectedAswer);
}

TEST_CASE("Teste Quantidade(+1)", "[single-file]") {
    CustomDictionary expectedAnswer;
    std::string fileName = {"inputFile2.txt"};

    expectedAnswer.insert("abacate",1);
    expectedAnswer.insert("banana",1);
    expectedAnswer.insert("maçã",2);
    expectedAnswer.insert("melão",2);
    expectedAnswer.insert("morango",1);

    REQUIRE(contaPalavras(fileName) == expectedAnswer);
}

TEST_CASE("Teste Alfabético(CAPITAL)", "[single-file]") {
    CustomDictionary expectedAswer;
    std::string fileName = {"inputFile3.txt"};

    expectedAswer.insert("A",1);
    expectedAswer.insert("B",1);
    expectedAswer.insert("C",1);
    expectedAswer.insert("D",1);
    expectedAswer.insert("E",1);
    expectedAswer.insert("F",1);
    expectedAswer.insert("G",1);
    expectedAswer.insert("H",1);
    expectedAswer.insert("I",1);
    expectedAswer.insert("J",1);
    expectedAswer.insert("K",1);
    expectedAswer.insert("L",1);
    expectedAswer.insert("M",1);
    expectedAswer.insert("N",1);
    expectedAswer.insert("O",1);
    expectedAswer.insert("P",1);
    expectedAswer.insert("Q",1);
    expectedAswer.insert("R",1);
    expectedAswer.insert("S",1);
    expectedAswer.insert("T",1);
    expectedAswer.insert("U",1);
    expectedAswer.insert("V",1);
    expectedAswer.insert("W",1);
    expectedAswer.insert("X",1);
    expectedAswer.insert("Y",1);
    expectedAswer.insert("Z",1);

    REQUIRE(contaPalavras(fileName) == expectedAswer);
}

TEST_CASE("Teste Alfabético(CAPITAL & Normal)", "[single-file]") {
    CustomDictionary expectedAswer;
    std::string fileName = {"inputFile4.txt"};

    expectedAswer.insert("A",1);
    expectedAswer.insert("B",1);
    expectedAswer.insert("C",1);
    expectedAswer.insert("D",1);
    expectedAswer.insert("E",1);
    expectedAswer.insert("F",1);
    expectedAswer.insert("G",1);
    expectedAswer.insert("H",1);
    expectedAswer.insert("I",1);
    expectedAswer.insert("J",1);
    expectedAswer.insert("K",1);
    expectedAswer.insert("L",1);
    expectedAswer.insert("M",1);
    expectedAswer.insert("N",1);
    expectedAswer.insert("O",1);
    expectedAswer.insert("P",1);
    expectedAswer.insert("Q",1);
    expectedAswer.insert("R",1);
    expectedAswer.insert("S",1);
    expectedAswer.insert("T",1);
    expectedAswer.insert("U",1);
    expectedAswer.insert("V",1);
    expectedAswer.insert("W",1);
    expectedAswer.insert("X",1);
    expectedAswer.insert("Y",1);
    expectedAswer.insert("Z",1);
    expectedAswer.insert("a",1);
    expectedAswer.insert("b",1);
    expectedAswer.insert("c",1);
    expectedAswer.insert("d",1);
    expectedAswer.insert("e",1);
    expectedAswer.insert("f",1);
    expectedAswer.insert("g",1);
    expectedAswer.insert("h",1);
    expectedAswer.insert("i",1);
    expectedAswer.insert("j",1);
    expectedAswer.insert("k",1);
    expectedAswer.insert("l",1);
    expectedAswer.insert("m",1);
    expectedAswer.insert("n",1);
    expectedAswer.insert("o",1);
    expectedAswer.insert("p",1);
    expectedAswer.insert("q",1);
    expectedAswer.insert("r",1);
    expectedAswer.insert("s",1);
    expectedAswer.insert("t",1);
    expectedAswer.insert("u",1);
    expectedAswer.insert("v",1);
    expectedAswer.insert("w",1);
    expectedAswer.insert("x",1);
    expectedAswer.insert("y",1);
    expectedAswer.insert("z",1);


    REQUIRE(contaPalavras(fileName) == expectedAswer);
}

TEST_CASE("Teste Acento", "[single-file]") {
    CustomDictionary expectedAnswer;
    std::string fileName = {"inputFile5.txt"};

    expectedAnswer.insert("á",1);
    expectedAnswer.insert("é",1);
    expectedAnswer.insert("í",1);
    expectedAnswer.insert("ó",1);
    expectedAnswer.insert("ú",1);

    REQUIRE(contaPalavras(fileName) == expectedAnswer);
}