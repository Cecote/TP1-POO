#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Midia {
    // artistas
    string titulo;
    int data;
    int duracao;
    // keywords
    int numeroAcessos;

   public:
    // construtores????????

    // set get artistas
    string getTitulo() {
        return titulo;
    }
    void setTitulo(string tituloNovo) {
        this->titulo = tituloNovo;
    }
    int getData() {
        return data;
    }
    void setData(int dataNova) {
        this->data = dataNova;
    }
    int getDuracao() {
        return duracao;
    }
    void setDuracao(int duracaoNova) {
        this->duracao = duracaoNova;
    }
    // getsetkeywords
    int getNumeroAcessos() {
        return numeroAcessos;
    }
    void setNumeroAcessos(int numeroAcessosNovo) {
        this->numeroAcessos = numeroAcessosNovo;
    }
};
