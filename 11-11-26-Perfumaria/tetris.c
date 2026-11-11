#include <stdio.h>
#include <windows.h>

// Frequências das notas musicais (em Hz)
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define PAUSE    0

// Duração base (ajuste este valor para mudar a velocidade)
#define TEMPO 400

int main() {
    // Array bidimensional: {Frequência, Divisor de tempo}
    // Ex: 1 = semínima (1 tempo), 2 = colcheia (meio tempo)
    int melodia[][2] = {
        // Parte A
        {NOTE_E5, 1}, {NOTE_B4, 2}, {NOTE_C5, 2}, {NOTE_D5, 1}, {NOTE_C5, 2}, {NOTE_B4, 2},
        {NOTE_A4, 1}, {NOTE_A4, 2}, {NOTE_C5, 2}, {NOTE_E5, 1}, {NOTE_D5, 2}, {NOTE_C5, 2},
        {NOTE_B4, 1}, {NOTE_B4, 2}, {NOTE_C5, 2}, {NOTE_D5, 1}, {NOTE_E5, 1},
        {NOTE_C5, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {PAUSE, 1},

        // Parte B
        {NOTE_D5, 1}, {NOTE_F5, 2}, {NOTE_A5, 1}, {NOTE_G5, 2}, {NOTE_F5, 2},
        {NOTE_E5, 1}, {NOTE_C5, 2}, {NOTE_E5, 1}, {NOTE_D5, 2}, {NOTE_C5, 2},
        {NOTE_B4, 1}, {NOTE_B4, 2}, {NOTE_C5, 2}, {NOTE_D5, 1}, {NOTE_E5, 1},
        {NOTE_C5, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {PAUSE, 1}
    };

    int total_notas = sizeof(melodia) / sizeof(melodia[0]);

    printf("Tocando tema do Tetris...\n");

    for (int i = 0; i < total_notas; i++) {
        int frequencia = melodia[i][0];
        int duracao = TEMPO / melodia[i][1];

        if (frequencia == PAUSE) {
            Sleep(duracao);
        } else {
            Beep(frequencia, duracao);
        }

        // Pequena pausa entre notas para dar clareza ao som
        Sleep(20);
    }

    return 0;
}

