#include<iostream>
#include<vector>
#include<string>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"


void add_nova_palavra() {

    std::cout << "Digite a nova palavra usando letras maiusculas" << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;
    std::vector<std::string> lista_palavra = le_arquivo();
    lista_palavra.push_back(nova_palavra);
	salva_arquivo(lista_palavra);
    
 }