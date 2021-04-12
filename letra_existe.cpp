#include<iostream>
#include<string>
#include<cstdlib>
#include "letra_existe.hpp"

bool forca::letra_existe (char bicu, const std::string& palavra_secreta) { 
	
			//for iterado, 
			for(char letra : palavra_secreta){

				if(bicu == letra){
				return true;}}
				
			return false;
 }