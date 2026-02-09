#include<iostream>
#include<string>

using namespace std;

void saludar(string nombre){
    cout << "Hola " << nombre << endl;
}

int main(){
    int a = 28, b = 45;
    bool c = true;
    char d = 'w';
    float e = 6.1027, f = 5e10; // Se puede hacer notación científifca de esta forma
    double g = 34.01233001, h = 6.02E23; // Así también
    string i = "hola";

    saludar("Sebastián");

    string planta = "Limonero";
    string &vegetal = planta; // Esto se llama referencia. Es como un alias para una variable que ya existe.

    cout << vegetal << endl;
    cout << "planta está en " << &planta << endl; // Acá estoy imprimiendo la dirección en memoria de las variables.
    cout << "vegetal está en " << &vegetal << endl;


    return 0;
}