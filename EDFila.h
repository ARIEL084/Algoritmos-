typedef struct TNodoFila
{
   void* Elem;
  struct TNodoFila *Siguiente;
} TNodoFila;

typedef struct
{
   TNodoFila *Primero, *Ultimo;
   int TamanioDato;
} TFila;

void CrearFila(TFila *pC, int TamanioDato)
{
  pC->Primero = pC->Ultimo = NULL;
  pC->TamanioDato = TamanioDato;
}

int FilaVacia(TFila C)
{
  return (C.Primero==NULL);
}

int AgregarAFila(TFila *pC, void* pE)
{
  TNodoFila *pNodo = (TNodoFila*) malloc(sizeof(TNodoFila));
  if (!pNodo)
    return 0;
  else
  {
    if (pC->Ultimo)
       pC->Ultimo->Siguiente = pNodo;
    if (!pC->Primero) //Está vacía
       pC->Primero = pNodo;
    pNodo->Siguiente = NULL;
    pC->Ultimo = pNodo;
    pNodo->Elem = malloc (pC->TamanioDato);
    memcpy(pNodo->Elem, pE, pC->TamanioDato);
    return 1;
  }
}


int EliminarDeFila(TFila *pC, void* pE)
{
   TNodoFila *pAux = pC->Primero;
   pC->Primero = pC->Primero->Siguiente;
   if (!pC->Primero)
      pC->Ultimo = NULL;
   memcpy(pE, pAux->Elem, pC->TamanioDato);
   free(pAux->Elem);
   free(pAux);
   return 1;
}
