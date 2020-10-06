/*Ejercicio 1. Realice una función en c++  que calcule el producto punto de dos matrices cuadradas de 
nxm revisando su simetría.*/

#include<iostream>
using namespace std;

void funcion(int n1, int m1, int n2, int m2,int matriz1[10][10]={}, int matriz2[10][10]={}, int matrizres[10][10]={})
{
    //Declaramos la matriz con los valores deseados
    matriz1[n1][m1];
    matriz2[n2][m2];
    matrizres[n1][m2];

    //Rellenamos la matriz uno con valores random
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            matriz1[i][j] = (rand()%255)+1;
        }
    }

    //Imprimimos la matriz uno
    cout<<"La matriz uno es: "<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cout<<matriz1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Rellenamos la matriz dos con valores random
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            matriz2[i][j] = (rand()%255)+1;
        }
    }

    //Imprimimos la matriz dos
    cout<<"La matriz dos es: "<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
           cout<<matriz2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Hacemos el producto punto de la matriz uno y dos
    for (int i=0;i<=n1;i++)
    {
        for (int j=0;j<=m2;j++)
        {
            matrizres[i][j]=0;
            for (int k=0;k<=n1;k++)
            {
                matrizres[i][j]=matrizres[i][j]+(matriz1[i][k]*matriz2[k][j]);
            }
       }
    }
}

int main()
{
    //Declarar variables
    int n1, n2, m1, m2;
    int matriz1[10][10]={};
    int matriz2[10][10]={};
    int matrizres[10][10]={};
    //Ingresamos valores
    cout<<"Ingrese las dos dimensiones de la primera matriz: "; cin>>n1; cin>>m1;
    cout<<"Ingrese las dos dimensiones de la segunda matriz: "; cin>>n2; cin>>m2;
    //Le asignamos las dimensiones a la matriz
    matriz1[n1][m1];
    matriz2[n2][m2];
    matrizres[n1][m2];
    //Probamos que tengan las dimensiones desadas
    if(n1!=n2 || m1!=m2 || n1!=m1 || n1!=m2 || n2!=m2 || n2!=m1)
    {
        cout<<"Las dimensiones de la matriz no son válidas, ambas deben de ser cuadradas y de las mismas dimensiones.";
        return 0;
    }
    //Llamamos a la funcion
    funcion(n1, m1, n2, m2, matriz1, matriz2, matrizres);
    //Imprimimos la funcion
    cout<<"La matriz de respuesta es: "<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cout<<matrizres[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}