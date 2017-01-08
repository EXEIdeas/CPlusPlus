#include <iostream>
using namespace std;

int main ()
{
   // Local variable declaration:
   int x, y = 10;

/*
if(y < 10){
   var = 30;
}else{
   var = 40;
}
*/
   x = (y < 10) ? 30 : 40;

   cout << "value of x: " << x << endl;

   return 0;
}
