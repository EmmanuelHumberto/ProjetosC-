#include<iostream>
#include "desenha_palavra.hpp"

void desenha_palavra(std::string& palavra_secreta, const std::map<char, bool>& bicudou) {
    for(char letra : palavra_secreta) {
        if (bicudou.find(letra) == bicudou.end() || !bicudou.at(letra)) {
				std::cout << "_ ";
            }else{
				
				std::cout << letra << " ";
            }
        } 
    std::cout << std::endl;
 }