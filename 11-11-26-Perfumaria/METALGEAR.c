#include <windows.h>

int main() {
    // Introdução clássica
    Beep(659, 125); // Mi
    Beep(659, 125); // Mi
    Sleep(125);
    Beep(659, 125); // Mi
    Sleep(167);
    Beep(523, 125); // Dó
    Beep(659, 125); // Mi
    Sleep(125);
    Beep(784, 125); // Sol
    Sleep(375);
    Beep(392, 125); // Sol (oitava abaixo)
    Sleep(375);

    // Primeira parte da melodia
    Beep(523, 125); // Dó
    Sleep(250);
    Beep(392, 125); // Sol
    Sleep(250);
    Beep(330, 125); // Mi
    Sleep(250);
    Beep(440, 125); // Lá
    Sleep(125);
    Beep(494, 125); // Si
    Sleep(125);
    Beep(466, 125); // Lá# / Sib
    Beep(440, 125); // Lá
    Sleep(125);

    // Subida rápida (tercinas)
    Beep(392, 166); // Sol
    Beep(659, 166); // Mi
    Beep(784, 166); // Sol
    Beep(880, 125); // Lá
    Sleep(125);
    Beep(698, 125); // Fá
    Beep(784, 125); // Sol
    Sleep(125);
    Beep(659, 125); // Mi
    Sleep(125);
    Beep(523, 125); // Dó
    Beep(587, 125); // Ré
    Beep(494, 125); // Si
    Sleep(375);

    return 0;
}

