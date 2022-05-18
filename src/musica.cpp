#include "musica.h"

Musica ::Musica(string tituloNovo, int dataNova, int duracaoNova, int numeroAcessosNovo) : Midia(tituloNovo, dataNova, duracaoNova, numeroAcessosNovo){};

vector<generoMusica> Musica::getGenerosDeAudio() {
    return generosDaMusica;
}
void Musica::setGenerosDeAudio(vector<generoMusica> gda) {
    generosDaMusica = gda;
}

vector<formatoAudio> Musica::getFormatosDeAudio() {
    return formatosDeAudio;
}
void Musica::setFormatosDeAudio(vector<formatoAudio> fda) {
    formatosDeAudio = fda;
}

ostream& operator<<(ostream& out, Musica& musica) {
    out << "\nTitulo: " << musica.getTitulo()
        << "\nData: " << musica.getData()
        << "\nDuracao: " << musica.getDuracao() << " minutos"
        << "\nNumero de acessos: " << musica.getNumeroAcessos()
        << endl;

    return out;
}