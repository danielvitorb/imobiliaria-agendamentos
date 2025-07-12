#include <iostream>
#include <vector>
#include "corretor.h"
#include "cliente.h"
#include "imovel.h"
#include "agendamento.h"

int main(){
    int numCorretores, avaliador, numClientes, numImoveis, propId;
    double lat, lon, preco;
    string telefone, nome, tipo, endereco;
    vector<Corretor> corretores; 
    vector<Corretor> avaliadores;
    vector<Cliente> clientes;
    vector<Imovel> imoveis;

    cin >> numCorretores;
    for(int i = 0; i < numCorretores; i++){
        cin >> telefone >> avaliador >> lat >> lon;
        getline(cin >> ws, nome);

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
        clientes.push_back(cliente);
    }
    
    cin >> numImoveis;
    for(int k = 0; k < numImoveis; k++){
        cin >> tipo >> propId >> lat >> lon >> preco;
        getline(cin >> ws, endereco);

        Imovel imovel(tipo, propId, lat, lon, preco, endereco);
        imoveis.push_back(imovel);
    }

    gerarAgendamentos(avaliadores, imoveis);
    
    return 0;
}