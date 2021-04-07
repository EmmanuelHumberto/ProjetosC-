 #include<iostream>
 #include<string>
 #include<cstdlib>
 #include<ctime>
 using namespace std;

  const string PALAVRA_SECRETA = "MELANCIA";

 bool letra_existe(char bicu){ 
     //for iterado
    for(char letra : PALAVRA_SECRETA){
        if(bicu == letra){
        return true;
         }
     }
     return false;
 }

 int main(){

     cout << PALAVRA_SECRETA << endl; 

    bool nao_acertou = true;
    bool nao_inforcou = true;

     while (nao_acertou && nao_acertou){

         char bicu;
         cin >> bicu;

         if(letra_existe(bicu)){

             cout << "Voce Acertou! Deu um bicu correto"<< endl; 

         }else{

             cout << "Voce ERROU! Deu um bicu pra longe"<< endl; 

         }
     }
 }

