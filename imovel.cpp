#include "imovel.h"

int Imovel::nextId = 1;

Imovel::Imovel(string tipo, int id, double latitude, double longitude, double preco, string endereco){ // Construtor
    setTipo(tipo);
    this->id = nextId++;
    proprietarioId = id;
    lat = latitude;
    lng = longitude;
    this->preco = preco;
    this->endereco = endereco;
}


// Métodos setters
void Imovel::setTipo(string tipo){
    if(tipo == "Casa"){
        this->tipo = Casa;
    } else if(tipo == "Apartamento"){
        this->tipo = Apartamento;
    } else if(tipo == "Terreno"){
        this->tipo = Terreno;
    } else {
        this->tipo = Indefinido;
    }
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
string Imovel::getTipo(){
    if(tipo == Casa){
        return "Casa";
    } else if(tipo == Apartamento){
        return "Apartamento";
    } else if(tipo == Terreno){
        return "Terreno";
    } else {
        return "Indefinido";
    }
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