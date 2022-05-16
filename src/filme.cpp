#include "../headers/filme.h"

vector<generoFilme> Filme :: getGenerosDoFilme(){
    return generosDoFilme;
}
void Filme :: setGenerosDoFilme(generoFilme gdf){
    generosDoFilme.push_back(gdf);
}

vector<formatoVideo> Filme :: getFormatosDeVideo(){
    return formatosDeVideo;
}
void Filme :: setFormatosDeVideo(formatoVideo fdf){
    formatosDeVideo.push_back(fdf);
}


