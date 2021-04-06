 //Biblioteca de entrada e saida de fluxo de dados; semelhante a stdio.h em C.   
 #include<iostream>
 using namespace std;

   
     int main() {

     const int NUMERO_SECRETO = 666;

     bool errou = true;

     int tentativas = 0;

     double pontos = 1000.0;


     cout << "\n";
     std::cout << "*********************************************"<<std::endl;
	 std::cout << "*  Bem vindo! Ao nosso jogo da Adivinhacao! *"<<std::endl;
     std::cout << "*********************************************\n";
     cout << "\n";

     while (errou){

         
    /*função cout, entrada e saida [std::] bilioteca padrão in/out.
     * função endl, para quebra de linha, pode ser usando também [\n] do C
     */

     

     tentativas++;
     cout << "=======================================" << endl;
     cout << "Tentativa " << tentativas << endl;
     cout << "=======================================" << endl;



     int bicudo;
     cout << "Qual é o seu bicudo?"<< endl;
     cin >> bicudo;
     cout << "O bicudo dado foi " << bicudo << endl;

     double pontos_perdidos = abs(bicudo - NUMERO_SECRETO)/2.0;
     pontos -= pontos_perdidos;


     bool acertou = bicudo == NUMERO_SECRETO;
     bool maior = bicudo > NUMERO_SECRETO;

     if(acertou){

         cout << "\n";
         cout << "===========================================" << endl;
         cout << " ✅  Parabens!! Você deu um bicudo certeiro" << endl;
         cout << "===========================================" << endl;
         errou = false;

     }
     else if(maior){


         cout << "======================================" << endl;
         cout << "❌ Errou!! Você deu um bicudo cegueiro" << endl;
         cout << "======================================" << endl;
         cout << "\n";
         cout << "Bicudo foi MAIOR que o Numero Secreto" << endl;
         cout << "\n";
     }
     else{

       
         cout << "=======================================" << endl;
         cout << "❌ Errou!! Você deu um bicudo cegueiro"  << endl;
         cout << "=======================================" << endl;
         cout << "\n";

         cout << "Bicudo foi MENOR que o Numero Secreto" << endl;
         cout << "\n";

     }
   	
     }

     cout << "Fim do jogo!" << endl;  

     cout << "_________________________________________________" << endl;  
     cout << "Você acertou o numero sercreto em " << tentativas << " tentativas" << endl;
     cout.precision(2);
     cout << fixed;
     cout << "_________________________________________________" << endl;
     cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
     cout << "-------------------------------------------------" << endl;  
     }