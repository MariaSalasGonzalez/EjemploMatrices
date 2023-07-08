/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vuelo.h
 * Author: Maria Salas
 *
 * Created on 1 de octubre de 2019, 22:52
 */

/* 
 * Universidad Nacional 
 * Escuela de Informatica
 * EIF 201-Programacion 1
 * Estudiante: Maria Amalia Salas Gonzalez
 * Profesora: Jennifer Fuentes Bustos
 * Grupo: 05
 * Actividad de Aprendizaje #2: Programar Examen Parcial
 */

#ifndef VUELO_H
#define VUELO_H

#include <sstream>
#include <iostream>
using std::string;

class vuelo {
public:
    vuelo(string, int, int, string, string, string);
    virtual string toString();
    virtual ~vuelo();
    string getCodigo();
    int getCosto();
    int getIngreso();
    string getTipo();
    string getOrigen();
    string getDestino();
    void setCodigo(string);
    void setCosto(int);
    void setIngreso(int);
    void setTipo(string);
    void setOrigen(string);
    void setDestino(string);
   
    
private:
    string codigo;
    int costo;
    int ingreso;
    string tipo;
    string origen;
    string destino;

};

#endif /* VUELO_H */

