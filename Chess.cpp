#include <stdio.h>
#include <stdlib.h>

// Definiraj veli�inu �ahovske plo�e
#define BOARD_SIZE 8

int main() {
    // Deklariraj 2D polje za prikazivanje �ahovske plo�e
    int board[BOARD_SIZE][BOARD_SIZE];
    // Deklariraj varijable za spremanje reda i stupca po�etne pozicije konja
    int row, col;
    // Deklariraj broja�e petlji
    int i, j;
    
    // Inicijaliziraj polje na sve 0
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 0;
        }
    }

    // Pitaj korisnika da unese po�etnu poziciju konja
    printf("Unesite red i stupac konja: ");
    scanf("%d %d", &row, &col);

    // Izra�unaj sve mogu�e poteze konja
    int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
    // Deklariraj varijable za sljede�u poziciju retka i stupca za svaki mogu�i potez
    int next_row, next_col;
    for (i = 0; i < 8; i++) {
        // Izra�unaj sljede�u poziciju retka i stupca za trenutni potez
        next_row = row + moves[i][0];
        next_col = col + moves[i][1];
        // Provjeri je li sljede�i potez unutar granica plo�e
        if (next_row >= 0 && next_row < BOARD_SIZE && next_col >= 0 && next_col < BOARD_SIZE) {
            // Ako je, ozna�i odgovaraju�u �eliju u polju board s 1
            board[next_row][next_col] = 1;
        }
    }

    // Ispi�i plo�u s ozna�enim mogu�im potezima konja
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (i == row && j == col) {
                // Ako je trenutna �elija po�etna pozicija konja, ispi�i "K"
                printf("K ");
            } else if (board[i][j] == 1) {
                // Ako je trenutna �elija mogu�i potez konja, ispi�i "*"
                printf("* ");
            } else {
                // Ina�e, ispi�i "."
                printf(". ");
            }
        }
        // Ispi�i novi redak kako bi zapo�eo novi redak u plo�i
        printf("\n");
}
return 0;
//Vra�a po�etnu vrijednost jednad�be
}
