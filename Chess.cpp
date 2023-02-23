#include <stdio.h>
#include <stdlib.h>

// Definiraj velièinu šahovske ploèe
#define BOARD_SIZE 8

int main() {
    // Deklariraj 2D polje za prikazivanje šahovske ploèe
    int board[BOARD_SIZE][BOARD_SIZE];
    // Deklariraj varijable za spremanje reda i stupca poèetne pozicije konja
    int row, col;
    // Deklariraj brojaèe petlji
    int i, j;
    
    // Inicijaliziraj polje na sve 0
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = 0;
        }
    }

    // Pitaj korisnika da unese poèetnu poziciju konja
    printf("Unesite red i stupac konja: ");
    scanf("%d %d", &row, &col);

    // Izraèunaj sve moguæe poteze konja
    int moves[8][2] = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};
    // Deklariraj varijable za sljedeæu poziciju retka i stupca za svaki moguæi potez
    int next_row, next_col;
    for (i = 0; i < 8; i++) {
        // Izraèunaj sljedeæu poziciju retka i stupca za trenutni potez
        next_row = row + moves[i][0];
        next_col = col + moves[i][1];
        // Provjeri je li sljedeæi potez unutar granica ploèe
        if (next_row >= 0 && next_row < BOARD_SIZE && next_col >= 0 && next_col < BOARD_SIZE) {
            // Ako je, oznaèi odgovarajuæu æeliju u polju board s 1
            board[next_row][next_col] = 1;
        }
    }

    // Ispiši ploèu s oznaèenim moguæim potezima konja
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (i == row && j == col) {
                // Ako je trenutna æelija poèetna pozicija konja, ispiši "K"
                printf("K ");
            } else if (board[i][j] == 1) {
                // Ako je trenutna æelija moguæi potez konja, ispiši "*"
                printf("* ");
            } else {
                // Inaèe, ispiši "."
                printf(". ");
            }
        }
        // Ispiši novi redak kako bi zapoèeo novi redak u ploèi
        printf("\n");
}
return 0;
//Vraæa poèetnu vrijednost jednadžbe
}
