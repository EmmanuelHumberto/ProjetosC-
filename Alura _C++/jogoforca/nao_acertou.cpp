#include<string>
#include<map>

extern std::string palavra_secreta;
extern std::map<char, bool> bicudou;

bool nao_acertou() {

    for(char letra : palavra_secreta) {
        if(!bicudou[letra]) {
        return true;
         }
     }
     return false;
 }  