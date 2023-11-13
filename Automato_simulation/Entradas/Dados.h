#ifndef DADOS_H
#define DADOS_H
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using std::string;


class Automato {
private:
    std::map<std::string, std::vector<std::pair<string, string>>> adjacencyList;
    

public:
    std::string estado_inicial = "q0";
    std::string estado_final = "qf";
    std::string estado_atual = " ";
    std::string entrada_avaliada = " ";
    std::string processados = " ";
    Automato();
    void addVertice(const string& vertice);
    void addAresta(const string& u, string& v, string& peso);
    void printAuto();
    bool vertexExists(const std::string& vertice);
    string transicaoAutomato(string& entrada);
};

void configAutomato(std::string nomeArquivo, Automato* autoDetermi);
void testAutomato(std::string nomeArquivo, Automato* autoDetermi);

#endif // DADOS_H
