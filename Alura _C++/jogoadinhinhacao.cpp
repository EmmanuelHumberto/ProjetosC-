 //Biblioteca de entrada e saida de fluxo de dados; semelhante a stdio.h em C.   
 #include<iostream>
 using namespace std;


  int main() {

    /*função cout, entrada e saida [std::] bilioteca padrão in/out.
     * função endl, para quebra de linha, pode ser usando também [\n] do C
     */
     std::cout << "*********************************************"<<std::endl;
	 std::cout << "*  Bem vindo! Ao nosso jogo da Adivinhacao! *"<<std::endl;
     std::cout << "*********************************************\n";


    /*
     * Outra forma de se escrever a função std::cout é declarando [using namespace std]
        assim o [std::] antes da função não precisa ser escrtito 
     */
     cout << "*********************************************"<<endl;
	 cout << "*  Bem vindo! Ao nosso jogo da Adivinhacao! *"<<endl;
     cout << "*********************************************\n";
   	
   	
  }