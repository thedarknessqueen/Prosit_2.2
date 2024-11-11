#include <iostream>//entrée/sortie 
#include <fstream>//fichier

//#include <fichier.h>

Fichhier :: lecture(){
    string const nomFichier("C:/Users/thais/Documents Local/CPI A2/Projet 2/testprosit2.txt"); //entre guillement le chemin du fichier, monFlux est le nom du contenue du fichier
    ofstream monFlux(nomFichier.c_str());
}

Fichier :: ecriture(){
    string const nomFichier("C:/Users/thais/Documents Local/CPI A2/Projet 2/testprosit2.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)    
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << std::endl;
        monFlux << 42.1337 << std::endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << std::endl;
    }
    else
    {
        std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
    }

}
