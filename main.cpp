#include <iostream>
#include <fstream>

//esta almacenado en un  archivo

using namespace std;
void ingresar();
void exahustiva ();
int main()
{
  ingresar();
  exahustiva ();
    return 0;
}

void ingresar(){
 ofstream Interpolacion;

Interpolacion.open("Interpolacion.txt",ios::app);
int A[7]={1,2,3,4,5,6,7};

    int primero=0;
    int ultimo = 7-1;
    int medio;
    int n=5;
    int contador=0;
    while (A[primero]!=n && contador < 7)
    {

        medio = primero + ((n-A[primero])*(ultimo -primero))/(A[ultimo]-A[primero]);

        if(A[medio]<n)
            ultimo =medio+1;
        else if (A[medio]>n)
            ultimo = medio -1;
        else
            primero = medio;
        contador++;

        break;
    }

    if (A[primero]==n)
    {
        cout<<"ELEMENTO ENCONTRADO";
        Interpolacion<<"ELEMENTO ENCONTRADO";
    }
    else
    {
         cout<<"ELEMENTO NO ENCONTRADO";
         Interpolacion<<"ELEMENTO ENCONTRADO";
    }

}

void exahustiva (){
  int  arreglo(int a[],int n,int dato);
  int i,j,band;
   int n=5;
  int    a[7]={1,2,3,4,5,6,7};
  int o;
  ofstream Interpolacion;

Interpolacion.open("Interpolacion.txt",ios::app);

  for (int i=0;i<7;i++)
  { int k=i,j=0;
  
while (a[k]==n&&j<=7){
  k++;
  j++;


      if ((j<7-1)&& (j=n)){
        cout<<"\nse encuentra en la posicion "<<i<<endl;
        Interpolacion<<"\nse encuentra en la posicion "<<i<<endl;
        break;
      }
      
      if (band ==0){
      cout <<"no se encuentra";
      break;
    }


}
  /*
 Busqueda<<"\n  encontrado: "<< a[n]<<endl;
 */

}
Interpolacion<<"Elemento buscado"<<n<<endl;
cout<<"Elemento buscado"<<n<<endl;
Interpolacion.close();
}