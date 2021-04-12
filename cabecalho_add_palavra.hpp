#include<iostream>
#include "add_nova_palavra.hpp"

inline void cabecalho_add_palavra(){

    std::cout <<  "\n";
    std::cout << "   ╔══════════════════════════════════╗" << std::endl;
    std::cout << "   ║ Quer adicionar uma nova palavra? ║" << std::endl;
    std::cout << "   ╚══════════════════════════════════╝" << std::endl;
    std::cout << "   ║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << std::endl;
    std::cout << "   ║▒▒▒▒▒ S ▒▒▒▒▒▒▒▒▒▒▒▒▒ SIM ▒▒▒▒▒▒▒▒║" << std::endl; 
    std::cout << "   ║▒▒▒▒▒ N ▒▒▒▒▒▒▒▒▒▒▒▒▒ NAO ▒▒▒▒▒▒▒▒║" << std::endl;
    std::cout << "   ║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << std::endl;
    std::cout << "   ╚══════════════════════════════════╝" << std::endl;
    std::cout <<  "\n";

    char nova_palavra;
    std::cin >> nova_palavra;

    if(nova_palavra == 'S' || 's'){
		add_nova_palavra();
	}
 } 