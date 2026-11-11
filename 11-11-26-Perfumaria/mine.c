#include <stdio.h>
#include <windows.h>

// Frequências das notas musicais (em Hz)
#define A3  220
#define B3  247
#define C4  262
#define CS4 277
#define D4  294
#define E4  330
#define FS4 370
#define G4  392
#define A4  440
#define B4  494
#define CS5 554
#define D5  587
#define E5  659

int main() {
    printf("Tocando Minecraft - Sweden (C418)...\n");

    // Melodia principal (Primeira parte)
    Beep(FS4, 600);
    Beep(A4, 600);
    Beep(CS5, 600);
    Beep(E5, 800);
    Beep(D5, 400);
    Beep(CS5, 400);
    Beep(A4, 1200);
    Sleep(300);

    // Segunda parte
    Beep(FS4, 600);
    Beep(A4, 600);
    Beep(B4, 600);
    Beep(CS5, 800);
    Beep(B4, 400);
    Beep(A4, 400);
    Beep(FS4, 1200);
    Sleep(300);

    // Terceira parte (Variação)
    Beep(E4, 600);
    Beep(FS4, 600);
    Beep(A4, 600);
    Beep(CS5, 800);
    Beep(B4, 400);
    Beep(A4, 400);
    Beep(E4, 1200);
    Sleep(300);

    // Finalização suave
    Beep(D4, 600);
    Beep(FS4, 600);
    Beep(A4, 600);
    Beep(B4, 1400);

    printf("Musica finalizada!\n");
    return 0;
}

