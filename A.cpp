#include <iostream>
using namespace std;



int main()
{
 
int n,m;
cin>>n;
cout<<n<<"  " ;
while(n!=1)
{
m=n%2;

if(m==1)
{
	n=3*n+1;
	cout<<n<<"  ";
}
else 
{
	n=n/2;
	cout<<n<<"  ";

}
}
cout<<"\n";
return 0;
}
