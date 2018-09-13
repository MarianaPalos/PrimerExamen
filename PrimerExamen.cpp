#include"PrimerExamen.h"

int main (void)
{

  Complejo Lista[11];

  Lista[0].a=1;
  Lista[0].b=3;
  Lista[1].a=2;
  Lista[1].b=8;
  Lista[2].a=6;
  Lista[2].b=3;
  Lista[3].a=0;
  Lista[3].b=7;
  Lista[4].a=4;
  Lista[4].b=-6;
  Lista[5].a=-2;
  Lista[5].b=0;
  Lista[6].a=1;
  Lista[6].b=-3;
  Lista[7].a=-1;
  Lista[7].b=2;
  Lista[8].a=3;
  Lista[8].b=3;
  Lista[9].a=5;
  Lista[9].b=0;
  Lista[10].a=0;
  Lista[10].b=0;


  Lista[10]= Lista[0] + Lista[1]; //1 Va a guardar el resultado de la suma en el elemento 11, o lugar 10 del arreglo
  cout << "\nLa lista de numeros, donde el elemento 11 es la suma de los elementos 1 y 2 de la lista: " <<endl;
  Imprimir(Lista);

  Lista[10]= Lista[6] - Lista[4]; //2
  cout << "\nLa lista de numeros, donde el elemento 11 es la sresta de los elementos 6-4 de la lista: "<<endl;
  Imprimir(Lista);

  Lista[10] = Lista[2]*Lista[3]; //3 Multiplica dos numeros complejos y los guarda en Lista[10]
  cout <<"\nLa multiplicacion del elemento 3*4 de la lista: "<<endl;
  Lista[10].Muestra();

  Lista[10] = Lista[1]/Lista[4]; //4. Divide dos numero complejos y los guarda en Lista[10]
  cout <<"\nLa division del elemento 2/5 de la lista: "<<endl;
  Lista[10].Muestra();

  cout<<"\nEl elemento 8 de la lista es:"<<endl; //5. Muestra el elemento 8 de la lista en el formato (a+bi)
  Lista[7].Muestra();


  return 0;
  }
