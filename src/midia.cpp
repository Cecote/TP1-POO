#include "midia.h"

Midia::Midia(string artistasNovos[], string tituloNovo, int dataNova,
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

vector<string> Midia::getArtistas() { return artistas; }
void Midia::setArtistas(string artistaNovo) { artistas.push_back(artistaNovo); }

string Midia::getTitulo() { return titulo; }
void Midia::setTitulo(string tituloNovo) { this->titulo = tituloNovo; }

int Midia::getData() { return data; }
void Midia::setData(int dataNova) { this->data = dataNova; }

int Midia::getDuracao() { return duracao; }
void Midia::setDuracao(int duracaoNova) { this->duracao = duracaoNova; }

vector<string> Midia::getKeywords() { return keywords; }
void Midia::setKeywords(string keywordsNovas) {
    artistas.push_back(keywordsNovas);
}

int Midia::getNumeroAcessos() { return numeroAcessos; }
void Midia::setNumeroAcessos(int numeroAcessosNovo) {
    this->numeroAcessos = numeroAcessosNovo;
}
