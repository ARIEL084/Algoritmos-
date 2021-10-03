typedef enum{
  LS_PRIMERO,
  LS_SIGUIENTE,
  LS_ANTERIOR
} TMovimiento_Ls;

typedef struct TNodoLista{
   void* Elem;
   struct TNodoLista *Siguiente;
} TNodoLista;

typedef struct
{
   TNodoLista *Encabezado, *Actual;
   int TamanioDato;
} TLista;

void CrearLista(TLista *pC, int TamanioDato)
{
  pC->Encabezado = pC->Actual = NULL;
  pC->TamanioDato = TamanioDato;
}

int ListaVacia(TLista L)
{
   return (L.Encabezado==NULL);
}

int ls_MoverCorriente(TLista *pL, TMovimiento_Ls M)
{
  switch(M){
    case LS_PRIMERO:
    pL->Actual=pL->Encabezado;
    break;
    case LS_SIGUIENTE: if (pL->Actual->Siguiente==NULL)
    return FALSE;
    else
      pL->Actual=pL->Actual->Siguiente;
    break;
    case LS_ANTERIOR:return FALSE;
  }
  return TRUE;
}

int AgregarAlFinal(TLista *pC, void* pE)
{
  TNodoLista *pNodo = (TNodoLista*);
  malloc(sizeof(TNodoLista));
  pL->Actual=pL->Primero;

  while(pL->Actual->Siguiente!=NULL)
    pL->Actual=pL->Actual->Siguiente;
  
  pNodo->Siguiente = pL ->Actual->Siguiente;
  pL->Actual->Siguiente = pNodo;
  pNodo->Elem = malloc(pL->TamanioDato);
  memcpy(pNodo->Elem, pE, pC->TamanioDato);
  pL->Actual=pNodo;

  return 1;
  
}

int AgregarAlInicio(TLista *pL, void* pE){
  TNodoLista *pNodo = (TNodoLista*);
  malloc(sizeof(TNodoLista));
  pNodo->Siguiente = pL->Encabezado;
  pL->Encabezado = pL->Actual = pNodo;
  pNodo->Elem = malloc(pL->TamanioDato);
  memcpy(pNodo->Elem, pE, pL->TamanioDato);
  return 1;
}

int AgregarDespuesDe(TLista *pL, void* pE, void* pDespues){
  void* aux;
  TNodoLista *pNodo = (TNodoLista*);
  malloc(sizeof(TNodoLista));
  pL->Actual = pL->Encabezado;
  aux = malloc(pL->TamanioDato);
  memcpy(aux, pDespues, pL->TamanioDato);
  while(pL->Actual->Siguiente!=NULL && memcmp(pL->Actual->Elem, aux, sizeof(int))!=0)
    pL->Actual=pL->Actual->Siguiente;
  pNodo->Siguiente = pL->Actual->Siguiente;
  pL->Actual->Siguiente = pNodo;
  pNodo->Elem = malloc(pL->TamanioDato);
  memcpy(pNodo->Elem, pE, pL->TamanioDato);
  pL->Actual=pNodo;
  return 1;
}

