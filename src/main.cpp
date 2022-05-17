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

bool ordenaData(Filme ff1, Filme ff2) {
    return ff1.getData() < ff2.getData() ? false : true;
}

void cadastroMusica() {
}

void menuCadastro() {
    int d2, error = 0;

    while (!error) {
        cout << "O que deseja cadastrar?\n1 - Musica\n2 - Filme\n 0 - Sair" << endl;
        cin >> d2;

        if (d2 == 1) {
            cadastroMusica();
            error++;
        } else if (d2 == 2) {
            // remocao
            error++;
        } else if (d2 == 0) {
            cout << "Obrigado por utilizar nossos servicos" << endl;
            error++;
        } else {
            system("CLS");
            cout << "Opcao inexistente" << endl;
        }
    }
}

void menuGeral() {
    int d1, error = 0;
    while (!error) {
        cout << "Bem vindo ao servico de streamming Pobreflix o que deseja fazer?\n1 - Cadastrar novas midias\n2 - Remover alguma midia\n3 - Pesquisar por alguma midia\n 0 - Sair" << endl;
        cin >> d1;

        if (d1 == 1) {
            menuCadastro();
            error++;
        } else if (d1 == 2) {
            // remocao
            error++;
        } else if (d1 == 3) {
            // pesquisar
            error++;
        } else if (d1 == 0) {
            cout << "Obrigado por utilizar nossos servicos" << endl;
            error++;
        } else {
            system("CLS");
            cout << "Opcao inexistente" << endl;
        }
    }
}

int main() {
    Filme f1;
    Musica m1;
    std ::vector<Filme> filmes;
    std ::vector<Filme>::iterator iterVar;
    std ::vector<Musica> musicas;
    std ::vector<Musica>::iterator iterVar2;
    string titulo, nomeArtista, keyword;
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

                if (d2 == 0) {
                    break;
                }
                m1.getArtistas().clear();
                m1.getFormatosDeAudio().clear();
                m1.getKeywords().clear();
                m1.getGenerosDeAudio().clear();
                f1.getArtistas().clear();
                f1.getFormatosDeVideo().clear();
                f1.getKeywords().clear();
                f1.getGenerosDoFilme().clear();
                artistas = 1;
                keywords = 1;
                generos = 1;
                formatos = 1;

                if (d2 == 1) {
                    while (d22 == 1) {
                        getchar();
                        cout << "Informe o Titulo da musica" << endl;
                        getline(cin, titulo);

                        cout << "Informe a data de lancamento da musica" << endl;
                        cin >> anoLancamento;

                        cout << "Informe o tempo de duracao da musica (em min)" << endl;
                        cin >> duracaoFilme;

                        cout << "Informe o numero de acessos da musica" << endl;
                        cin >> numAcessos;

                        cout << "Informe os artistas da musica (um de cada vez)!" << endl;
                        while (artistas == 1) {
                            cout << "Nome: ";
                            getchar();
                            getline(cin, nomeArtista);

                            m1.setArtistas(nomeArtista);

                            cout << "Deseja informar mais algum artista?\n1 - Sim\n2 - Nao" << endl;
                            cin >> artistas;
                        }

                        cout << "Informe as keywords referentes a essa musica (uma de cada vez)!" << endl;
                        while (keywords == 1) {
                            cout << "KeyWord: ";
                            getchar();
                            getline(cin, keyword);

                            m1.setKeywords(keyword);

                            cout << "Deseja informar mais alguma keyword?\n1 - Sim\n2 - Nao" << endl;
                            cin >> keywords;
                        }

                        cout << "Informe os generos referentes a essa musica (um de cada vez)!" << endl;
                        while (generos == 1) {
                            cout << "Genero: ";
                            cin >> genero;
                            switch (genero) {
                                case 1:
                                    m1.setGenerosDeAudio(Rock);
                                    break;
                                case 2:
                                    m1.setGenerosDeAudio(HeavyMetal);
                                    break;
                                case 3:
                                    m1.setGenerosDeAudio(Eletronica);
                                    break;
                                case 4:
                                    m1.setGenerosDeAudio(Blues);
                                    break;
                                case 5:
                                    m1.setGenerosDeAudio(Jazz);
                                    break;
                                case 6:
                                    m1.setGenerosDeAudio(Pop);
                                    break;
                                case 7:
                                    m1.setGenerosDeAudio(Samba);
                                    break;
                                default:
                                    cout << "Esse genero não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum genero?\n1 - Sim\n2 - Nao" << endl;
                            cin >> generos;
                        }

                        cout << "Informe os formatos de audio referentes a essa musica (um de cada vez)!" << endl;
                        while (formatos == 1) {
                            cout << "Formato: ";
                            cin >> formato;
                            switch (formato) {
                                case 1:
                                    m1.setFormatosDeAudio(MP3);
                                    break;
                                case 2:
                                    m1.setFormatosDeAudio(AAC);
                                    break;
                                case 3:
                                    m1.setFormatosDeAudio(OGG);
                                    break;
                                case 4:
                                    m1.setFormatosDeAudio(WMA);
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
                        musicas.push_back(m1);

                        cout << "Deseja adicionar mais um filme ?\n1 - Sim\n2 - Sair" << endl;
                        cin >> d22;
                    }

                } else if (d2 == 2) {
                    while (d22 == 1) {
                        getchar();
                        cout << "Informe o Titulo do filme" << endl;
                        getline(cin, titulo);

                        cout << "Informe a data de lancamento do filme" << endl;
                        cin >> anoLancamento;

                        cout << "Informe o tempo de duracao do filme (em min)" << endl;
                        cin >> duracaoFilme;

                        cout << "Informe o numero de acessos do filme" << endl;
                        cin >> numAcessos;

                        cout << "Informe os artistas do filme (um de cada vez)!" << endl;
                        while (artistas == 1) {
                            cout << "Nome: ";
                            getchar();
                            getline(cin, nomeArtista);

                            f1.setArtistas(nomeArtista);

                            cout << "Deseja informar mais algum artista?\n1 - Sim\n2 - Nao" << endl;
                            cin >> artistas;
                        }

                        cout << "Informe as keywords referentes a esse filme (uma de cada vez)!" << endl;
                        while (keywords == 1) {
                            cout << "KeyWord: ";
                            getchar();
                            getline(cin, keyword);

                            f1.setKeywords(keyword);

                            cout << "Deseja informar mais alguma keyword?\n1 - Sim\n2 - Nao" << endl;
                            cin >> keywords;
                        }

                        cout << "Informe os generos referentes a esse filme (um de cada vez)!" << endl;
                        while (generos == 1) {
                            cout << "Genero: ";
                            cin >> genero;
                            switch (genero) {
                                case 1:
                                    f1.setGenerosDoFilme(Terror);
                                    break;
                                case 2:
                                    f1.setGenerosDoFilme(Suspense);
                                    break;
                                case 3:
                                    f1.setGenerosDoFilme(Acao);
                                    break;
                                case 4:
                                    f1.setGenerosDoFilme(Drama);
                                    break;
                                case 5:
                                    f1.setGenerosDoFilme(Documentario);
                                    break;
                                case 6:
                                    f1.setGenerosDoFilme(Comedia);
                                    break;
                                default:
                                    cout << "Esse genero não esta presente em nossa empresa!";
                                    break;
                            }
                            cout << "Deseja informar mais algum genero?\n1 - Sim\n2 - Nao" << endl;
                            cin >> generos;
                        }

                        cout << "Informe os formatos de Video referentes a esse filme (um de cada vez)!" << endl;
                        while (formatos == 1) {
                            cout << "Formato: ";
                            cin >> formato;
                            switch (formato) {
                                case 1:
                                    f1.setFormatosDeVideo(AVI);
                                    break;
                                case 2:
                                    f1.setFormatosDeVideo(MKV);
                                    break;
                                case 3:
                                    f1.setFormatosDeVideo(MP4);
                                    break;
                                case 4:
                                    f1.setFormatosDeVideo(FLV);
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

                        f1 = Filme(titulo, anoLancamento, duracaoFilme, numAcessos);
                        filmes.push_back(f1);

                        cout << "Deseja adicionar mais um filme ?\n1 - Sim\n2 - Sair" << endl;
                        cin >> d22;
                    }
                } else {
                    system("CLS");
                    cout << "Opcao inexistente" << endl;
                }

                break;

            case 2:
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
    //     getchar();
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
    sort(filmes.begin(), filmes.end(), ordenaData);
    for (auto itr = filmes.begin(); itr != filmes.end(); ++itr) {
        cout << *itr << endl;
    }
    return 0;
}