// fonction d'encryption
#include "crypt.h"
#include <iostream>
using namespace std;

crypte::crypte(string s){
    message = s;

}

string crypte::crypte_Cesar(string texte,int decalage){
    string resultat = "";

    for(char c : texte){

      if (isupper(c)){
          texteChiffre += char(int(c + decalage - 65) % 26 + 65);
      }
      else if (islower(c)) {
          texteChiffre += char(int(c + decalage - 97) % 26 + 97);
    }
      else {
          texteChiffre += c;  // Conserver les autres caractères tels quels
      }


       }
     return texteChiffre;
}
