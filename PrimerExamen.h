#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Complejo
{
float a, b;

Complejo operator+ (Complejo aux){ //Operador precargado que suma las componentes reales con reales, e imaginarias con imaginarias
  Complejo temp;
  temp.a = a + aux.a;
  temp.b = b + aux.b;
  return temp;
}

Complejo operator- (Complejo aux){ //Operador Resta
  Complejo temp;
  temp.a = a - aux.a;
  temp.b = b - aux.b;
  return temp;
}

Complejo operator* (Complejo aux){ //Operador multiplicacion
  Complejo temp;
  temp.a = a*aux.a - b*aux.b;
  temp.b = b*aux.a + a*aux.b;
  return temp;
}


Complejo operator/ (Complejo aux){ //Operador Division
  Complejo temp;
  temp.a = ((a*aux.a) + (b*aux.b)) / (pow(aux.a,2) + pow(aux.b,2));
  temp.b = ((b*aux.a) + (a*aux.b)) / (pow(aux.a,2) + pow(aux.b,2));
  return temp;
}

void Muestra () {
  if (b>=0){
cout << "("<<a << "+" << b << "i" <<")"<< endl;
if (b<0) {
  cout << "("<<a << b << "i" <<")"<< endl;
  }
}
}

};

void Imprimir (Complejo Lista[11]) //Imprime la lista de numeros complejos.
{
  int i;
  for (i=0; i < 11; ++i){
    if (Lista[i].b>=0)
  cout << i+1 << ". " << "("<<Lista[i].a << "+" << Lista[i].b << "i" << ")" << endl;
  if (Lista[i].b<0)
  cout << i+1 << ". " << "("<<Lista[i].a << Lista[i].b << "i" << ")" << endl;
    }
}
