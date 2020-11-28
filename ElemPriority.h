#include <stdlib.h>
typedef struct{
  int dato;
  int prioridad;
} *Elem;

Elem nuevoElem(int dato,int prioridad){
  Elem t = (Elem)malloc(sizeof(Elem));
  t->dato=dato;
  t->prioridad=prioridad;
  return t;
}
//void ImpElem(Elem x){ printf("%d\n", x);}
