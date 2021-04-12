#include<iostream>
#include "cabecalho_bicuda.hpp"
#include "cabecalho_bico_certo.hpp"
#include "cabecalho_bico_errado.hpp"
#include "letra_existe.hpp"
#include "bicuda.hpp"

void forca::bicuda(std::map<char, bool>& bicudou, std::vector<char>& bicudas_erradas, std::string& palavra_secreta){

    forca::cabecalho_bicuda();

    char bicu;
    std::cin >> bicu;
    bicudou[bicu] = true;

    if(letra_existe(bicu, palavra_secreta)) {
		
        forca::cabecalho_bico_certo();}else{
			
		forca::cabecalho_bico_errado();
        bicudas_erradas.push_back(bicu);}
    
	std::cout << std::endl;
 } 