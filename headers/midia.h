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
    Midia(string artistasNovos[], string tituloNovo, int dataNova,
          int duracaoNova, string keywordsNovas[], int numeroAcessosNovo);
    vector<string> getArtistas();
    void setArtistas(string artistaNovo);
    string getTitulo();
    void setTitulo(string tituloNovo);
    int getData();
    void setData(int dataNova);
    int getDuracao();
    void setDuracao(int duracaoNova);
    vector<string> getKeywords();
    void setKeywords(string keywordsNovas);
    int getNumeroAcessos();
    void setNumeroAcessos(int numeroAcessosNovo);
};
