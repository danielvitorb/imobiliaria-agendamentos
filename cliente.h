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

    public: // Contrutor e métodos public
        Cliente(string telefone = "", string nome = "");

        void setTelefone(string telefone);
        void setNome(string nome);

        int getId();
        string getTelefone();
        string getNome();
};

#endif