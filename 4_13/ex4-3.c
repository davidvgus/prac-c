/* 4_13/ex4-3.c
 * calculate permiter of rectangle
 */

#include <stdio.h>

int iwidth = 3;
int iheight = 5;

float fwidth = 6.8;
float fheight = 2.3;

int main (){

  int ianswer = 2 * iwidth + 2 * iheight;
  float fanswer = 2 * fwidth + 2 * fheight;

  printf("Int perimeter: %d\n", ianswer);
  printf("Float perimeter: %f\n", fanswer);
  return (0);
}
