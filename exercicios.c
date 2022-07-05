int pesquisa(tlista lista, tdado dado) {
    while (lista->ini != NULL) {
        if (lista->ini->dado == dado) {
            return 1;
        } else {
            lista->ini = lista->ini->prox;
        }
    }
    return 0;
}
//---------------------------------------------
int crescente(tlista lista) {
    while (lista->ini != lista->fim) {
        if (lista->ini->dado < lista->ini->prox->dado) {
            lista->ini = lista->ini->prox;
        } else {
            return 0;
        }
    }
    return 1;
}
//----------------------------------------------
void removePar(tlista *lista) {
    tno *indice;
    indice = lista->ini;
    while (indice != NULL) {
        if (indice->dado % 2 == 0) {
            tno *aux;
            aux = indice->ant;
            indice = indice->prox;
            if (indice == NULL) {
                indice = NULL;
            } else {
                indice->ant = aux;
                free(aux);
            }
        } else {
            indice = indice->prox;
        }
    }
  free(indice);
}
//-------------------------------------------------------
int soma(int v[], int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return v[n-1] + soma(v, n-1);
   }
}
//-------------------------------------------------------
void decimalParaBinario(int decimal) 
{
    if (decimal > 0) 
    {
        decimalParaBinario(decimal / 2);
        printf("%d", decimal % 2);
    }
}
//--------------------------------------------------------
int funcaoRecursiva(int m, int n) { // 11 chamadas de função para h(3,3)
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else if (m > 1 && n > 1) {
        return funcaoRecursiva(m, n - 1) + funcaoRecursiva(m - 1, n);
    }
}