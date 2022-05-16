#include <iostream>
#include <string>
#include <vector>

#include "midia.h"
using namespace std;

enum generoFilme {
    Terror = 1,
    Suspense = 2,
    Acao = 3,
    Drama = 4,
    Documentario = 5,
    Comedia = 6
};
enum formatoVideo { 
    AVI = 1, 
    MKV = 2, 
    MP4 = 3, 
    FLV = 4 
};

class Filme : public Midia {
    std::vector<generoFilme> generosDoFilme;
    std::vector<formatoVideo> formatosDeVideo;

    public:

    vector<generoFilme> getGenerosDoFilme();
    void setGenerosDoFilme(generoFilme gdf);

    vector<formatoVideo> getFormatosDeVideo();
    void setFormatosDeVideo(formatoVideo fdv);
};
