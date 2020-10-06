/*Ejercicio 3. Dada un arreglo de números con n enteros, crea una funcion que verifique si podría volverse un 
arreglo no decreciente (creciente) modificando como máximo 1 elemento.
Definimos que un arreglo no es decreciente si nums [i] <= nums [i + 1] se cumple para cada i (basado en 0) tal 
que (0 <= i <= n - 2).
Input: nums = [4,2,3]
Output: true
Ej: Tu puedes modificar el 4 por un uno para tener tu arreglo que no es decreciente(creciente).*/
#include<iostream>

using namespace std;
void verificar(int* arr, int n, int & cont)
{
    for(int i=n;i>0;i--)//for que va de atras hacia adelante
    {
        for(int j=i-1;j>0;j--)//for que va de atras hacia adelante
        {
            if(arr[i]<arr[j])
            {
                cont++;
            } 
        }
    }
}
int main()
{
    int n=0; bool ver=true; int cont=0;
    int arr[100];
    cout<<"Ingrese la dimension del arreglo: "<<endl; 
    cin>>n;
    cout<<"Ingrese los valores para el arreglo: "<<endl;
    arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    verificar(arr,n,cont);
    if(cont>1)
    {
        ver=false;
    } else ver=true;

    if(ver==false)
    {
        cout<<"False";
    } else cout<<"True";
    
    return 0;
}