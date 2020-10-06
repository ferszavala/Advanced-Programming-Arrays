/*Ejercicio 2. Dada un arreglo de dígitos no vacía que representa un número entero no negativo, incremente 
uno al número entero. Los dígitos se almacenan de manera que el dígito más significativo esté al principio
de la lista y cada elemento del arreglo contenga un solo dígito. Puede asumir que el número entero no 
contiene ningún cero a la izquierda, excepto el número 0 en sí.
Input: digits = [1,2,3]
Output: [1,2,4]*/
#include<iostream>
#include <string>

using namespace std;
int main()
{
    int n=0;
    cout<<"Ingrese la longitud que desea que tenga su arreglo: "<<endl;
    cin>>n;
    int arreglo[10]={};
    arreglo[n];
    cout<<"Ingresa los valores del arreglo: "<<endl;
    for(int j=0;j<n;j++)
    {
        cin>>arreglo[j];
    }

    cout<<"[";
    for(int j=0;j<n;j++)
    {
        cout<<arreglo[j]<<" ";
    }
    cout<<"] = ";

    if(arreglo[n-1]==9 && n==1) //si el ultimo digito es 9 y la longitud del arreglo es 1
    {
        cout<<"10"; 
        return 0;
    }
    
     else if(arreglo[n-1]!=9) //si el valor en la ultima posicion del arreglo no es 9
    {
        arreglo[n-1]++; //sumar 1 al ultimo digito del arreglo
    }
    
    else if(arreglo[n-1]==9 && n>1)//si el valor en la ultima posicion del arreglo es 9 y la longitud del arreglo es mayor a 1
    {
        int len=n-1; 
        int c=0;
        while(len>=0) //mientras la longitud se mayor a 0 (siga habiendo numeros que recorrer)
        {
            if(arreglo[len]==9 ) //si el arreglo en la ultima posicion es 9
            {
                c++;
                arreglo[len]=0; //dar valor de 0 donde estaba el 9 (en la ultima posicion)
                if(arreglo[len-1]!=9) //si el arreglo en la penultima posicion es 9
                {
                    arreglo[len-1]++; //sumar 1 a la penultima posicion del arreglo
                    break;
                }
                if(c==n-1)
                {
                    cout<<"1";
                }

            }
            len--; //le resta 1 a la longitud 
        }   
    } 
   
    for(int i=0;i<n;i++)
    {
        cout<<arreglo[i]; //imprime el arreglo con los nuevos valores
    }
    return 0;
}