#ifndef _colortheorie_h_
#define _colortheorie_h_

#include <math.h>

typedef struct color {
  uint8_t R;
  uint8_t  G;
  uint8_t B;
  uint8_t W;
} color;

typedef struct colorhsl {
  uint8_t H;
  uint8_t S;
  uint8_t L;
} colorhsl;

void HSLtoRGB(colorhsl* couleur1, color* couleurtransformer);
colorhsl* RGBtoHSL(color* couleur1);


color Rouge = {255, 0, 0, 0};
color Vert = {0, 255, 0, 0};
color Bleu = {0, 0, 255, 0};
color Blanc = {0, 0, 0, 255};


#endif // _colortheorie_h_