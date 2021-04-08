#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<map>
#include "cabecalho_bico_certo.hpp"
#include "cabecalho_bico_errado.hpp"
#include "letra_existe.hpp"

extern std::vector<char>bicudas_erradas;
extern std::map<char, bool> bicudou;

void bicuda() {

    char bicu;
    std::cin >> bicu;
    bicudou[bicu] = true;

    if(letra_existe(bicu)) {
        cabecalho_bico_certo();

    }else{
        cabecalho_bico_errado();
        bicudas_erradas.push_back(bicu);
     }
    std::cout << std::endl;
 } 