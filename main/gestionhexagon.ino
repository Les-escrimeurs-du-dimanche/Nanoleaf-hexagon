#include "gestionhexagon.h"

uint32_t getcolor(color* couleur) {
    return ((uint32_t)couleur->W << 24) | ((uint32_t)couleur->R << 16) | ((uint32_t)couleur->G <<  8) | couleur->B;
}

void setcolor(int num, color* couleur, Adafruit_NeoPixel pixels){
    for (int i = 36*(num-1); i < (36*num); i++)
    {
        pixels.setPixelColor(i, getcolor(couleur));
    }
    pixels.show();
}
