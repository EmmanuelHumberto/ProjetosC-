#include<iostream>
#include<string>
#include"le_arquivo.hpp"
#include<vector>
#include<ctime>

extern std::string palavra_secreta;
extern std::vector<char>bicudas_erradas;

void sorteia_palavra_secreta() {

    std::vector< std::string> palavra_sorteada  = le_arquivo();
    srand(time(NULL));
    int indice_sorteado = rand() % palavra_sorteada.size();
    palavra_secreta = palavra_sorteada[indice_sorteado];
 }
