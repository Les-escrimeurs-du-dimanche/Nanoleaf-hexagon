#include "gestionhexagon.h"

uint32_t getcolor(color* couleur) {
  uint32_t nombre = (couleur->R << 0);
  nombre +=(couleur->G << 8) ;
  nombre += (couleur->B << 16);
  nombre += (couleur->W << 24);
  return nombre;
}

void setcolor(int num, color* couleur, Adafruit_NeoPixel pixels){
    for (int i = 36*(num-1); i < (36*num); i++)
    {
        pixels.setPixelColor(i, getcolor(couleur));
    }
    pixels.show();
}
