/*#include <cassert>
#include <iostream>//entrée/sortie
#include <fstream>//fichier
#include <math.h>

#include <encrypt.h>
#include <decrypt.h>
#include <fichier.h>
int action;
int code;

int main()
{
    std::cout << "Que voulez vous faire ? \n 1. encrypter un fichier texte. \n 2. décrypter un fichier texte." << std::endl;
    std::cin >> action ;
    if action==1 {
        std::cout << "Que voulez vous faire ? \n 1. encrypter en code CESAR. 2. encrypter en code XOR. 3. encrypter en code CESAR puis XOR." << std::endl;
        std::cin >> code ;
        if code==1 {
            encrypt::code_cesar();// appel de la fonction
        }
        if code==2{
            encrypt::code_xor();//appel de la fonction
        }
        if code==3{
            encrypt::code_cesar();//appel de la fonction
            encrypt::code_xor();//appel de la fonction
        }
        else{
            std::cout << "Entrez un nombre valide pour le choix du mode d'encryption.">>std::endl;
        }
    }
    if action==2 {
        std::cout << "Que voulez vous faire ? \n 1. desencrypter en code CESAR. 2. desencrypter en code XOR. 3. desencrypter en code XOR puis CESAR." << std::endl;
        std::cin >> code ;
        if code==1 {
            decrypt::code_cesar();// appel de la fonction
        }
        if code==2{
            decrypt::code_xor();//appel de la fonction
        }
        if code==3{
            decrypt::code_cesar();//appel de la fonction
            decrypt::code_xor();//appel de la fonction
        }
        else{
            std::cout << "Entrez un nombre valide pour le choix du mode de désencryption.">>std::endl;
        }
    }
    else{
            std::cout << "Entrez un nombre valide pour le choix de l'action.">>std::endl;
    }


}*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


using namespace std;
/*
int main()
{
        ifstream fichier("tstcpp.txt", ios::in);  // on ouvre en lecture

        if(fichier)  // si l'ouverture a fonctionné
        {
                string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
                getline(fichier, contenu);  // on met dans "contenu" la ligne
                cout << contenu;  // on affiche la ligne

                fichier.close();
        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;

        return 0;
}
*/
#include "crypt.h"


int main() {
    string texte = "Bolivie";
    int decalage = 3;
    ctype msgcrypt(texte);
    string texteChiffre = msgcrypt.crypte_Cesar(texte,decalage);
    cout << texteChiffre << endl;

}
