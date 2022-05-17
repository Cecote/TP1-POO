#ifndef MUSICA_H
#define MUSICA_H
#include <iostream>
#include <string>
#include <vector>

#include "midia.h"
using namespace std;

enum generoMusica {
    Rock = 1,
    HeavyMetal = 2,
    Eletronica = 3,
    Blues = 4,
    Jazz = 5,
    Pop = 6,
    Samba = 7
};
enum formatoAudio {
    MP3 = 1,
    AAC = 2,
    OGG = 3,
    WMA = 4
};

class Musica : public Midia {
    std::vector<generoMusica> generosDaMusica;
    std::vector<formatoAudio> formatosDeAudio;

   public:
    Musica(string = "", int = 0, int = 0, int = 0);

    vector<generoMusica> getGenerosDeAudio();
    void setGenerosDeAudio(generoMusica gda);

    vector<formatoAudio> getFormatosDeAudio();
    void setFormatosDeAudio(formatoAudio fda);

    friend ostream& operator<<(ostream&, Musica&);
};
#endif