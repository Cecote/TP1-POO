#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Midia {
    vector<string> artistas;
    string titulo;
    int data;
    int duracao;
    vector<string> keywords;
    int numeroAcessos;

   public:
    Midia();
    Midia(string artistasNovos[], string tituloNovo, int dataNova,
          int duracaoNova, string keywordsNovas[], int numeroAcessosNovo) {
        for (int i = 0; i < (sizeof(artistasNovos) / sizeof(artistasNovos[0]));
             i++) {
            artistas.push_back(artistasNovos[i]);
        }
        this->titulo = tituloNovo;
        this->data = dataNova;
        this->duracao = duracaoNova;
        for (int i = 0; i < (sizeof(keywordsNovas) / sizeof(keywordsNovas[0]));
             i++) {
            keywords.push_back(keywordsNovas[i]);
        }
    }

    vector<string> getArtistas() { return artistas; }
    void setArtistas(string artistaNovo) { artistas.push_back(artistaNovo); }
    string getTitulo() { return titulo; }
    void setTitulo(string tituloNovo) { this->titulo = tituloNovo; }
    int getData() { return data; }
    void setData(int dataNova) { this->data = dataNova; }
    int getDuracao() { return duracao; }
    void setDuracao(int duracaoNova) { this->duracao = duracaoNova; }
    vector<string> getKeywords() { return keywords; }
    void setKeywords(string keywordsNovas) {
        artistas.push_back(keywordsNovas);
    }
    int getNumeroAcessos() { return numeroAcessos; }
    void setNumeroAcessos(int numeroAcessosNovo) {
        this->numeroAcessos = numeroAcessosNovo;
    }
};
