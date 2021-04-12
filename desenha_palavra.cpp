#include<iostream>
#include "desenha_palavra.hpp"

void forca::desenha_palavra(const std::string& palavra_secreta, std::map<char, bool>& bicudou) {
			for(char letra : palavra_secreta) {
				if(bicudou[letra]) {
						std::cout << letra << " ";}else{
						
						std::cout << "_ ";}} 
						
			std::cout << std::endl;
 }