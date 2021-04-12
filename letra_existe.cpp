#include<iostream>
#include<string>
#include<cstdlib>

const std::string palavra_secreta;

bool letra_existe(char bicu) { 
    //for iterado, 
    for(char letra : palavra_secreta) {
        if(bicu == letra){
        return true;
         }
     }
     return false;
 }