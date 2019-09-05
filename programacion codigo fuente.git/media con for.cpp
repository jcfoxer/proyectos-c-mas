
 #include <iostream>

using namespace std;
int main()
{
   int i;
	 float n,num,media=0;

   cout<<"Ingrese la n cantidad: ";
   cin>>n;
   for( i=0;i<n;i++)
	 {
   cout<<"Ingrese un numero: ";
   cin>>num;
   media+=num;
	 }
   cout<<"La media es: "<<media/n<<endl;
   cin.get();cin.get();
	 
}
