#include "../headers/musica.h"

vector<generoMusica> Musica::getGenerosDeAudio() { return generosDaMusica; }
void Musica::setGenerosDeAudio(generoMusica gda) {
    generosDaMusica.push_back(gda);
}

vector<formatoAudio> Musica::getFormatosDeAudio() { return formatosDeAudio; }
void Musica::setFormatosDeAudio(formatoAudio fda) {
    formatosDeAudio.push_back(fda);
}