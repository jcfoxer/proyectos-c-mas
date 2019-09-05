#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int intArreglo[5][6],intPromColumna[6];//El arreglo es de 6 filas por 6 columnas debido a que en la ultima fila de cada columna se hace el calculo del total de la columna
    int i=0,j=0;
    int intMayor=0;
    for (i=0;i<6;i++)
    {    
        intPromColumna[i]=0;            
    }
        for (i=0;i<5;i++)
    {
        for (j=0;j<6;j++)
        {
            cout<<"nIngrese el elemento de la posicion ("<<i+1<<","<<j+1<<"):";
            cin>>intArreglo[i][j];
            //Calculo del elemento mayor
            if (intArreglo[i][j]>intMayor)
                intMayor=intArreglo[i][j];
            intPromColumna[i]= intPromColumna[i]+intArreglo[i][j];//Calculo del promedio de datos por columna
        }        
    }

    //Obteniendo el promedio
    system("CLS");
    for (i=0;i<5;i++)
    {
        intPromColumna[i]=intPromColumna[i]/5;
        cout<<"nPromedio de la columna "<<i+1<<": "<<intPromColumna[i];
    }
    cout<<"nnEl numero mas alto es: "<<intMayor;
    cout<<"nn";
    ci.get();
    
		}
hackstore.net