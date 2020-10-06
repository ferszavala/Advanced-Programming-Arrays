/*Ejercicio 4. Dada un arreglo, rote la matriz hacia la derecha en k pasos, donde k no es negativo.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Ej:
1: [7,1,2,3,4,5,6]
2: [6,7,1,2,3,4,5]
3: [5,6,7,1,2,3,4]*/
#include<iostream>
using namespace std;
int main()
{
    int n=0, k=0;
    int arreglo[100]={};
    int aux[100]={};
    cout<<"Ingrese el tamaño del arreglo: "; cin>>n;
    cout<<"Ingrese los valores del arreglo: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arreglo[i];
    }
    cout<<"Ingrese la cantidad de veces que desea rotar el vector: "; cin>>k;
        for(int i=0;i<n-k;i++)
        {
        int primero = arreglo[0];
        int x;
            for(x=0;x<n-1;x++)
            {
               arreglo[x] = arreglo[x+1];
            }
            arreglo[x]= primero;
        }
    cout<<"El resultado es: ";
    for(int i=0;i<n;i++)
    {
        cout<<arreglo[i]<<" ";
    }
    return 0;
}