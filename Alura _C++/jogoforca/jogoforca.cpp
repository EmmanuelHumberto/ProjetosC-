#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<map>
#include<vector>
#include<fstream>
#include<stdio.h>

using namespace std;

string palavra_secreta;
map<char, bool> bicudou;
vector<char>bicudas_erradas;

void cabecalho() {

    
    printf(" \n");    
    printf("               .-'''-.                   _..._                \n");
    printf("              '   _    \\              .-'_..._''.            \n");
    printf("            /   /` '.   \\           .' .'      '.\\          \n");
    printf("      _.._ .   |     \\  '          / .'                      \n");
    printf("    .' .._||   '      |  '.-,.--. . '                         \n");
    printf("    | '    \\    \\     / / |  .-. || |                 __    \n");
    printf("  __| |__   `.   ` ..' /  | |  | || |              .:--.'.    \n");
    printf(" |__   __|     '-...-'`   | |  | |. '             / |   \\ |  \n");
    printf("    | |                   | |  '-  \\ '.          .` __ | |   \n");
    printf("    | |                   | |       '. `._____.-'/ .'.''| |   \n");
    printf("    | |                   | |         `-.______ / / /   | |_  \n");
    printf("    | |                   | |         `-.______ / / /   | |_  \n");
    printf("    | |                   | |         `-.______ / / /   | |_  \n");
    printf("    | |                   | |         `-.______ / / /   | |_  \n");
    printf("    | |                   |_|                  `  \\ \\._,\\  \n");
    printf("    |_|                                            `--'  `    \n");
    printf(" \n");

    printf(" \n");
    printf("     ⠀(\\__/)⠀⠀⠀⠀⠀                                   \n");
    printf(" ⠀⠀⠀⠀⠀(•ㅅ•)⠀⠀      Bora Jogar?                      \n");
    printf(" ⠀＿ノ⠀ヽ⠀ノ⠀＼＿⠀⠀                                    \n");
    printf(" /⠀️⠀Y⠀⌒Ｙ⌒⠀Ｙ⠀️⠀️ヽ       Frango!                       \n");
    printf(" (⠀️⠀️⠀️(三ヽ人⠀⠀/⠀⠀⠀|                                   \n");
    printf(" |⠀️⠀️⠀️ﾉ⠀¯¯\\⠀￣￣ヽノ                                   \n");
    printf(" ヽ＿＿＿⠀⠀＞､＿_／                                      \n");
    printf(" ⠀⠀｜⠀(⠀王⠀)〈⠀⠀                                      \n");
    printf(" ⠀⠀/⠀⠀ﾐ`——彡⠀\\  (•ㅅ•)                                \n");
    printf("========================================================\n");
    printf(" \n\n");

  }

bool letra_existe(char bicu) { 
    //for iterado
    for(char letra : palavra_secreta) {
        if(bicu == letra){
        return true;
         }
     }
     return false;
 }

bool nao_acertou() {

    for(char letra : palavra_secreta) {
        if(!bicudou[letra]) {
        return true;
         }
     }
     return false;
 }  

bool nao_inforcou() {

    return bicudas_erradas.size() < 5;
 } 

void bicos_errados() {
    cout << "                                     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<endl;
    cout << "                                     ▒ bicudos errados:▒" <<endl;
    cout << "                                     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" <<endl;
    cout <<"                                     :";
    
    for(char letra : bicudas_erradas) {
        cout << letra << " "; 
     }

     cout << endl;
 }

void desenha_palavra() {
    for(char letra : palavra_secreta) {
        if (bicudou [letra]) {
            cout << letra << " ";
            }
            else{
               cout << "_ ";
            }
        } 
    cout << endl;
 }

void bicuda() {

    cout << "\n";
    cout << "╔══════════╗" << endl;
    cout << "║Bicuda aí!║" << endl;
    cout << "╚══════════╝" << endl;
    cout << "\n";
    char bicu;
    cin >> bicu;
    bicudou[bicu] = true;

    if(letra_existe(bicu)) {

        cout << "\n";
        cout << "Você Acertou! Deu um bicu correto"<< endl;
        cout << "\n";
        cout << " ░░░░░░░░░░░░░░░░░░░░░█████████░░░░░░░░░░ "<< endl;
        cout << " ░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███░░░░░░░ "<< endl;
        cout << " ░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███░░░░ "<< endl;
        cout << " ░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░ "<< endl;
        cout << " ░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███░ "<< endl;
        cout << " ░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██ "<< endl;
        cout << " ░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██ "<< endl;
        cout << " ░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██ "<< endl;
        cout << " ░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██ "<< endl;
        cout << " ██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██ "<< endl;
        cout << " █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██ "<< endl;
        cout << " ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░ "<< endl;
        cout << " ░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░ "<< endl;
        cout << " ░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░░░ "<< endl;
        cout << " ░░████████████░░░█████████████████░░░░░░ "<< endl;
        cout << "-----------------------------------------\n";
        cout << "\n";

    }else{
        cout << "\n";
        cout << "--------------------------------------------------------"<< endl; 
        cout << "Voce ERROU! Deu um bicu pra longe"<< endl;
        cout << "\n";
        cout << "¯\\_( ͡👁️ ͜ʖ ͡👁️)_/¯ "<< endl; 
        cout << "\n";
        bicudas_erradas.push_back(bicu);
     }
    cout << endl;
 }  

vector<string> le_arquivo() {

    ifstream arquivo;
    arquivo.open("palavras_forca.txt");

    if(arquivo.is_open()) {

        int qte_palavras;
        arquivo >> qte_palavras;
        vector<string> palavras_do_arquivo;
        for(int i = 0; i < qte_palavras; i++) {
            string palavra_lida;
            arquivo >> palavra_lida;
            palavras_do_arquivo.push_back(palavra_lida);
         }
        arquivo.close();
        return palavras_do_arquivo;
     }else{
        cout << "Não foi possível trazer o banco de palavras" << endl;
        exit(0);
     }
 }

void sorteia_palavra_secreta() {

    vector<string> palavra_sorteada  = le_arquivo();
    srand(time(NULL));
    int indice_sorteado = rand() % palavra_sorteada.size();
    palavra_secreta = palavra_sorteada[indice_sorteado];
 }

void add_nova_palavra() {
    cout << "Digite a nova palavra usando letras maiusculas" << endl;
    string nova_palavra;
    cin >> nova_palavra;
    vector<string> lista_palavra = le_arquivo();
    lista_palavra.push_back(nova_palavra);
    }
void salva_arquivo( vector<string> lista_palavra) {
    ofstream arquivo;
    arquivo.open("palavras.txt");
    if(arquivo.is_open()) {
        arquivo << lista_palavra.size() << endl;
        for(string palavra : lista_palavra) {
            arquivo << palavra << endl;
         }
        arquivo.close();
     }else{
        cout << "Não foi possível trazer o banco de palavras" << endl;
        exit(0);
     }
 }
 void cabecalhofim(){
     
 printf("\n");
        
        printf("\n\n");
	 	printf("                              \n");
		printf(" ███▀░░░░░░░░░░░░░░░░░▀████   \n");
		printf(" ███│░░░░░░░░░░░░░░░░░░░│███  \n");
		printf(" ██▌│░░░░░░░░░░░░░░░░░░░│▐██  \n");
		printf(" ██░└┐░░░░░░░░░░░░░░░░░┌┘░██  \n");
		printf(" ██░░└┐░░░░░░░░░░░░░░░┌┘░░██  \n");
		printf(" ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██  \n");
		printf(" ██▌░│██████▌░░░▐██☭ ███│ ██\n");
		printf(" ███░│▐███▀▀░░▄░░▀▀███▌│░███  \n");
		printf(" ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██  \n");
		printf(" ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██  \n");
		printf(" ████▄─┘██▌░░░░░░░▐██└─▄████  \n");
		printf(" █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████  \n");
		printf(" ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████  \n");
		printf(" █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████  \n");
		printf(" ███████▄░░░░░░░░░░░▄███████  \n");
		printf("                              \n");
		printf("\n\n");


 }
 void cabecalhoganhou(){

    cout <<  "\n";
    cout << "╔═════════════════════════════════════════════╗" << endl;
    cout << "║ ✅ Parabens! Você acertou a palavra secreta!║ " << endl;
    cout << "╚═════════════════════════════════════════════╝" << endl;
    cout <<  "\n";
    cout <<  " Como premio poderá adicionar uma nova palavra ao jogo" << endl;
    printf("\n");
    printf("       ___________       \n");
    printf("       '._==_==_=_.'     \n");
    printf("       .-\\:      /-.    \n");
    printf("      | (|:.     |) |    \n");
    printf("       '-|:.     |-'     \n");
    printf("         \\::.    /      \n");
    printf("          '::. .'        \n");
    printf("           ) (           \n");
    printf("          _.' '._        \n");
    printf("        '-------'        \n");
    printf("                         \n");
    cout <<  "\n";
    cout << "   ╔══════════════════════════════════╗" << endl;
    cout << "   ║ Quer adicionar uma nova palavra? ║" << endl;
    cout << "   ╚══════════════════════════════════╝" << endl;
    cout << "   ║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
    cout << "   ║▒▒▒▒▒ S ▒▒▒▒▒▒▒▒▒▒▒▒▒ SIM ▒▒▒▒▒▒▒▒║" << endl; 
    cout << "   ║▒▒▒▒▒ N ▒▒▒▒▒▒▒▒▒▒▒▒▒ NAO ▒▒▒▒▒▒▒▒║" << endl;
    cout << "   ║▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒║" << endl;
    cout << "   ╚══════════════════════════════════╝" << endl;
    cout <<  "\n";

    char nova_palavra;
    cin >> nova_palavra;

    if(nova_palavra == 'S' || 's'){
    add_nova_palavra();

     }
 }

int main() {
     
     cabecalho();
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
        cabecalhofim();
     }else{
         cabecalhoganhou();
     }
 }

