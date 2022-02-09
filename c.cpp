#include <iostream>
using namespace std;
int sum = 0, v = 0, v1 = 0;
int main()
{

   cout << sum << endl;
   cin >> v >> v1;

   cout << v << v1 << endl;
   while (v <= v1)
   {
      /* code */
      sum += v;

      ++v;
      cout << v << endl;
   }
   cout << sum << endl;
   cin >> v1;
   system("pause");
   return 0;
}