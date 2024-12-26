// ChaineCaractère.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>




int main()
{
    char lettre = 'a';

    char mot[10] = { 'v', 'a', 'l', 'e', 'n', 't', 'i', 'n', 'e', '\0' };

    for (int i = 0; i < 9; ++i)
    {
        std::cout << mot[i] << std::endl;
    }

    const char* mots = "Bonjour"; // donne directement la valeur et pas l'adresse 
    std::cout << mots << std::endl;

}

