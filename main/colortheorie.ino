#include "colortheorie.h"



/*
color* HSLtoRGB(colorhsl* couleur1){
  color* couleurconverti = malloc(sizeof(color));
  int H = couleur1->H;
  int S = couleur1->S;
  int L = couleur1->L;
  float s=S/100;
  float l= L/100;
  float h=H/360;
  float R, G, Bl;
  float temporary_1;
  
  if (L==0) {
    rgb=255*l;
    R = rgb;
    G = rgb;
    Bl = rgb;
  }
  else if (L<50){
      temporary_1 = l*(1 + s);
  }
  else{
      temporary_1 =l+s–l*s;
  }


  float temporary_2 = 2*l – temporary_1;
  float temporary_R = h + 0.333;
  float temporary_G = h;
  float temporary_B = h – 0.333;
  if (temporary_R > 1){
      temporary_R = temporary_R - 1;
  }
  if (temporary_B<0){
      temporary_B = temporary_B + 1;
  }

//RED

  if(6*temporary_R<1){
      R=temporary_2 + (temporary_1 – temporary_2) * 6 * temporary_R;
  }
  else if(2*temporary_R<1){
      R=temporary_1;
  }
  else if(3* temporary_R<2){
      R=temporary_2 + (temporary_1 – temporary_2) * (0.666 – temporary_R) * 6;
  }
  else{
      R=temporary_2;
  }
  // Green
  
  if(6*temporary_G<1){
      G=temporary_2 + (temporary_1 – temporary_2) * 6 * temporary_G;
  }
  else if(2*temporary_G<1){
      G=temporary_1;
  }
  else if(3* temporary_G<2){
      G=temporary_2 + (temporary_1 – temporary_2) * (0.666 – temporary_G) * 6;
  }
  else{
      G=temporary_2;
  }
  
// Blue
  if(6*temporary_B<1){
      Bl=temporary_2 + (temporary_1 – temporary_2) * 6 * temporary_B;
  }
  else if(2*temporary_B<1){
      Bl=temporary_1;
  }
  else if((3 * temporary_B) < 2){
      Bl = temporary_2 + ((temporary_1 – temporary_2) * (0.666 – temporary_B) * 6);
  }
  else{
      Bl=temporary_2;
  }
  couleurconverti->R = R*255;
  couleurconverti->G = G*255;
  couleurconverti->B = B*255;
  return couleurconverti;
}

colorhsl* RGBtoHSL(color* couleur1) {
  colorhsl* couleurconverti = malloc(1*sizeof(colorhsl));
  int R = couleur1->R;
  int G = couleur1->G;
  int B = couleur1->B;
  float r = R / 255;
  float g = G / 255;
  float b = B / 255;
  float m = min(min(r, g), b);
  float M = max(max(r, g), b);
  float H, S;

  //luminescence
  float L = (m + M) / 2; // arrondir?

  // Saturation
  if (m == M) {
    S = 0;
  }
  else if (L <= 0.5) {
    S = (M - m) / (M + m);
  }
  else {
    S = (M - m) / (2 - M - m);
  }

  //Hue
  if (M == r) {
    H = (g - b) / (M - m);
  }
  else if (M == g) {
    H = 2 + (b - r) / (M - m);
  }
  else {
    H = 4 + (r - g) / (M - m);
  }
  couleurconverti->S = S;
  couleurconverti->L = L;
  couleurconverti->H = H * 60; //arrondir?

  return couleurconverti;
}
*/
