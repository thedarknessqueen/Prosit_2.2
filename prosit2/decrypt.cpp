#include <iostream>//entrée/sortie

#include <decrypt.h>

using namespace std;

decrypt::code_cesar(Fichier::lecture(), int decal){
    string code_final;
    int code_ascii = (int)contenu;
    code_final_ascii = code_ascii - decal;
    code_final = (string)code_final_ascii;
    Fichier::ecriture(code_final);
    return code_final;
}
decrypt::code_xor(Fichier::lecture(), int decal){//////////////////////// a modifier
    string code_final;
    int code_ascii = (int)contenu;
    code_final_ascii = code_ascii + decal;
    code_final = (string)code_final_ascii;
    Fichier::ecriture(code_final);
    return code_final;
}

