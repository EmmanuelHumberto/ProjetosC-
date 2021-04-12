#include<iostream>
#include "bicos_errados.hpp"

void bicos_errados(const std::vector<char>&bicudas_erradas) {
    std::cout << "                                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<std::endl;
    std::cout << "                                 ▒ bicudos errados:▒" <<std::endl;
    std::cout << "                                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<std::endl;
    std::cout <<"                                 :";
    for(char letra : bicudas_erradas) {
        std::cout << letra << " "; 
     }

     std::cout << std::endl;
 }