#include <stdio.h>

// Fonction récursive pour calculer la somme des termes d'une suite arithmétique
int sommeSuiteArithmetique(int a, int d, int n) {

    if (n == 1) {
        return a;
    } else {

        return a + sommeSuiteArithmetique(a + d, d, n - 1);
    }
}

int main() {
    int premierTerme = 2;
    int difference = 3;
    int nombreDeTermes = 5;

    int somme = sommeSuiteArithmetique(premierTerme, difference, nombreDeTermes);

    printf("La somme des %d termes de la suite arithmétique est : %d\n", nombreDeTermes, somme);

    return 0;
}
