#include<iostream>
using namespace std;
 
int main()
{
    int num,i,fact;
		
		fact=1;
    
    cout << "Introduce un numero: "; 
		cin >> num;
    for( i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    cout << "Su factorial es: " << fact<<endl;
    cin.get();cin.get();
    
}
