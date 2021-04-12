#include<vector>
#include "le_arquivo.hpp"
#include "sorteia_palavra_secreta.hpp"

std::string forca::sorteia_palavra_secreta() {
	
	std::vector< std::string> palavra_sorteada  = forca::le_arquivo();
	
    srand(time(NULL));
    int indice_sorteado = rand() % palavra_sorteada.size();
	
    return palavra_sorteada[indice_sorteado];
 }
