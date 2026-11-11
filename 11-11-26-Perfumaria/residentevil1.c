#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Frequências das notas musicais (Hz)
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247

#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494

#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880

// ==========================================
// 1. RESIDENT EVIL 1 - Safe Haven
// ==========================================
void tocarRE1() {
    printf("\n[Tocando] Resident Evil 1 - Safe Haven...\n");
    int t = 260;
    int i;
    for (i = 0; i < 2; i++) {
        Beep(NOTE_C3, t); Beep(NOTE_G3, t); Beep(NOTE_D4, t);
        Beep(NOTE_DS4, t); Beep(NOTE_AS4, t); Beep(NOTE_C4, t);
    }
    Beep(NOTE_G4, t*2); Beep(NOTE_GS4, t); Beep(NOTE_G4, t);
    Beep(NOTE_F4, t); Beep(NOTE_DS4, t); Beep(NOTE_D4, t*4);

    Beep(NOTE_AS4, t*2); Beep(NOTE_C5, t); Beep(NOTE_AS4, t);
    Beep(NOTE_GS4, t); Beep(NOTE_G4, t); Beep(NOTE_F4, t*4);

    Beep(NOTE_DS4, t*2); Beep(NOTE_D4, t*2); Beep(NOTE_C4, t*4);
}

// ==========================================
// 2. RESIDENT EVIL 2 - Secure Place
// ==========================================
void tocarRE2() {
    printf("\n[Tocando] Resident Evil 2 - Secure Place...\n");
    int t = 280;
    // Arpejo característico em Ré menor
    int i;
    for (i = 0; i < 2; i++) {
        Beep(NOTE_D3, t); Beep(NOTE_A3, t); Beep(NOTE_E4, t); Beep(NOTE_F4, t);
        Beep(NOTE_A4, t); Beep(NOTE_F4, t); Beep(NOTE_E4, t); Beep(NOTE_A3, t);
    }
    // Melodia de piano
    Beep(NOTE_A4, t*2); Beep(NOTE_AS4, t); Beep(NOTE_A4, t);
    Beep(NOTE_G4, t*2); Beep(NOTE_F4, t*2);
    Beep(NOTE_E4, t*2); Beep(NOTE_F4, t); Beep(NOTE_E4, t);
    Beep(NOTE_D4, t*4);
}

// ==========================================
// 3. RESIDENT EVIL 3 - Free From Fear
// ==========================================
void tocarRE3() {
    printf("\n[Tocando] Resident Evil 3 - Free From Fear...\n");
    int t = 250;
    // Arpejo tenso e melancólico
     int i;
    for (i = 0; i < 2; i++) {
        Beep(NOTE_C3, t); Beep(NOTE_G3, t); Beep(NOTE_DS4, t); Beep(NOTE_D4, t);
        Beep(NOTE_G4, t); Beep(NOTE_DS4, t); Beep(NOTE_D4, t); Beep(NOTE_G3, t);
    }
    Beep(NOTE_G4, t*2); Beep(NOTE_GS4, t*2); Beep(NOTE_G4, t*2); Beep(NOTE_F4, t*2);
    Beep(NOTE_DS4, t*2); Beep(NOTE_D4, t*2); Beep(NOTE_C4, t*4);
}

// ==========================================
// 4. RESIDENT EVIL CODE: VERONICA - A Moment of Relief
// ==========================================
void tocarRECV() {
    printf("\n[Tocando] RE Code: Veronica - A Moment of Relief...\n");
    int t = 290;
    // Melodia lírica e clássica
    Beep(NOTE_E4, t*2); Beep(NOTE_B4, t*2); Beep(NOTE_C5, t); Beep(NOTE_B4, t);
    Beep(NOTE_A4, t*2); Beep(NOTE_G4, t*2); Beep(NOTE_FS4, t*2);
    Beep(NOTE_G4, t*2); Beep(NOTE_A4, t*2); Beep(NOTE_B4, t*4);
    Sleep(150);
    Beep(NOTE_E4, t*2); Beep(NOTE_C5, t*2); Beep(NOTE_D5, t); Beep(NOTE_C5, t);
    Beep(NOTE_B4, t*2); Beep(NOTE_A4, t*2); Beep(NOTE_G4, t*2);
    Beep(NOTE_FS4, t*2); Beep(NOTE_E4, t*4);
}

// ==========================================
// 5. RESIDENT EVIL 0 - Save Room
// ==========================================
void tocarRE0() {
    printf("\n[Tocando] Resident Evil 0 - Save Room...\n");
    int t = 270;
    // Dedilhado suave e misterioso
    int i;
    for (i = 0; i < 2; i++) {
        Beep(NOTE_A3, t); Beep(NOTE_E4, t); Beep(NOTE_B4, t); Beep(NOTE_C5, t);
        Beep(NOTE_E5, t); Beep(NOTE_C5, t); Beep(NOTE_B4, t); Beep(NOTE_E4, t);
    }
    Beep(NOTE_C5, t*2); Beep(NOTE_B4, t); Beep(NOTE_A4, t);
    Beep(NOTE_GS4, t*2); Beep(NOTE_A4, t*4);
}

// ==========================================
// 6. RESIDENT EVIL 4 - Serenity
// ==========================================
void tocarRE4() {
    printf("\n[Tocando] Resident Evil 4 - Serenity...\n");
    int t = 300;
    // Arpejo etéreo em Lá menor
    Beep(NOTE_A3, t); Beep(NOTE_E4, t); Beep(NOTE_A4, t); Beep(NOTE_B4, t);
    Beep(NOTE_C5, t*2); Beep(NOTE_B4, t); Beep(NOTE_A4, t);
    Beep(NOTE_G4, t*2); Beep(NOTE_E4, t*2);
    Sleep(150);
    Beep(NOTE_F3, t); Beep(NOTE_C4, t); Beep(NOTE_F4, t); Beep(NOTE_G4, t);
    Beep(NOTE_A4, t*2); Beep(NOTE_G4, t); Beep(NOTE_F4, t);
    Beep(NOTE_E4, t*4);
}

// ==========================================
// 7. RESIDENT EVIL 5 & 6 - Results / Safe Themes
// ==========================================
void tocarRE5e6() {
    printf("\n[Tocando] RE 5 & 6 - Tema de Organizacao / Safe...\n");
    int t = 240;
    // RE5 e RE6 não têm save rooms tradicionais, mas possuem o tema clássico de inventário/resultados
    Beep(NOTE_D4, t); Beep(NOTE_F4, t); Beep(NOTE_A4, t); Beep(NOTE_D5, t*2);
    Beep(NOTE_CS5, t); Beep(NOTE_A4, t); Beep(NOTE_F4, t*2);
    Beep(NOTE_G4, t); Beep(NOTE_AS4, t); Beep(NOTE_D5, t); Beep(NOTE_F5, t*2);
    Beep(NOTE_E5, t); Beep(NOTE_CS5, t); Beep(NOTE_A4, t*3);
}

// ==========================================
// 8. RESIDENT EVIL 7 - Saferoom
// ==========================================
void tocarRE7() {
    printf("\n[Tocando] Resident Evil 7 - Saferoom...\n");
    int t = 320;
    // Notas graves, lentas e sombrias
     int i;
    for (i = 0; i < 2; i++) {
        Beep(NOTE_E3, t*2); Beep(NOTE_B3, t); Beep(NOTE_G4, t);
        Beep(NOTE_FS4, t*2); Beep(NOTE_E4, t*2);
    }
    Beep(NOTE_C4, t*2); Beep(NOTE_G4, t*2); Beep(NOTE_FS4, t*2);
    Beep(NOTE_D4, t*2); Beep(NOTE_B3, t*4);
}

int main() {
    int opcao = -1;

    while (opcao != 0) {
        system("cls"); // Limpa a tela no Windows
        printf("==================================================\n");
        printf("      JUKEBOX - SAVE ROOMS DE RESIDENT EVIL       \n");
        printf("==================================================\n");
        printf("  1. Resident Evil 1 (Safe Haven)\n");
        printf("  2. Resident Evil 2 (Secure Place)\n");
        printf("  3. Resident Evil 3 (Free From Fear)\n");
        printf("  4. Resident Evil Code: Veronica (Moment of Relief)\n");
        printf("  5. Resident Evil 0 (Save Room)\n");
        printf("  6. Resident Evil 4 (Serenity)\n");
        printf("  7. Resident Evil 5 & 6 (Inventory / Results Theme)\n");
        printf("  8. Resident Evil 7 (Saferoom)\n");
        printf("  9. Tocar TODOS em sequencia\n");
        printf("  0. Sair\n");
        printf("==================================================\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            // Limpa o buffer caso o usuário digite uma letra
            while (getchar() != '\n');
            opcao = -1;
        }

        switch (opcao) {
            case 1: tocarRE1(); break;
            case 2: tocarRE2(); break;
            case 3: tocarRE3(); break;
            case 4: tocarRECV(); break;
            case 5: tocarRE0(); break;
            case 6: tocarRE4(); break;
            case 7: tocarRE5e6(); break;
            case 8: tocarRE7(); break;
            case 9:
                tocarRE1(); Sleep(600);
                tocarRE2(); Sleep(600);
                tocarRE3(); Sleep(600);
                tocarRECV(); Sleep(600);
                tocarRE0(); Sleep(600);
                tocarRE4(); Sleep(600);
                tocarRE5e6(); Sleep(600);
                tocarRE7();
                break;
            case 0:
                printf("\nSaindo... Boa sorte sobrevivendo!\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                Sleep(1000);
                break;
        }

        if (opcao >= 1 && opcao <= 9) {
            printf("\nConcluido! Pressione ENTER para voltar ao menu...");
            while (getchar() != '\n'); // Limpa enter anterior
            getchar(); // Aguarda o enter do usuário
        }
    }

    return 0;
}

