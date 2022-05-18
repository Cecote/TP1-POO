#ifndef MIDIA_H
#define MIDIA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Midia {
    std::vector<string> artistas;
    string titulo;
    int data;
    int duracao;
    std::vector<string> keywords;
    int numeroAcessos;

   public:
    Midia(string = "", int = 0, int= 0, int = 0);
    
    vector<string> getArtistas();
    void setArtistas(std::vector<string> artistaNovo);
    
    string getTitulo();
    void setTitulo(string tituloNovo);
    
    int getData();
    void setData(int dataNova);
    
    int getDuracao();
    void setDuracao(int duracaoNova);
    
    vector<string> getKeywords();
    void setKeywords(std::vector<string> keywordsNovas);
    
    int getNumeroAcessos();
    void setNumeroAcessos(int numeroAcessosNovo);
};
#endif