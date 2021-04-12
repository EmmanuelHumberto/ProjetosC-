#include "nao_acertou.hpp"

bool forca::nao_acertou (const std::string& palavra_secreta, std::map<char, bool>& bicudou) {

			for (char letra : palavra_secreta) {
				/*se aposição da letra for igual a posição final ele não econtrou a letra.
					Ou se a posição que bicudou na posição dessa letra é igual a false
				 */
				if (bicudou.find(letra) == bicudou.end() || !bicudou.at(letra)){
				return true;}}
				
			return false;
 }  