
/*
@autor: César Villalobos
Estudiante: Ing.Sistemas UDI
29/09/2018
*/


#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int dato;
	struct node* sgte;
}*nodo,TipoDato;

typedef struct{
	nodo top;
	int longitud;
}*pila,tipoPila;

pila crearPila(){
	pila stack=(pila)(malloc(sizeof(tipoPila)));
	stack->top=NULL;
	stack->longitud=0;
	return stack;
}

nodo crearnodo(int valor){
	nodo elemento=(nodo)malloc(sizeof(nodo));
	elemento -> dato=valor;
	elemento -> sgte=NULL;
	return elemento;
}

void push(int valor,pila stack){
	nodo nuevo=crearnodo(valor);
	nuevo->sgte =stack->top;
	stack->top=nuevo;
	stack->longitud++;
	printf("El valor %d ha sido ingresado correctamente",valor);
}

int pop(pila stack){
	int dato;
	dato=stack->top->dato;
	stack->top=stack->top->sgte;
	stack->longitud--;
	return dato;
}

int top(pila stack){
	int dato;
	dato=stack->top->dato;
	return dato;
}

int pilaTamano(pila stack){
	return stack->longitud;
}

int pilaVacia(pila stack){
	return(stack->top==NULL);
}

int main(){

  }




