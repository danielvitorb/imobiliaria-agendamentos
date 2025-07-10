#ifndef CORRETOR_H
#define CORRETOR_H
#include <string>
#include <vector>
#include "imovel.h"
using namespace std;

class Corretor {
    private: // Atributos private
        static int nextId;
        int id;
        string telefone;
        string nome;
        bool avaliador;
        double lat;
        double lng;
        vector<Imovel> imoveis;
        vector<Imovel> imoveisOrdenados;

    public: // Construtor e métodos public
        Corretor(string telefone = "", int x = 0, double latitude = 0, double longitude = 0, string nome = "");

        void setTelefone(string telefone);
        void setNome(string nome);
        void setAvaliador(int x);
        void setLatitude(double latitude);
        void setLongitude(double longitude);

        void adicionarImovel(Imovel imovel);
        void adicionarImovelOrdenado(Imovel imovel);
        void removerImovel(int pos);

        int getId();
        string getTelefone();
        string getNome();
        bool getAvaliador();
        double getLatitude();
        double getLongitude();
        Imovel getImovel(int posicao);
        int getQuantidadeImoveis();
};

#endif