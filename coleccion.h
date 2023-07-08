/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coleccion.h
 * Author: Maria Salas
 *
 * Created on 2 de octubre de 2019, 13:53
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

#ifndef COLECCION_H
#define COLECCION_H


#include "vuelo.h"

class coleccion {
public:
    coleccion(int, int);
    virtual int mesMasVuelos();
    virtual int calculoIngreso(int, string, string);
    virtual ~coleccion();
    
    
private:
    vuelo ***m;
    int numFil;
    int numCol;
};

#endif /* COLECCION_H */

