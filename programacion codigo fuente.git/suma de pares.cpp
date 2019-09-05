
#include <iostream>

using namespace std;
int main()
{
     int n,suma,i;
     suma=0;
     cout<<"Ingrese N: ";
     cin>>n;

     if(n<1)

     cout<<"Error";

     else {
		 
		 for( i=1;i<=n;i+=1)

     suma+=i;

     cout<<"La suma es: "<<suma<<endl;
     }
      cin.get();cin.get();

}
