#include <stdio.h>
#include <windows.h>

// Definição das frequências das notas musicais (em Hz)
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_AS3 233 // Bb3
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_DS4 311 // Eb4
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_AS4 466 // Bb4
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_DS5 622 // Eb5
#define NOTE_F5  698
#define NOTE_G5  784

// Andamento (quanto maior, mais lento)
#define TEMPO 480

void tocarNota(int frequencia, int duracao) {
    if (frequencia > 0) {
        Beep(frequencia, duracao);
    } else {
        Sleep(duracao);
    }
    // Pequena pausa para articular as notas como um dedilhado
    Sleep(30);
}

int main() {
    printf("Tocando: Hollow Knight OST - Reflection...\n");
    printf("Descanse um pouco no banco.\n\n");

    // Parte 1: Introdução (Arpejo característico)
    int introNotas[] = {
        NOTE_G4, NOTE_D5, NOTE_AS4, NOTE_F4, NOTE_G4, NOTE_D5, NOTE_AS4, NOTE_F4,
        NOTE_DS4, NOTE_AS4, NOTE_G4, NOTE_D4, NOTE_DS4, NOTE_AS4, NOTE_G4, NOTE_D4
    };
    int introDuracao[] = {
        TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO,
        TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO, TEMPO
    };

    for (int i = 0; i < 16; i++) {
        tocarNota(introNotas[i], introDuracao[i]);
    }

    // Parte 2: Melodia Principal
    int melodiaNotas[] = {
        NOTE_G4, NOTE_A4, NOTE_AS4, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_A4,
        NOTE_G4, NOTE_F4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_D4,
        NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_AS4, NOTE_A4, NOTE_G4, NOTE_F4,
        NOTE_G4, NOTE_D4, NOTE_G4
    };

    int melodiaDuracao[] = {
        TEMPO, TEMPO, TEMPO * 2, TEMPO * 2, TEMPO, TEMPO, TEMPO * 2,
        TEMPO, TEMPO, TEMPO * 2, TEMPO * 2, TEMPO, TEMPO, TEMPO * 2,
        TEMPO, TEMPO, TEMPO * 2, TEMPO * 2, TEMPO, TEMPO, TEMPO * 2,
        TEMPO, TEMPO, TEMPO * 4
    };

    int tamanhoMelodia = sizeof(melodiaNotas) / sizeof(melodiaNotas[0]);

    for (int i = 0; i < tamanhoMelodia; i++) {
        tocarNota(melodiaNotas[i], melodiaDuracao[i]);
    }

    printf("Concluido!\n");
    return 0;
}
