#include "corretor.h"

int Corretor::nextId = 1;

Corretor::Corretor(string telefone, int x, double latitude, double longitude, string nome){ // Construtor
    this->id = nextId++;
    this->telefone = telefone;
    setAvaliador(x);
    lat = latitude;
    lng = longitude;
    this->nome = nome;
}


// Métodos setters
void Corretor::setTelefone(string telefone){
    this->telefone = telefone;
}

void Corretor::setNome(string nome){
    this->nome = nome;
}

void Corretor::setAvaliador(int x){
    x == 0 ? avaliador = false : avaliador = true;
}

void Corretor::setLatitude(double latitude){
    lat = latitude;
}

void Corretor::setLongitude(double longitude){
    lng = longitude;
}


void Corretor::adicionarImovel(Imovel imovel){
    imoveis.push_back(imovel);
}

void Corretor::removerImovel(int pos){
    imoveis.erase(imoveis.begin() + pos);
}


// Métodos getters
int Corretor::getId(){
    return id;
}

string Corretor::getTelefone(){
    return telefone;
}

string Corretor::getNome(){
    return nome;
}

bool Corretor::getAvaliador(){
    return avaliador;
}

double Corretor::getLatitude(){
    return lat;
}

double Corretor::getLongitude(){
    return lng;
}

Imovel Corretor::getImovel(int posicao){
    return imoveis[posicao];
}

int Corretor::getQuantidadeImoveis(){
    return imoveis.size();
}