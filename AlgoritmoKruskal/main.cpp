#include <iostream>
#include "Grafo.cpp"
using namespace std;

int main(int argc, char *argv[]){
    Grafo grafo(7);
    // adiciona as arestas
    grafo.adicionarAresta(0, 1, 7);
    grafo.adicionarAresta(0, 3, 5);
    grafo.adicionarAresta(1, 2, 8);
    grafo.adicionarAresta(1, 3, 9);
    grafo.adicionarAresta(1, 4, 7);
    grafo.adicionarAresta(2, 4, 5);
    grafo.adicionarAresta(3, 4, 15);
    grafo.adicionarAresta(3, 5, 6);
    grafo.adicionarAresta(4, 5, 8);
    grafo.adicionarAresta(4, 6, 9);
    grafo.adicionarAresta(5, 6, 11);

    grafo.kruskal(); // roda o algoritmo de Kruskal

    return 0;
}