#include "cliente.h"

void Cliente::setNome(string nome){
    this->nome = nome;
}

void Cliente::setTelefone(int telefone){
    this->telefone = telefone;
}

int Cliente::getId(){
    return id;
}

int Cliente::getTelefone(){
    return telefone;
}

string Cliente::getNome(){
    return nome;
}