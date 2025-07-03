#include "imovel.h"

int Imovel::nextId = 1;

Imovel::Imovel(Tipo tipo, int id, double latitude, double longitude, double preco, string endereco){ // Construtor
    this->tipo = tipo;
    this->id = nextId++;
    proprietarioId = id;
    lat = latitude;
    lng = longitude;
    this->preco = preco;
    this->endereco = endereco;
}


// Métodos setters
void Imovel::setTipo(Tipo tipo){
    this->tipo = tipo;
}

void Imovel::setEndereco(string endereco){
    this->endereco = endereco;
}

void Imovel::setLatitude(double latitude){
    lat = latitude;
}

void Imovel::setLongitude(double longitude){
    lng = longitude;
}

void Imovel::setPreco(double preco){
    this->preco = preco;
}

void Imovel::setProprietarioId(int id){
    proprietarioId = id;
}


// Métodos getters
Tipo Imovel::getTipo(){
    return tipo;
}

string Imovel::getEndereco(){
    return endereco;
}

int Imovel::getId(){
    return id;
}

double Imovel::getLatitude(){
    return lat;
}

double Imovel::getLongitude(){
    return lng;
}

double Imovel::getPreco(){
    return preco;
}

int Imovel::getProprietarioId(){
    return proprietarioId;
}