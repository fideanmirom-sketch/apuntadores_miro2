#include <iostream>
using namespace std;

const int CAPACIDAD_MAXIMA = 10;

class listaArreglo {
    private:
    int datos[CAPACIDAD_MAXIMA];
    int tamano;

    public:
        listaArreglo(){
            tamano = 0;
        }

        bool estaVacia(){
            return tamano == 0;
        }

        bool estaLlena(){
            return tamano == CAPACIDAD_MAXIMA;
        }

        int obtenerTamano(){
            return tamano;
        }

        bool insertar(int valor, int posicion){
            if(estaLlena()){
                cout << "Error: la lista esta llena, no se puede insertar." << endl;
                return false
            }

            if (posicion < 0 || posicion > tamano ){
                cout << "Error: posicion invalida ("<< posicion <<")." << endl;
                return false;
            }

            for (int i = tamano; i > posicion; i--){
                datos[i] = datos[i - 1];
            }

            datos[posicion] = valor;
            tamano++;
            return true;
        }
    }