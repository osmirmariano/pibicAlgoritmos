#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include "Aresta.cpp"

class Grafo {
    int numeroVertice;
    vector<Aresta> arestas;

    public:
        Grafo(int numeroVertice){
            this->numeroVertice = numeroVertice;
        }

        // função que adiciona uma aresta
        void adicionarAresta(int vertice1, int vertice2, int peso){
            Aresta aresta(vertice1, vertice2, peso);
            arestas.push_back(aresta);
        }

        // função que busca o subconjunto de um elemento "i"
        int buscar(int subconjunto[], int i){
            if (subconjunto[i] == -1)
                return i;
            return buscar(subconjunto, subconjunto[i]);
        }

        // função para unir dois subconjuntos em um único subconjunto
        void unir(int subconjunto[], int vertice1, int vertice2){
            int vetor1Set = buscar(subconjunto, vertice1);
            int vetor2Set = buscar(subconjunto, vertice2);
            subconjunto[vetor1Set] = vetor2Set;
        }

        /// função que roda o algoritmo de Kruskal
        void kruskal(){
            vector<Aresta> arvore;
            int i;
            int tamanhoArestas = arestas.size();
            // ordena as arestas pelo menor peso
            sort(arestas.begin(), arestas.end());
            // aloca memória para criar "V" subconjuntos
            int *subconjunto = new int[numeroVertice];
            // inicializa todos os subconjuntos como conjuntos de um único elemento
            memset(subconjunto, -1, sizeof(int) *numeroVertice);
            for (i = 0; i < tamanhoArestas; i++){
                int vetor1 = buscar(subconjunto, arestas[i].obterVertice1());
                int vetor2 = buscar(subconjunto, arestas[i].obterVertice2());

                if (vetor1 != vetor2){
                    // se forem diferentes é porque NÃO forma ciclo, insere no vetor
                    arvore.push_back(arestas[i]);
                    unir(subconjunto, vetor1, vetor2); // faz a união
                }
            }

            int tamanhoArvore = arvore.size();

            // mostra as arestas selecionadas com seus respectivos pesos
            for (int i = 0; i < tamanhoArvore; i++){
                char vetor1 = 'A' + arvore[i].obterVertice1();
                char vetor2 = 'A' + arvore[i].obterVertice2();
                cout << "(" << vetor1 << ", " << vetor2 << ") = " << arvore[i].obterPeso() << endl;
            }
        }
};

#endif // GRAFO_H