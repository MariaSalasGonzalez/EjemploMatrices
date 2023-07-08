/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   coleccion.cpp
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

#include <sstream>
using std::string;

#include "coleccion.h"


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
coleccion::coleccion(int f, int c){
    numFil = f;
    numCol = c;
    m = new vuelo**[numFil];
    
    for(int i=0; i<numFil; i++){
        m[i]= new vuelo*[numCol];
    }
    for(int i=0; i<numFil; i++){
    for(int j=0; j<numCol; j++){
    m[i][j] = NULL;
       }

    }
}

  

/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
int coleccion::mesMasVuelos(){
        int mes=0;
        int max = 0;
        int can ;
    for (int i=0; i<numFil; i++){
        can = 0;
    for(int j=0; j<numCol; j++){
        if (m[i][j] != NULL){
        can++;
        }
    }
    if (can > max){
        max = can;
        mes = i;
        }
   }
    return mes;
}


/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
int coleccion::calculoIngreso(int mes, string origen, string destino){
    int suma=0;
    for(int j=0; j<numCol; j++){
        if(m[mes][j] !=NULL){
            if(m[mes][j]->getOrigen()== origen && m[mes][j]->getDestino()==destino){
                suma+= m[mes][j]->getIngreso();
            }
        }
    }
    return suma;
}



/*
 *Objetivo: 
 *Parametros que recibe: 
 *Valor devuelto: 
 */
coleccion::~coleccion() {
    for(int i=0; i<numFil; i++){
        for(int j=0; j<numCol; j++){
            delete m[i][j];
        }
    }
    for(int i=0; i<numFil; i++){
        delete[] m[i];
    }
    delete[]m;
}

