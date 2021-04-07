#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<map>
#include<vector>
#include<fstream>

using namespace std;

void cabecalho(){

printf("************************\n");
printf("* Ola! Eu sou a forca. *\n");
printf("************************\n");
printf("\n");


printf("Vamos comerçar?\n");
printf("\n");

}

const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> bicudou;
vector<char>bicudas_erradas;

bool letra_existe(char bicu){ 
    //for iterado
    for(char letra : PALAVRA_SECRETA){
        if(bicu == letra){
        return true;
         }
     }
     return false;
 }

bool nao_acertou(){

    for(char letra : PALAVRA_SECRETA){

        if(!bicudou[letra]){
        
        return true;
         }
     }
     return false;
 }  

bool nao_inforcou(){

    return bicudas_erradas.size() < 5;
 }     

 void bicos_errados(){

    cout << "bicudos errados: "; 
    for(char letra : bicudas_erradas){
             cout << letra << " "; 
     }

     cout << endl;

 }

 void desenha_palavra(){

for(char letra : PALAVRA_SECRETA){
    if (bicudou [letra]){
        cout << letra << " ";
        }
        else{
        cout << "_ ";
         }
     }
    cout << endl;
 }

 void bicuda(){

    cout << "\n";
    cout << "\nBicuda Aí!  ";
    char bicu;
    cin >> bicu;

    bicudou[bicu] = true;

    if(letra_existe(bicu)){

        cout << "Você Acertou! Deu um bicu correto"<< endl; 

    }else{

        cout << "Voce ERROU! Deu um bicu pra longe"<< endl; 
        bicudas_erradas.push_back(bicu);

    }
    cout << endl;
 }

void le_arquivo(){

    ifstream arquivo;
    arquivo.open("palavras_forca.txt");

    int qte_palavras;
    arquivo >> qte_palavras;

    cout << "O arquivo possui " << qte_palavras << "palavras." << endl;

    for(int i = 0; i < qte_palavras; i++){
        string palavra_lida;
        arquivo >> palavra_lida;

        cout << "na linha " << i << " : " << palavra_lida << endl;


    }


}

int main(){

     cabecalho();

     le_arquivo();  

     while (nao_acertou() && nao_inforcou()){

         bicos_errados();
         desenha_palavra();
         bicuda();
     }

      cout << "Fim do jogo!" << endl;
      cout << "A palavra secreta é: " << PALAVRA_SECRETA << endl;
      if(nao_acertou()){

           cout << "Voce perdeu o jogo!" << endl;

      }else{

           cout << "Parabens! Você acertou a palavra secreta!" << endl;
        
      }
      
 }

