#include <iostream>
#include <stdlib.h>
#include <string>
using std::string;
using std::getline;
#include <vector>
#include <bits/stdc++.h>
#include "midia.h"
#include "musica.h"
#include "filme.h"

using namespace std;
bool ordenaData(Filme ff1, Filme ff2){
    return ff1.getData()<ff2.getData()? false:true;
}

int main (){
    Filme f1;
    std :: vector<Filme> filmes;
    std :: vector<Filme>:: iterator iterVar;
    string titulo;
    int anoLancamento, duracaoFilme, numAcessos, d20;

    cout << "Bem vindo ao servico de streams Pobreflix deseja adicionar um filme ?\n1 - Sim\n2 - Sair" << endl;
    cin >> d20;


    while(d20 == 1){
        getchar();
        cout << "Informe o Titulo do filme" << endl;
        getline( cin, titulo ); 

        cout << "Informe a data de lancamento do filme" << endl;
        cin >> anoLancamento;

        cout << "Informe o tempo de duracao do filme (em min)" << endl;
        cin >> duracaoFilme;

        cout << "Informe o numero de acessos do filme" << endl;
        cin >> numAcessos;

        f1=Filme(titulo, anoLancamento, duracaoFilme, numAcessos);
        filmes.push_back(f1);

        cout << "Deseja adicionar mais um filme ?\n1 - Sim\n2 - Sair" << endl;
        cin >> d20;
    }
    sort(filmes.begin(), filmes.end(), ordenaData);
    for(auto itr = filmes.begin(); itr != filmes.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}