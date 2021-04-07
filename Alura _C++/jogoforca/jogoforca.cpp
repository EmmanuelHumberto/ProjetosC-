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

string palavra_secreta = "MELANCIA";
map<char, bool> bicudou;
vector<char>bicudas_erradas;

bool letra_existe(char bicu){ 
    //for iterado
    for(char letra : palavra_secreta){
        if(bicu == letra){
        return true;
         }
     }
     return false;
 }

bool nao_acertou(){

    for(char letra : palavra_secreta){
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

for(char letra : palavra_secreta){
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

vector<string> le_arquivo(){

    ifstream arquivo;
    arquivo.open("palavras_forca.txt");
    int qte_palavras;
    arquivo >> qte_palavras;
    vector<string> palavras_do_arquivo;


    for(int i = 0; i < qte_palavras; i++){
        string palavra_lida;
        arquivo >> palavra_lida;
        palavras_do_arquivo.push_back(palavra_lida);
     }
     return palavras_do_arquivo;
 }

void sorteia_palavra_secreta(){

    vector<string> palavra_sorteada  = le_arquivo();
    srand(time(NULL));
    int indice_sorteado = rand() % palavra_sorteada.size();
    palavra_secreta = palavra_sorteada[indice_sorteado];



}

int main(){

     cabecalho();
     le_arquivo();  
     sorteia_palavra_secreta();

     while (nao_acertou() && nao_inforcou()){

         bicos_errados();
         desenha_palavra();
         bicuda();
     }

      cout << "Fim do jogo!" << endl;
      cout << "A palavra secreta é: " << palavra_secreta << endl;
      if(nao_acertou()){
           cout << "Voce perdeu o jogo!" << endl;

      }else{
           cout << "Parabens! Você acertou a palavra secreta!" << endl;
        
      }
      
 }

