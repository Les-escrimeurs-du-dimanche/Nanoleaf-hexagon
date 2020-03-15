#include <Adafruit_NeoPixel.h>
#include "colortheorie.h"
#include "gestionhexagon.h"
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN         6
#define NUMPIXELS 30

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRBW + NEO_KHZ800);
#define DELAYVAL 100

void setup() {
  Serial.begin(9600);
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  pixels.begin();
  for (int i = 0; i < NUMPIXELS; i++) {

    //pixels.setPixelColor(i, getcolor(&Blanc));
    pixels.show();
    //delay(DELAYVAL);
  }
}

void loop() {
   // pixels.clear();
  
  /*
  for (int i = 256; i > 0; --i) {

    //pixels.setBrightness(i);
    // delay(DELAYVAL);
  }
  */
  /*
  colorhsl rougetransforme;
  rougetransforme = RGBtoHSL(&Rouge);
  Serial.println(rougetransforme.H);
  Serial.println(rougetransforme.S);
  Serial.println(rougetransforme.L);

  delay(1000);

  color rougebis = HSLtoRGB(&rougetransforme);
  Serial.println(rougebis.R);
  Serial.println(rougebis.G);
  Serial.println(rougebis.B);

  delay(1000);
  */
  delay(1000);
  setcolor(1, &Rouge, pixels);
  //pixels.show;
  delay(1000);
  setcolor(1, &Bleu, pixels);
//  pixels.show;
  delay(1000);
  setcolor(1, &Blanc, pixels);
//  pixels.show;
  uint32_t vouleur = getcolor(&Blanc);
  Serial.println(vouleur);
  
}
