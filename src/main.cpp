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
    std ::vector<Filme> filmes;
    std ::vector<Filme>::iterator iterVar;
    string titulo, nomeArtista;
    int anoLancamento, duracaoFilme, numAcessos, error = 0, d1, d2, d22 = 1, artistas = 1;

    while (!error) {
        cout << "Bem vindo ao servico de streamming Pobreflix o que deseja fazer?\n1 - Cadastrar novas midias\n2 - Remover alguma midia\n3 - Pesquisar por alguma midia\n0 - Sair" << endl;
        cin >> d1;

        switch (d1) {
            case 1:

                cout << "O que deseja cadastrar?\n1 - Musica\n2 - Filme\n0 - Sair" << endl;
                cin >> d2;

                if (d2 == 1) {
                    // musica
                    error++;
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

                            cout << "Deseja informar mais alguma artista?\n1 - Sim\n2 - Nao" << endl;
                            cin >> artistas;
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

                    error++;
                } else if (d2 == 0) {
                    cout << "Obrigado por utilizar nossos servicos" << endl;
                    error++;
                } else {
                    system("CLS");
                    cout << "Opcao inexistente" << endl;
                }

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