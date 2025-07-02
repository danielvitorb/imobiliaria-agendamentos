#include "cliente.h"

int Cliente::nextId = 1;

Cliente::Cliente(string telefone, string nome){
    this->id = nextId++;
    this->telefone = telefone;
    this->nome = nome;
}

void Cliente::setNome(string nome){
    this->nome = nome;
}

void Cliente::setTelefone(string telefone){
    this->telefone = telefone;
}

int Cliente::getId(){
    return id;
}

string Cliente::getTelefone(){
    return telefone;
}

string Cliente::getNome(){
    return nome;
}