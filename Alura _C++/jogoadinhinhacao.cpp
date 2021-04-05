 //Biblioteca de entrada e saida de fluxo de dados; semelhante a stdio.h em C.   
 #include<iostream>
 using namespace std;

   
     int main() {

    const int NUMERO_SECRETO = 666;

    /*função cout, entrada e saida [std::] bilioteca padrão in/out.
     * função endl, para quebra de linha, pode ser usando também [\n] do C
     */
     std::cout << "*********************************************"<<std::endl;
	 std::cout << "*  Bem vindo! Ao nosso jogo da Adivinhacao! *"<<std::endl;
     std::cout << "*********************************************\n";


     int bicudo;
     cout << " Qual o seu bicudo?";
     cin >> bicudo;
     cout << "O bicudo dados foi" << bicudo << endl;

     bool acertou = bicudo == NUMERO_SECRETO;
     bool maior = bicudo > NUMERO_SECRETO;

     if(acertou){

         cout << "Parabens você deu um bicudo certeiro" << endl;

     }
     else if(maior){

         cout << "Seu bicudo foi MAIOR que o numero Secreto" << endl;

     }
     else{

          cout << "Seu bicudo foi MENOR que o numero Secreto" << endl;

     }
   	

    }