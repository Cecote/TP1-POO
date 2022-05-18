#include "midia.h"

Midia::Midia(string tituloNovo, int dataNova,int duracaoNova, int numeroAcessosNovo) : titulo(tituloNovo), data(dataNova), duracao(duracaoNova), numeroAcessos(numeroAcessosNovo) {}

vector<string> Midia::getArtistas() { 
    return artistas; 
}
void Midia::setArtistas(std :: vector<string> artistaNovo) { 
    artistas = artistaNovo; 
}

string Midia::getTitulo() { 
    return titulo; 
}
void Midia::setTitulo(string tituloNovo) { 
    this->titulo = tituloNovo; 
}

int Midia::getData() {
    return data;
}
void Midia::setData(int dataNova) { 
    this->data = dataNova;
}

int Midia::getDuracao() { 
    return duracao; 
}
void Midia::setDuracao(int duracaoNova) {
    this->duracao = duracaoNova; 
}

vector<string> Midia::getKeywords() { 
    return keywords; 
}
void Midia::setKeywords(std::vector<string> keywordsNovas) {
    keywords = keywordsNovas;
}

int Midia::getNumeroAcessos() { 
    return numeroAcessos; 
}
void Midia::setNumeroAcessos(int numeroAcessosNovo) {
    this->numeroAcessos = numeroAcessosNovo;
}
