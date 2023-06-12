#include <stdio.h>

const int MAX_REIHEN 5;
const int MAX_SPALTEN 6;

void arrayFuellen(int reihen, int spalten, int array[][spalten]) {
    int wert = 0;
    int minReihe = 0, maxReihe = reihen - 1;
    int minSpalte = 0, maxSpalte = spalten - 1;

    while (wert < reihen * spalten) {

        for (int spalte = minSpalte; spalte <= maxSpalte; spalte++) {
            array[minReihe][spalte] = wert++;
        }

       
        for (int reihe = minReihe + 1; reihe <= maxReihe; reihe++) {
            array[reihe][maxSpalte] = wert++;
        }


        for (int spalte = maxSpalte - 1; spalte >= minSpalte && minReihe != maxReihe; spalte--) {
            array[maxReihe][spalte] = wert++;
        }


        for (int reihe = maxReihe - 1; reihe > minReihe && minSpalte != maxSpalte; reihe--) {
            array[reihe][minSpalte] = wert++;
        }

        minReihe++;
        maxReihe--;
        minSpalte++;
        maxSpalte--;
    }
}

void arrayAusgeben(int reihen, int spalten, int array[][spalten]) {
    for (int i = 0; i < reihen; i++) {
        for (int j = 0; j < spalten; j++) {
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int array[MAX_REIHEN][MAX_SPALTEN];

    arrayFuellen(MAX_REIHEN, MAX_SPALTEN, array);
    arrayAusgeben(MAX_REIHEN, MAX_SPALTEN, array);

    return 0;
}