#include <iostream>//entrée/sortie
#include <fstream>//fichier

#include <encrypt.h>
#include <decrypt.h>
#include <fichier.h>

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// /*


#include "crypt.h"
#include <iostream>
using namespace std;

int main() {
    string texte = "Bolivie";
    int decalage = 3;
    crypte msgcrypt(texte);
    string texteChiffre = msgcrypt.crypte_Cesar(texte,decalage);
    cout << texteChiffre << endl;


    return 0;

}

*/ //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int action;
int code;
int decal;



int main()
{
    cout << "Que voulez vous faire ? \n 1. encrypter un fichier texte. \n 2. décrypter un fichier texte." << endl;
    cin >> action ;
    if action==1 {
        cout << "Que voulez vous faire ? \n 1. encrypter en code CESAR. 2. encrypter en code XOR. 3. encrypter en code CESAR puis XOR." << endl;
        cin >> code ;
        if code==1 {
            cout << "De combien de caractère voulez vous décaler ? \n" << endl;
            cin >> decal ;
            string texte = lecture();
            crypte msgcrypt(texte);
            string texteChiffre = msgcrypt.crypte_Cesar(texte,decal);
            cout << texteChiffre << endl;
        }
        if code==2{
            //encrypt::code_xor();//appel de la fonction
            cout << "Pas de xor. \n" << endl;
        }
        if code==3{
            cout << "De combien de caractère voulez vous décaler votre CESAR ? \n" << endl;
            cin >> decal ;
            string texte = lecture();
            crypte msgcrypt(texte);
            string texteChiffre = msgcrypt.crypte_Cesar(texte,decal);
            cout << texteChiffre << endl;
            //encrypt::code_xor();//appel de la fonction
            cout << "Pas de xor. \n" << endl;
        }
        else{
            cout << "Entrez un nombre valide pour le choix du mode d'encryption.">>endl;
        }
    }
    if action==2 {
        cout << "Que voulez vous faire ? \n 1. desencrypter en code CESAR. 2. desencrypter en code XOR. 3. desencrypter en code XOR puis CESAR." << endl;
        cin >> code ;
        if code==1 {
            cout << "De combien de caractère est votre décalage ? \n" << endl;
            cin >> decal ;
            string texte = lecture();
            crypte msgcrypt(texte);
            string texteChiffre = msgcrypt.crypte_Cesar(texte,decal);
            cout << texteChiffre << endl;
        }
        if code==2{
            //decrypt::code_xor();//appel de la fonction
        }
        if code==3{
            cout << "De combien de caractère est votre décalage CESAR ? \n" << endl;
            cin >> decal ;
            string texte = lecture();
            crypte msgcrypt(texte);
            string texteChiffre = msgcrypt.crypte_Cesar(texte,decal);
            cout << texteChiffre << endl;
            //decrypt::code_xor();//appel de la fonction
        }
        else{
            cout << "Entrez un nombre valide pour le choix du mode de désencryption.">>endl;
        }
    }
    else{
            cout << "Entrez un nombre valide pour le choix de l'action.">>endl;
    }


}
