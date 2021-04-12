#include<iostream>
#include<string>
#include "cabecalho_bicuda.hpp"
#include "cabecalho_bico_certo.hpp"
#include "cabecalho_bico_errado.hpp"
#include "letra_existe.hpp"
#include "bicuda.hpp"

void bicuda(std::map<char, bool>& bicudou, std::vector<char>& bicudas_erradas) {

    cabecalho_bicuda();

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