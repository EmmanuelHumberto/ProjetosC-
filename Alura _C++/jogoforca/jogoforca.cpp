#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<map>
#include<vector>
#include<fstream>
#include<stdio.h>
#include "cabecalho_bico_certo.hpp"
#include "cabecalho_inicio.hpp"
#include "cabecalho_ganhou.hpp"
#include "cabecalho_bico_errado.hpp"
#include "cabecalho_fim.hpp"
#include "cabecalho_add_palavra.hpp"
#include "cabecalho_bicuda.hpp"
#include "bicuda.hpp"
#include "bicos_errados.hpp"
#include "letra_existe.hpp"
#include "desenha_palavra.hpp"
#include "nao_acertou.hpp"
#include "nao_inforcou.hpp"
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "sorteia_palavra_secreta.hpp"
#include "add_nova_palavra.hpp"

using namespace std;

string palavra_secreta;
map<char, bool> bicudou;
vector<char>bicudas_erradas;
 
int main() {
     
     cabecalho_inicio();
     le_arquivo();  
     sorteia_palavra_secreta();

     while (nao_acertou() && nao_inforcou()) {
         bicos_errados();
         desenha_palavra();
         bicuda();
     }
    cout <<"============================================\n";
    cout <<  "\n";
    cout << "Fim do jogo!" << endl << endl;
    cout <<"-------------------------------------------\n";
    cout << "A palavra secreta é: " << palavra_secreta << endl;
    cout <<"-------------------------------------------\n";

    if(nao_acertou()){
        cabecalho_fim();

     }else{
         cabecalho_ganhou();
     }
 }

