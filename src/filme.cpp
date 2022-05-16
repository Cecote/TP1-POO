#include "filme.h"

#include <iostream>

Filme ::Filme(string tituloNovo, int dataNova, int duracaoNova, int numeroAcessosNovo) : Midia(tituloNovo, dataNova, duracaoNova, numeroAcessosNovo){};

vector<generoFilme> Filme ::getGenerosDoFilme() {
    return generosDoFilme;
}
void Filme ::setGenerosDoFilme(generoFilme gdf) {
    generosDoFilme.push_back(gdf);
}

vector<formatoVideo> Filme ::getFormatosDeVideo() {
    return formatosDeVideo;
}
void Filme ::setFormatosDeVideo(formatoVideo fdf) {
    formatosDeVideo.push_back(fdf);
}

ostream& operator<<(ostream& out, Filme& filme) {
    out << "\nTitulo: " << filme.getTitulo()
        << "\nData: " << filme.getData()
        << "\nDuracao: " << filme.getDuracao() << " minutos"
        << "\nNumero de acessos: " << filme.getNumeroAcessos()
        << "\nArtistas: " << endl;
    std::vector<string> art = filme.getArtistas();
    int test = filme.getArtistas().size();
    for (int i = 0; i < test; i++) {
        out << filme.getArtistas().at(i) << "\n";
    }
    out << "\n";
    return out;
}
