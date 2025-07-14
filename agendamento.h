#ifndef AGENDAMENTO_H
#define AGENDAMENTO_H

#include <vector>
#include "corretor.h"  

// Declaração dos métodos de agendamento
double haversine(double lat1, double lon1, double lat2, double lon2);
void gerarAgendamentos(vector<Corretor>& avaliadores, vector<Imovel>& imoveis);
int maisPerto(Corretor &avaliador, double lat1, double long1);

#endif