#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "Aresta.cpp"

class Grafo{
    int numeroVertice;
    vector<Aresta> arestas;

  public:
    Grafo(int numeroVertice) {
        this->numeroVertice = numeroVertice;
    }

    // função que adiciona uma aresta
    void adicionarAresta(int vertice1, int vertice2, int peso) {
        Aresta aresta(vertice1, vertice2, peso);
        arestas.push_back(aresta);
    }

    /// função que roda o algoritmo de Kruskal
    void prim(){
        vector<Aresta> arvore;
        int i;
        int tamanhoArestas = arestas.size();
        // ordena as arestas pelo menor peso
        sort(arestas.begin(), arestas.end());
       
    }

    void mostrarCusto(){

    }

    void mostrarOrdemVertice(){
        int x, y, z;
        int visitados[numeroVertice];
        int infinito = 999;
        int minimo = infinito;
        int controle = 1;

        for(x = 0; x < numeroVertice; x++){
            visitados[x] = -1;
        }
        visitados[0] = 0;
        while(controle != 0){
            minimo = infinito;
            for(y = 0; y < numeroVertice; y++){
                if(visitados[y] != -1){
                    for(z = 0; z < numeroVertice; z++){
                        if(visitados[z] == -1 && minimo > )
                    }
                }
            }
        }
    }
};

#endif // GRAFO_H