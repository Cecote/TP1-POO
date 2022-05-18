#include <stdlib.h>

#include <iostream>
#include <string>
using std::getline;
using std::string;
#include <bits/stdc++.h>

#include <vector>

#include "filme.h"
#include "midia.h"
#include "musica.h"

using namespace std;
// enum TipoMF{
//   TMusica, TFilme
// };
// typedef struct TipoPagina {
//   TipoMF Pt;
//   union UU{
//     struct U0 {
//       Musica mus;
//     };
//     struct U1{
//       Filme fil;
//     };
//   };
// } TipoPagina;


bool ordenaData(TipoPagina ff1, TipoPagina ff2) {
    int x1, x2;
    if(ff1.Pt==TMusica){
        x1 = ff1.UU.U0.mus.getData();
    }else{
        x1 = ff1.UU.U1.fil.getData();
    }
    if(ff2.Pt==TMusica){
        x2 = ff2.UU.U0.mus.getData();
    }else{
        x2 = ff2.UU.U1.fil.getData();
    }
    return x1 < x2 ? false : true;
}


int main() {
    Filme f1;
    Musica m1;
    std ::vector<Filme> filmes;
    std ::vector<TipoPagina> geral;
    std ::vector<string> artAux;
    std ::vector<string> keyAux;
    std ::vector<generoFilme> gfAux;
    std ::vector<formatoVideo> fvAux;
    std ::vector<generoMusica> gmAux;
    std ::vector<formatoAudio> faAux;
    std ::vector<Filme>::iterator iterVar;
    std ::vector<Musica> musicas;
    std ::vector<Musica>::iterator iterVar2;
    string titulo, nomeArtista, keyword;
    int contGeral = 0;
    // generoFilme gF;
    // formatoVideo fV;
    // generoMusica gM;
    // formatoAudio fA;
    int anoLancamento, duracaoFilme, numAcessos, error = 0, d1, d2, d22 = 1, artistas = 1, keywords = 1, generos = 1, formatos = 1, genero, formato;

    while (!error) {
        cout << "Bem vindo ao servico de streamming Pobreflix o que deseja fazer?\n1 - Cadastrar novas midias\n2 - Remover alguma midia\n3 - Pesquisar por alguma midia\n0 - Sair" << endl;
        cin >> d1;

        switch (d1) {
            case 0:
                cout << "Obrigado por utilizar nossos servicos" << endl;
                error++;

                break;
            case 1:

                cout << "O que deseja cadastrar?\n1 - Musica\n2 - Filme\n0 - Sair" << endl;
                cin >> d2;
                cout << d2 << endl;
                // if (d2 == 0) {
                //     break;
                // }
                // m1.getArtistas().clear();
                // m1.getFormatosDeAudio().clear();
                // m1.getKeywords().clear();
                // m1.getGenerosDeAudio().clear();
                // f1.getArtistas().clear();
                // f1.getFormatosDeVideo().clear();
                // f1.getKeywords().clear();
                // f1.getGenerosDoFilme().clear();
                
                
                if (d2 == 1) {
                    
                    d22 = 1;
                    while (d22 == 1) {
                        
                        cout << "Informe o Titulo da musica" << endl;
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        getline(cin, titulo);

                        cout << "Informe a data de lancamento da musica" << endl;
                        cin >> anoLancamento;

                        cout << "Informe o tempo de duracao da musica (em min)" << endl;
                        cin >> duracaoFilme;

                        cout << "Informe o numero de acessos da musica" << endl;
                        cin >> numAcessos;

                        cout << "Informe os artistas da musica (um de cada vez)!" << endl;
                        
                        artistas = 1;
                        while (artistas == 1) {
                            cout << "Nome: ";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            getline(cin, nomeArtista);
                            
                            artAux.push_back(nomeArtista);

                            cout << "Deseja informar mais algum artista?\n1 - Sim\n2 - Nao" << endl;
                            cin >> artistas;
                        }

                        cout << "Informe as keywords referentes a essa musica (uma de cada vez)!" << endl;
                        keywords = 1;
                        while (keywords == 1) {
                            cout << "KeyWord: ";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');                        
                            getline(cin, keyword);
                            

                            keyAux.push_back(keyword);

                            cout << "Deseja informar mais alguma keyword?\n1 - Sim\n2 - Nao" << endl;
                            cin >> keywords;
                        }
                        
                        cout << "Informe os generos referentes a essa musica (um de cada vez)!" << endl;
                        generos = 1;
                        while (generos == 1) {
                            cout << "Genero: ";
                            cin >> genero;
                            switch (genero) {
                                case 1:
                                    gmAux.push_back(Rock);
                                    break;
                                case 2:
                                    gmAux.push_back(HeavyMetal);
                                    break;
                                case 3:
                                    gmAux.push_back(Eletronica);
                                    break;
                                case 4:
                                    gmAux.push_back(Blues);
                                    break;
                                case 5:
                                    gmAux.push_back(Jazz);
                                    break;
                                case 6:
                                    gmAux.push_back(Pop);
                                    break;
                                case 7:
                                    gmAux.push_back(Samba);
                                    break;
                                default:
                                    cout << "Esse genero não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum genero?\n1 - Sim\n2 - Nao" << endl;
                            cin >> generos;
                        }

                        cout << "Informe os formatos de audio referentes a essa musica (um de cada vez)!" << endl;
                        formatos = 1;
                        while (formatos == 1) {
                            cout << "Formato: ";
                            cin >> formato;
                            switch (formato) {
                                case 1:
                                    faAux.push_back(MP3);
                                    break;
                                case 2:
                                    faAux.push_back(AAC);
                                    break;
                                case 3:
                                    faAux.push_back(OGG);
                                    break;
                                case 4:
                                    faAux.push_back(WMA);
                                    break;
                                default:
                                    cout << "Esse formato não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum formato?\n1 - Sim\n2 - Nao" << endl;
                            cin >> formatos;
                        }

                        // int teste = f1.getArtistas().size();

                        // for (int i = 0; i < teste; i++) {
                        //     cout << f1.getArtistas().at(i) << endl;
                        // }
                        // // for(auto itr = f1.getArtistas().begin(); itr != f1.getArtistas().end(); ++itr){
                        // //     cout << *itr << endl;
                        // // }

                        // exit(1);

                        m1 = Musica(titulo, anoLancamento, duracaoFilme, numAcessos);
                        m1.setArtistas(artAux);
                        m1.setKeywords(keyAux);
                        m1.setFormatosDeAudio(faAux);
                        m1.setGenerosDeAudio(gmAux);
                        musicas.push_back(m1);
                        geral[contGeral].Pt=TMusica;
                        geral[contGeral].UU.U0.mus = m1;
                        contGeral++;
                        artAux.clear();
                        keyAux.clear();

                        cout << "Deseja adicionar mais uma musica?\n1 - Sim\n2 - Nao" << endl;
                        cin >> d22;
                    }
                
                
                } else if (d2 == 2) {
                    d22 = 1;
                    while (d22 == 1) {
                        
                        cout << "Informe o Titulo do filme" << endl;
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        getline(cin, titulo);

                        cout << "Informe a data de lancamento do filme" << endl;
                        cin >> anoLancamento;

                        cout << "Informe o tempo de duracao do filme (em min)" << endl;
                        cin >> duracaoFilme;

                        cout << "Informe o numero de acessos do filme" << endl;
                        cin >> numAcessos;
    
                        cout << "Informe os artistas do filme (um de cada vez)!" << endl;
                        artistas = 1;
                        while (artistas == 1) {
                            cout << "Nome: ";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            getline(cin, nomeArtista);
                            
                            artAux.push_back(nomeArtista);

                            

                            cout << "Deseja informar mais algum artista?\n1 - Sim\n2 - Nao" << endl;
                            cin >> artistas;
                        }

                        cout << "Informe as keywords referentes a esse filme (uma de cada vez)!" << endl;
                        keywords = 1;
                        while (keywords == 1) {
                            cout << "KeyWord: ";
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            getline(cin, keyword);

                            keyAux.push_back(keyword);

                            cout << "Deseja informar mais alguma keyword?\n1 - Sim\n2 - Nao" << endl;
                            cin >> keywords;
                        }

                        cout << "Informe os generos referentes a esse filme (um de cada vez)!" << endl;
                        generos = 1;
                        while (generos == 1) {
                            cout << "Genero: ";
                            cin >> genero;
                            switch (genero) {
                                case 1:
                                    gfAux.push_back(Terror);
                                    break;
                                case 2:
                                    gfAux.push_back(Suspense);
                                    break;
                                case 3:
                                    gfAux.push_back(Acao);
                                    break;
                                case 4:
                                    gfAux.push_back(Drama);
                                    break;
                                case 5:
                                    gfAux.push_back(Documentario);
                                    break;
                                case 6:
                                    gfAux.push_back(Comedia);
                                    break;
                                default:
                                    cout << "Esse genero não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum genero?\n1 - Sim\n2 - Nao" << endl;
                            cin >> generos;
                        }

                        cout << "Informe os formatos de Video referentes a esse filme (um de cada vez)!" << endl;
                        formatos = 1;
                        while (formatos == 1) {
                            cout << "Formato: ";
                            cin >> formato;
                            switch (formato) {
                                case 1:
                                    fvAux.push_back(AVI);
                                    break;
                                case 2:
                                    fvAux.push_back(MKV);
                                    break;
                                case 3:
                                    fvAux.push_back(MP4);
                                    break;
                                case 4:
                                    fvAux.push_back(FLV);
                                    break;
                                default:
                                    cout << "Esse formato não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum formato?\n1 - Sim\n2 - Nao" << endl;
                            cin >> formatos;
                        }

                        
                        // int test = f1.getKeywords().size();
                        
                        // cout << test << endl;
                        // for (int i = 0; i < teste; i++) {
                        //     cout << f1.getArtistas().at(i) << endl;
                        // }
                        // // for(auto itr = f1.getArtistas().begin(); itr != f1.getArtistas().end(); ++itr){
                        // //     cout << *itr << endl;
                        // // }
                        
                        
                        
                        f1 = Filme(titulo, anoLancamento, duracaoFilme, numAcessos);
                        f1.setArtistas(artAux);
                        f1.setKeywords(keyAux);
                        f1.setGenerosDoFilme(gfAux);
                        f1.setFormatosDeVideo(fvAux);
                        filmes.push_back(f1);
                        geral[contGeral].Pt=TFilme;
                        geral[contGeral].UU.U1.fil = f1;
                        contGeral++;
                        artAux.clear();
                        keyAux.clear();

                        // cout << "opa2" << endl;
                        // cout << filmes[0].getArtistas().at(0) << endl;
                        // exit(1);
                        cout << "Deseja adicionar mais um filme ?\n1 - Sim\n2 - Nao" << endl;
                        cin >> d22;
                    }
                } else {
                    system("CLS");
                    cout << "Opcao inexistente" << endl;
                }

                break;

            case 2:

                sort(geral.begin(), geral.end(), ordenaData);

                for (auto itr = geral.begin(); itr != geral.end(); ++itr) {
                    if((*itr).Pt == TMusica){
                        cout << "\nMusica" << endl;
                        cout << (*itr).UU.U0.mus << endl;
                        cout << "Artistas: ";

                        Musica auxxx = (*itr).UU.U0.mus;

                        int test = auxxx.getArtistas().size();
                        for(int j = 0; j < test; j++){
                            cout << auxxx.getArtistas().at(j) << ";";
                        }

                        cout << endl;
                        cout << "Keywords: ";
        
                        test = auxxx.getKeywords().size();
                        for(int j = 0; j < test; j++){
                            cout << auxxx.getKeywords().at(j) << ";";
                        }

                        cout << endl;

                    }
                    else{
                        cout << "\nFilme" << endl;
                        cout << (*itr).UU.U1.fil << endl;
                        cout << "Artistas: ";

                        Filme auxxxx = (*itr).UU.U1.fil;

                        int test = auxxxx.getArtistas().size();
                        for(int j = 0; j < test; j++){
                            cout << auxxxx.getArtistas().at(j) << ";";
                        }

                        cout << endl;
                        cout << "Keywords: ";
        
                        test = auxxxx.getKeywords().size();
                        for(int j = 0; j < test; j++){
                            cout << auxxxx.getKeywords().at(j) << ";";
                        }

                        cout << endl;
                    }
                
                }

                // sort(filmes.begin(), filmes.end(), ordenaData);
                // int cont = 0, remove;
                // for (auto itr = filmes.begin(); itr != filmes.end(); ++itr) {
                //     cout << cont << endl;
                //     cout << *itr << endl;
                // }
                // cout << "Informe qual a posição que deseja remover: ";
                // cin >> remove;
                // erase(filmes, filmes[remove]);

                break;
            
            default:
                break;
        }
    }

    cout << "\nFilmes:" << endl;

    for (auto itr = filmes.begin(); itr != filmes.end(); ++itr) {
        cout << *itr << endl;
        cout << "Artistas: ";
        
        Filme auxxx = *itr;
        int test = auxxx.getArtistas().size();
        for(int j = 0; j < test; j++){
            cout << auxxx.getArtistas().at(j) << ";";
        }

        cout << endl;
        cout << "Keywords: ";
        
        test = auxxx.getKeywords().size();
        for(int j = 0; j < test; j++){
            cout << auxxx.getKeywords().at(j) << ";";
        }

        cout << endl;
    }

    // int teste2 = filmes.size();

    // for (int j = 0; j < teste2; j++) {
    //     cout << filmes[j] << endl;

    //     int teste = filmes[j].getArtistas().size();
    //     cout << teste << endl;
    //     for (int i = 0; i < teste; i++) {
    //         cout << filmes[j].getArtistas().at(i) << endl;
    //     }
    // }

    cout << "\nMusicas:" << endl;

    for (auto itr = musicas.begin(); itr != musicas.end(); ++itr) {
        cout << *itr << endl;
        cout << "Artistas: ";
        
        Musica auxxxx = *itr;
        int test = auxxxx.getArtistas().size();
        for(int j = 0; j < test; j++){
            cout << auxxxx.getArtistas().at(j) << ";";
        }

        cout << endl;
        cout << "Keywords: ";
        
        test = auxxxx.getKeywords().size();
        for(int j = 0; j < test; j++){
            cout << auxxxx.getKeywords().at(j) << ";";
        }

        cout << endl;
    }

    
    //     if(d1 == 1){
    //         menuCadastro();
    //         error++;
    //     }
    //     else if(d1 == 2){
    //         //remocao
    //         error++;
    //     }
    //     else if(d1 == 3){
    //         // pesquisar
    //         error++;
    //     }
    //     else if(d1 == 0){
    //         cout << "Obrigado por utilizar nossos servicos" << endl;
    //         error++;
    //     }
    //     else{
    //         system("CLS");
    //         cout << "Opcao inexistente" << endl;
    //     }
    // }

    // cout << "Bem vindo ao servico de streams Pobreflix deseja adicionar um filme ?\n1 - Sim\n2 - Sair" << endl;
    // cin >> d20;

    // while(d20 == 1){
    //     
    //     cout << "Informe o Titulo do filme" << endl;
    //     getline( cin, titulo );

    //     cout << "Informe a data de lancamento do filme" << endl;
    //     cin >> anoLancamento;

    //     cout << "Informe o tempo de duracao do filme (em min)" << endl;
    //     cin >> duracaoFilme;

    //     cout << "Informe o numero de acessos do filme" << endl;
    //     cin >> numAcessos;

    //     f1=Filme(titulo, anoLancamento, duracaoFilme, numAcessos);
    //     filmes.push_back(f1);

    //     cout << "Deseja adicionar mais um filme ?\n1 - Sim\n2 - Sair" << endl;
    //     cin >> d20;
    // }

    

    
    return 0;
}