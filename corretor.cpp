#include "corretor.h"

int Corretor::nextId = 1;

Corretor::Corretor(string telefone, int x, double latitude, double longitude, string nome){
    this->id = nextId++;
    this->telefone = telefone;
    setAvaliador(x);
    lat = latitude;
    lng = longitude;
    this->nome = nome;
}

void Corretor::setTelefone(string telefone){
    this->telefone = telefone;
}

void Corretor::setNome(string nome){
    this->nome = nome;
}

void Corretor::setAvaliador(int x){
    x == 0 ? avaliador = false : avaliador = true;
}

