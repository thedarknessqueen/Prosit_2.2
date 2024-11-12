#include <iostream>//entrée/sortie
#include <fstream>//fichier

//#include <fichier.h>
using namespace std;

Fichier :: lecture(){

        string const nomFichier("C:/Users/thais/Documents Local/CPI A2/Projet 2/testprosit2.txt"); //entre guillement le chemin du fichier, monFlux est le nom du contenue du fichier
        ifstream monFlux(nomFichier.c_str());

        if(monFlux)  // si l'ouverture a fonctionné
        {
                string contenu;  // déclaration d'une chaîne qui contiendra la ligne lue
                getline(monFlux, contenu);  // on met dans "contenu" la ligne
                cout << contenu;  // on affiche la ligne

                monFlux.close();
        }
        else
                cout << "Impossible d'ouvrir le fichier !" << endl;

        return 0;
}

Fichier :: ecriture(){
    string const nomFichier("C:/Users/thais/Documents Local/CPI A2/Projet 2/testprosit2.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)    
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << std::endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << std::endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

}
