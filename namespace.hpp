#include<map>
#include<vector>
#include<string>

namespace forca{

void add_nova_palavra();
void bicos_errados(const std::vector<char>&bicudas_erradas);
void bicuda(std::map<char, bool>& bicudou, std::vector<char>& bicudas_erradas, std::string& palavra_secreta);
inline void cabecalho_add_palavra();
inline void cabecalho_bico_certo();
inline void cabecalho_bico_errado();
inline void cabecalho_bicuda();
inline void cabecalho_fim();
inline void cabecalho_ganhou();
inline void cabecalho_inicio();
void desenha_palavra(const std::string& palavra_secreta, std::map<char, bool>& bicudou);
std::vector<std::string> le_arquivo();
bool letra_existe (char bicu, const std::string& palavra_secreta);
bool nao_acertou (const std::string& palavra_secreta, std::map<char, bool>& bicudou);
void salva_arquivo (const std::vector< std::string>& lista_palavra);
std::string sorteia_palavra_secreta();


}