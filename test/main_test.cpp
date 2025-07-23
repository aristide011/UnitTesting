#include<iostream>
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);  // Inizializza Google Test
    return RUN_ALL_TESTS();                   // Esegue tutti i test registrati
}