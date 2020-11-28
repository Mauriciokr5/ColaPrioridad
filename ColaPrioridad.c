#include <stdio.h>
#include "ElemPriority.h"
#include "ColaNoRec.h"

int main(int argc, char const *argv[]) {
  Elem e = nuevoElem(2,3);
  Cola c = nueva();
  c = formar(e,c);
  printCola(c);
  //Elem e = nuevoElem(5,3);
  c = formar(nuevoElem(5,1),c);
  printCola(c);
  c = formar(nuevoElem(4,2),c);
  printCola(c);
  c = formar(nuevoElem(10,2),c);
  printCola(c);
  c = formar(nuevoElem(11,4),c);
  printCola(c);

  return 0;
}
