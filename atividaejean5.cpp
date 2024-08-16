#include<stdio.h>

struct No {

    int valor;
    No* prox;

    No() {
        valor = 0;
        prox = NULL;
    }

    No(int _valor) {
        valor = _valor;
        prox = NULL;
    }

};

struct Pilha {

    No* topo;
    int n;

    Pilha() {
        topo = NULL;
        n = 0;
    }

    void inserir(int valor) {
        No* novo = new No(valor);
        if (topo == NULL) {
            topo = novo;
        } else {
            novo->prox = topo;
            topo = novo;
        }
        n++;
    }

    void remover() {
        if (n == 0) return;
        if (n == 1) {
            delete(topo);
            topo = NULL;
            n = 0;
            return;
        }
        No* aux = topo;
        topo = topo->prox;
        delete(aux);
        n--;
    }

    int topoPilha() {
        if (topo == NULL) return 0;
        return topo->valor;
        
    }

};


struct Fila {

    No* inicio;
    No* fim;
    int n;

    Fila() {
        inicio = NULL;
        fim = NULL;
        n = 0;
    }

    void enfileirar(int valor) {
        No* novo = new No(valor);
        if (inicio == NULL) {
            inicio = novo;
            fim = novo;
        } else {
            fim->prox = novo;
            fim = novo;
        }
        n++;
    }

    void desenfileirar(){
        if (n == 0) return;
        if (n == 1) {
            delete(inicio);
            inicio = NULL;
            fim = NULL;
            n = 0;
            return;
        }
        No* aux = inicio;
        inicio = inicio->prox;
        delete(aux);
        n--;
    }

    int frente() {
        if (inicio == NULL) return 0;
        return inicio->valor;
    }

};

int main() {
    
    Fila l1 ;
    Pilha j1;
    
    l1.enfileirar(5);
    l1.enfileirar(4);
    l1.enfileirar(3);
    l1.enfileirar(2);
    l1.enfileirar(1);
    
    while (l1.n != 0){
    j1.inserir(l1.frente());
    l1.desenfileirar();
    printf("%d\n", j1.topoPilha());
    }
    printf("\n");
    while (j1.n != 0){
    l1.enfileirar(j1.topoPilha());
    printf("%d\n", j1.topoPilha());
    j1.remover();
    
    }
    
    printf("\nincio da fila: %d\n", l1.frente());


    return 0;
}
