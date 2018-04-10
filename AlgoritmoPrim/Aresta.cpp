#ifndef ARESTA_H
#define ARESTA_H

#include <iostream>

using namespace std;

class Aresta{
    int vertice1, vertice2, peso;

  public:
    Aresta(int primeiroVertice, int segundoVertice, int peso){
        vertice1 = primeiroVertice;
        vertice2 = segundoVertice;
        this->peso = peso;
    }

    int obterVertice1(){
        return vertice1;
    }

    int obterVertice2(){
        return vertice2;
    }

    int obterPeso(){
        return peso;
    }

    bool operator<(const Aresta &aresta2) const{
        return (peso < aresta2.peso);
    }
};

#endif // ARESTA_H