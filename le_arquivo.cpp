#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include "le_arquivo.hpp"

   std::vector<std::string> forca::le_arquivo() {

								std::ifstream arquivo;
								arquivo.open("palavras_forca.txt");

								if(arquivo.is_open()) {

									int qte_palavras;
									arquivo >> qte_palavras;
									std::vector<std::string> palavras_do_arquivo;
									
									for(int i = 0; i < qte_palavras; i++) {
										std::string palavra_lida;
										arquivo >> palavra_lida;
										palavras_do_arquivo.push_back(palavra_lida);}
										
									arquivo.close();
									return palavras_do_arquivo;}else{
										
									std::cout << "Não foi possível trazer o banco de palavras" << std::endl;
									exit(0);}
							 }
