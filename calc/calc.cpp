#include <iostream>
using namespace std;
int main()
{
  int x;
  int y;
  int z;
  int menu;
  cout<<"Insert the first number:\n";
  cin>>x;
  cout<<"Insert the second number:\n";
  cin>>y;
  cout<<"1-(+)\n2-(-)\n3-(*)\n4-(/)\n";
  cin>>menu;
  switch(menu)
  {
    case 1:cout<<(x + y)<<"\n";
    break;
    case 2:cout<<(x - y)<<"\n";
    break;
    case 3:cout<<(x * y)<<"\n";
    break;
    case 4:cout<<(x / y)<<"\n";
    break;
  }
  system ("pause");
  return 0;
}
