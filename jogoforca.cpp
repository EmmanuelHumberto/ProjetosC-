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
     
     forca::cabecalho_inicio();
     palavra_secreta = forca::sorteia_palavra_secreta();

     while (forca::nao_acertou(palavra_secreta, bicudou) && bicudas_erradas.size() < 5) {
         forca::bicos_errados(bicudas_erradas);
         forca::desenha_palavra(palavra_secreta, bicudou);
         forca::bicuda(bicudou, bicudas_erradas, palavra_secreta);
     }
     cout <<"============================================\n";
     cout <<  "\n";
     cout << "Fim do jogo!" << endl << endl;
     cout <<"-------------------------------------------\n";
     cout << "A palavra secreta é: " << palavra_secreta << endl;
     cout <<"-------------------------------------------\n";

     if(forca::nao_acertou(palavra_secreta, bicudou)){
		 
        forca::cabecalho_fim();}else{
			
         forca::cabecalho_ganhou();
         forca::cabecalho_add_palavra();
     }
 }

