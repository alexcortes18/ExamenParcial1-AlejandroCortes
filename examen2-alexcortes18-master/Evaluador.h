#include <iostream>
#include <fstream>
#include <math.h>
#include <list>
#include <vector>
using namespace std;

double evaluarEscondido();

int getSegundoElemento(int* arreglo);
int* getDireccionPrimerElemento(int a[5]);
void escribir(string nombre_archivo,vector<int>valores);
vector<int> leer(string nombre_archivo);
double obtenerMediana(list<int>lista);
