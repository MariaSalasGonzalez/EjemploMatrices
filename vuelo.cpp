/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   vuelo.cpp
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


#include <iostream>
#include <sstream>
#include <string>
using namespace::std;

#include "vuelo.h"

vuelo::vuelo(string codigo, int costo, int ingreso, string tipo,
        string origen, string destino):
        codigo(codigo),
        costo(costo),
        ingreso(ingreso),
        tipo(tipo),
        origen(origen),
        destino(destino){
}


string vuelo::getCodigo(){
    return codigo;
}
    
int vuelo::getCosto(){
    return costo;
}

int vuelo::getIngreso(){
    return ingreso; 
}
 
string vuelo::getTipo(){
    return tipo;
}

string vuelo::getOrigen(){
    return origen;
}

string vuelo::getDestino(){
    return destino;
}
  


void vuelo::setCodigo(string){
    codigo= codigo;
}

void vuelo::setCosto(int){
    costo= costo;
}

void vuelo::setIngreso(int){
    ingreso= ingreso;
}

void vuelo::setTipo(string){
    tipo= tipo;
}

void vuelo::setOrigen(string){
    origen= origen;
}

void vuelo::setDestino(string){
    destino= destino;
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
string vuelo::toString(){
       stringstream s;
       s << "***************************************" << endl;
       s << "     El vuelo es el siguiente:        " << endl;
       s << "**************************************" << endl;
       s<<" El codigo es: "<<codigo<<endl;
       s<<" El costo es: "<<costo<<endl;
       s<<" El ingreso es: "<<ingreso<<endl;
       s<<" El tipo es:"<<tipo<<endl;
       s<<" El origen es: "<<origen<<endl;
       s<<" El destino es: "<<destino<<endl;
       return s.str();
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
vuelo::~vuelo(){
         cout << "Se ha eliminado el vuelo" << endl;
}
    
