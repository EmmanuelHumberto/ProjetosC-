#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"le_arquivo.hpp"


void forca::salva_arquivo (const std::vector< std::string>& lista_palavra) {
	
		std::ofstream arquivo;
		arquivo.open("palavras_forca.txt");
		
		if(arquivo.is_open()) {
			arquivo << lista_palavra.size() << std::endl;
			for( std::string palavra : lista_palavra) {
				arquivo << palavra << std::endl;}
			arquivo.close();
		 }else{
			std::cout << "Não foi possível trazer o banco de palavras" << std::endl;
			exit(0);}
 }
