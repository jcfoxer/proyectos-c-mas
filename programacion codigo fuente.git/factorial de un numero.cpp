#include<iostream>
using namespace std;
 
int main()
{
    int num,fact=1;
    
    cout << "Introduce un numero: "; 
		cin >> num;
    for(int i=2; i<=num; i++)
    {
        fact = fact * i;
    }
    cout << "Su factorial es: " << fact<<endl;
    cin.get();cin.get();
    
}
