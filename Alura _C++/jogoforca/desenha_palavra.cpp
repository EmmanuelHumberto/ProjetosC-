#include<iostream>
#include<string>
#include<map>

extern std::string palavra_secreta;
extern std::map<char, bool> bicudou;


void desenha_palavra() {
    for(char letra : palavra_secreta) {
        if (bicudou [letra]) {
            std::cout << letra << " ";
            }
            else{
               std::cout << "_ ";
            }
        } 
    std::cout << std::endl;
 }