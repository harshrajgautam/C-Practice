#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int i;
  int j;

  for (i = 1; i <= n; i++)
  {
    for (j = i; j <= n; j++)
    {
      printf(" ");
    }

    for(j=1; j<=i; j++) {
      cout<<" %d";
    }

    cout<<"\n";
  }
  return 0;
}
