#include <iostream>
#include <vector>
#include "corretor.h"
#include "cliente.h"
#include "imovel.h"

int main(){
    int numCorretores, avaliador, numClientes;
    double lat, lon;
    string telefone, nome;
    vector<Corretor> corretores; 
    vector<Corretor> avaliadores;

    cin >> numCorretores;
    for(int i = 0; i < numCorretores; i++){
        cin >> telefone >> avaliador >> lat >> lon;
        getline(cin >> std::ws, nome);

        Corretor corretor(telefone, avaliador, lat, lon, nome);
        corretores.push_back(corretor);

        if(corretores[i].getAvaliador()){
            avaliadores.push_back(corretores[i]);
        }
    }

    cin >> numClientes;
    for(int j = 0; j < numClientes; j++){
        cin >> telefone;
        getline(cin >> std::ws, nome);
        Cliente cliente(telefone, nome);
    }
    return 0;
}