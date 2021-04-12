#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"le_arquivo.hpp"

extern std::string palavra_secreta;

void salva_arquivo( std::vector< std::string>& lista_palavra) {
    std::ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()) {
        arquivo << lista_palavra.size() << std::endl;
        for( std::string palavra : lista_palavra) {
            arquivo << palavra << std::endl;
         }
        arquivo.close();
     }else{
        std::cout << "Não foi possível trazer o banco de palavras" << std::endl;
        exit(0);
     }
 }
