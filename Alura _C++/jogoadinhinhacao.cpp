 //Biblioteca de entrada e saida de fluxo de dados; semelhante a stdio.h em C.   
 #include<iostream>
 #include<cstdlib>
 #include<ctime>
    
 using namespace std;

void banerbv(){

     cout << "\n";
     std::cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<std::endl;
	 std::cout << "▒▒ Bem vindo ao jogo da Adivinhacao!▒▒"<<std::endl;
     std::cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
     cout << "\n";

 }

void banererrou(){

     cout << "╔════════════════════════════════════════╗" << endl;
     cout << "║ ❌ Errou!! Você deu um bicudo cegueiro!║" << endl;
     cout << "╚════════════════════════════════════════╝" << endl;
     cout << "\n";
 }

void baneracertou(){

     cout << "\n";
     cout << "╔════════════════════════════════════════════╗" << endl;
     cout << "║ ✅  Parabens!! Você deu um bicudo certeiro!║ " << endl;
     cout << "╚════════════════════════════════════════════╝" << endl;

 }

   
int main() {


    srand(time(NULL));
     const int NUMERO_SECRETO = rand() % 100;

     bool errou = true;

     int tentativas = 0;

     double pontos = 1000.0;

     banerbv();

     cout << "Escolha um nível de dificuldade: " << endl << endl;
     cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
     cout << "▒ Fácil   ▒ (F) ▒\n";
     cout << "▒ Médio   ▒ (M) ▒\n";
     cout << "▒ Difícil ▒ (D) ▒\n";
     cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;

     char dificuldade;
     cin >> dificuldade;

     int numero_de_tentativas;

     if (dificuldade == 'F'){
        numero_de_tentativas = 8;
     }
    else if (dificuldade == 'M'){
        numero_de_tentativas = 6;
     }
    else {
        numero_de_tentativas = 4;
     }
     

  for(tentativas = 1;tentativas <= numero_de_tentativas;tentativas++){

    /*função cout, entrada e saida [std::] bilioteca padrão in/out.
     * função endl, para quebra de linha, pode ser usando também [\n] do C
     */
        
         cout << "⌚ Tentativa "<<tentativas << endl;
         cout << "\n";
       

     int bicudo;
     cout << "Qual é o seu bicudo?"<< endl;
     cin >> bicudo;
     cout << "O bicudo dado foi " << bicudo << endl;

     double pontos_perdidos = abs(bicudo - NUMERO_SECRETO)/2.0;
     pontos -= pontos_perdidos;


     bool acertou = bicudo == NUMERO_SECRETO;
     bool maior = bicudo > NUMERO_SECRETO;

     if(acertou){

         baneracertou();
         errou = false;
         break;

     }
     else if(maior){

         banererrou();
         cout << "Bicudo foi MAIOR que o Numero Secreto ✍"<< endl;
         cout << "-----------------------------------------" << endl;
         cout << "\n";
     }
     else{

       
         banererrou();
         cout << "Bicudo foi MENOR que o Numero Secreto ✍" << endl;
         cout << "----------------------------------------" << endl;
         cout << "\n";

     }
   	
     }
    
     cout << "\n";
     cout << "✞ Fim do jogo!" << endl;  
     cout << "\n";

    if(errou){

       banererrou();

       cout << "Você perdeu o jogo " << endl;  

    }else{

     cout << "✌  Você acertou o numero sercreto em " << tentativas << " tentativas" << endl;
     cout << "\n";
     cout.precision(2);
     cout << fixed;
     cout << "╔══════════════════════════════════════════════╗" << endl;
     cout << " ☛  Sua pontuação foi de "<< pontos <<" pontos. \n";
     cout << "╚══════════════════════════════════════════════╝" << endl; 
     } 
 }