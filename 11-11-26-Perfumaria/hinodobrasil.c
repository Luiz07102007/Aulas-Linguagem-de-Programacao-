#include <stdio.h>
#include <windows.h>

// Frequências das notas musicais (em Hz)
#define C4  261
#define CS4 277
#define D4  293
#define DS4 311
#define E4  329
#define F4  349
#define FS4 370
#define G4  392
#define GS4 415
#define A4  440
#define AS4 466
#define B4  493

#define C5  523
#define CS5 554
#define D5  587
#define DS5 622
#define E5  659
#define F5  698
#define FS5 740
#define G5  784
#define GS5 830
#define A5  880

// Duração base das notas (em milissegundos)
#define SEMICOLCHEIA 150
#define COLCHEIA     300
#define SEMINIMA     600
#define MINIMA       1200

// Função auxiliar para tocar a nota e dar uma leve pausa entre elas
void tocar(int nota, int duracao) {
    if (nota > 0) {
        Beep(nota, duracao);
    } else {
        Sleep(duracao);
    }
    Sleep(30); // Pequena articulação entre notas
}

int main() {
    printf("Tocando o Hino Nacional Brasileiro...\n");

    // --- INTRODUÇÃO (Estrofe inicial) ---
    // "Ouviram do Ipiranga as margens plácidas..."
    tocar(C4, COLCHEIA);
    tocar(F4, SEMINIMA);
    tocar(E4, COLCHEIA);
    tocar(F4, COLCHEIA);
    tocar(G4, SEMINIMA);
    tocar(A4, COLCHEIA);
    tocar(G4, COLCHEIA);
    tocar(A4, SEMINIMA);
    tocar(AS4, COLCHEIA);
    tocar(B4, COLCHEIA);
    tocar(C5, MINIMA);
    tocar(F4, SEMINIMA);

    // "...De um povo heroico o brado retumbante,"
    tocar(C4, COLCHEIA);
    tocar(F4, SEMINIMA);
    tocar(E4, COLCHEIA);
    tocar(G4, COLCHEIA);
    tocar(F4, SEMINIMA);
    tocar(A4, COLCHEIA);
    tocar(G4, COLCHEIA);
    tocar(AS4, SEMINIMA);
    tocar(A4, COLCHEIA);
    tocar(FS4, COLCHEIA);
    tocar(G4, MINIMA);
    tocar(0, COLCHEIA); // Pausa

    // "E o sol da Liberdade, em raios fúlgidos,"
    tocar(C4, COLCHEIA);
    tocar(G4, SEMINIMA);
    tocar(FS4, COLCHEIA);
    tocar(G4, COLCHEIA);
    tocar(A4, SEMINIMA);
    tocar(AS4, COLCHEIA);
    tocar(A4, COLCHEIA);
    tocar(AS4, SEMINIMA);
    tocar(B4, COLCHEIA);
    tocar(C5, COLCHEIA);
    tocar(D5, MINIMA);
    tocar(G4, SEMINIMA);

    // "Brilhou no céu da Pátria nesse instante."
    tocar(C4, COLCHEIA);
    tocar(G4, SEMINIMA);
    tocar(FS4, COLCHEIA);
    tocar(A4, COLCHEIA);
    tocar(G4, SEMINIMA);
    tocar(AS4, COLCHEIA);
    tocar(A4, COLCHEIA);
    tocar(C5, SEMINIMA);
    tocar(AS4, COLCHEIA);
    tocar(G4, COLCHEIA);
    tocar(A4, MINIMA);
    tocar(0, SEMINIMA);

    printf("Fim da execucao.\n");
    return 0;
}

