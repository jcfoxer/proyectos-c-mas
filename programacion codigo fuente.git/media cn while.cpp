#include <iostream>

using namespace std;
int main()
{
  
	int i;
	float n,t,num,media=0;
  cout<<"Ingrese la n cantidad: ";
  cin>>n;
  t=n;
  while(n-->0)
	{
  cout<<"Ingrese un numero: ";
  cin>>num;
  media+=num;
	}
  cout<<"La media es: "<<media/t<<endl;
  cin.get();cin.get();
	
}
