#include<iostream>
#include<vector>
#include<string>

extern std::vector<char>bicudas_erradas;


void bicos_errados() {
    std::cout << "                                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<std::endl;
    std::cout << "                                 ▒ bicudos errados:▒" <<std::endl;
    std::cout << "                                 ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<std::endl;
    std::cout <<"                                 :";
    for(char letra : bicudas_erradas) {
        std::cout << letra << " "; 
     }

     std::cout << std::endl;
 }