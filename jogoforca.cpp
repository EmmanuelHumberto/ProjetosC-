#include<iostream>
#include<string>
#include<map>
#include<vector>
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
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include "sorteia_palavra_secreta.hpp"
#include "add_nova_palavra.hpp"

using namespace std;
static string palavra_secreta;
static map<char, bool> bicudou;
static vector<char>bicudas_erradas;
 
int main() {
     
     cabecalho_inicio();
     palavra_secreta = sorteia_palavra_secreta();

     while(nao_acertou(palavra_secreta, bicudou) && bicudas_erradas.size() < 5) {
         bicos_errados(bicudas_erradas);
         desenha_palavra(palavra_secreta, bicudou);
         bicuda(bicudou, bicudas_erradas);
     }
    cout <<"============================================\n";
    cout <<  "\n";
    cout << "Fim do jogo!" << endl << endl;
    cout <<"-------------------------------------------\n";
    cout << "A palavra secreta é: " << palavra_secreta << endl;
    cout <<"-------------------------------------------\n";

    if(nao_acertou(palavra_secreta, bicudou)){
        cabecalho_fim();

     }else{
         cabecalho_ganhou();
         cabecalho_add_palavra();
     }
 }

