#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
#include "imovel.h"
using namespace std;

class Cliente {
    private: // Atributos private
        static int nextId;
        int id;
        string telefone;
        string nome;
        vector<Imovel> imoveis;

    public: // Contrutor e métodos public
        Cliente(string telefone = "", string nome = "");

        void setTelefone(string telefone);
        void setNome(string nome);

        void adicionarImovel(Imovel imovel);

        int getId();
        string getTelefone();
        string getNome();
};

#endif