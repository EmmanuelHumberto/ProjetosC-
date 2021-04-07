 #include<iostream>
 #include<string>
 #include<cstdlib>
 #include<ctime>
#include<map>
#include<vector>


 using namespace std;

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

 int main(){

    bool acertou = false;
    bool inforcou = false;

     while (!acertou && !inforcou){

        cout << "bicudos errados: "; 
        for(char letra : bicudas_erradas){
             cout << letra << " "; 
         }

        cout << "\n";

        for(char letra : PALAVRA_SECRETA){
            if (bicudou [letra]){
                cout << letra << " ";
             }
             else{
                cout << "_ ";
             }

         }

         cout << "\n";
         cout << "\nBicuda Aí!  ";
         char bicu;
         cin >> bicu;

         bicudou[bicu] = true;

         if(letra_existe(bicu)){

             cout << "Voce Acertou! Deu um bicu correto"<< endl; 

         }else{

             cout << "Voce ERROU! Deu um bicu pra longe"<< endl; 
             bicudas_erradas.push_back(bicu);

         }
         cout << endl;
     }
      
 }

