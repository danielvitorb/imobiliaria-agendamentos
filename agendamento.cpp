#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include "corretor.h"
constexpr double EARTH_R = 6371.0; // Raio da Terra em km

double haversine(double lat1, double lon1, double lat2, double lon2) {
    auto deg2rad = [](double d){ return d * M_PI / 180.0; };
    double dlat = deg2rad(lat2 - lat1);
    double dlon = deg2rad(lon2 - lon1);
    double a = std::pow(std::sin(dlat/2), 2) +
               std::cos(deg2rad(lat1)) * std::cos(deg2rad(lat2)) *
               std::pow(std::sin(dlon/2), 2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));
    return EARTH_R * c;
}

void gerarAgendamentos(vector<Corretor>& avaliadores, vector<Imovel>& imoveis){
    Imovel aux;
    int proximoLocal;
    double latitudeAtual, longitudeAtual;
    for(int i = 0; i < imoveis.size(); i++){ // Round Robin
        avaliadores[i % avaliadores.size()].adicionarImovel(imoveis[i]);
    }
    for(int k = 0; k < avaliadores.size(); k++){
        proximoLocal = maisPerto(avaliadores[k], avaliadores[k].getLatitude(), avaliadores[k].getLongitude());
        avaliadores[k].adicionarImovelOrdenado(avaliadores[k].getImovel(proximoLocal));
        latitudeAtual = avaliadores[k].getImovel(proximoLocal).getLatitude();
        longitudeAtual = avaliadores[k].getImovel(proximoLocal).getLongitude();
        avaliadores[k].removerImovel(proximoLocal);
        while(avaliadores[k].getQuantidadeImoveis() != 0){
            proximoLocal = maisPerto(avaliadores[k], latitudeAtual, longitudeAtual);
            avaliadores[k].adicionarImovelOrdenado(avaliadores[k].getImovel(proximoLocal));
            latitudeAtual = avaliadores[k].getImovel(proximoLocal).getLatitude();
            longitudeAtual = avaliadores[k].getImovel(proximoLocal).getLongitude();
            avaliadores[k].removerImovel(proximoLocal);
        }
    }
}

int maisPerto(Corretor &avaliador, double lat1, double long1){
    double menorDistancia = haversine(lat1, long1, avaliador.getImovel(0).getLatitude(), avaliador.getImovel(0).getLongitude());
    int indice = 0;
    for (int j = 1; j < avaliador.getQuantidadeImoveis(); j++){
        if(haversine(lat1, long1, avaliador.getImovel(j).getLatitude(), avaliador.getImovel(j).getLongitude()) < menorDistancia){
            menorDistancia = haversine(lat1, long1, avaliador.getImovel(j).getLatitude(), avaliador.getImovel(j).getLongitude());
            indice = j;
        }
    }
    return indice;
}

int primeiraVisita(Corretor &avaliador){
    int menorDistancia = haversine(avaliador.getLatitude(), avaliador.getLongitude(), avaliador.getImovel(0).getLatitude(), avaliador.getImovel(0).getLongitude());
    int indice = 0;
    for(int j = 1; j < avaliador.getQuantidadeImoveis(); j++){
        if (haversine(avaliador.getLatitude(), avaliador.getLongitude(), avaliador.getImovel(j).getLatitude(), avaliador.getImovel(j).getLongitude()) < menorDistancia){
            menorDistancia = haversine(avaliador.getLatitude(), avaliador.getLongitude(), avaliador.getImovel(j).getLatitude(), avaliador.getImovel(j).getLongitude());
            indice = j;
        }
    }
    return indice;
}