#include <stdlib.h>
typedef struct Nodo{
  Elem datos;
  struct Nodo *sig;
}*ApNodo;

typedef struct{
  ApNodo prim;
  ApNodo ult;
}BNodo;

typedef BNodo *Cola;

Cola nueva(){
  Cola t = (Cola)malloc(sizeof(BNodo));
  t->prim=t->ult=NULL;
  return t;
}
int esnueva(Cola c){ return c->prim==NULL && c->ult==NULL;}

ApNodo nextPrio(Elem e, Cola q){

  int prioridad = e->prioridad;
  ApNodo a = q->prim;
  while (a->sig) {
    if (prioridad > a->sig->datos->prioridad) {
      return a;
    }
    a=a->sig;
  }
}

Cola formar(Elem e, Cola q){

  ApNodo t = (ApNodo)malloc(sizeof(struct Nodo));
  t->datos=e;
  t->sig=NULL;

  if (esnueva(q)) {
    q->prim=q->ult=t;
  }else if(e->prioridad<=q->ult->datos->prioridad){
    q->ult->sig=t;
    q->ult=t;
  }else{
    ApNodo nodoinsercion = nextPrio(e, q);
    t->sig=nodoinsercion->sig;
    nodoinsercion->sig=t;
  }
  return q;
}
void printCola(Cola c){
  ApNodo a = c->prim;
  while (a) {
    printf("-|%d|-", a->datos->dato);
    a=a->sig;
  }
  printf("\n" );
}
