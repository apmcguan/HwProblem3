#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int N, cases;
  
  cin>> cases;
  for (int low = 0; low < cases; low++)
    {
      cin >> N;
      int f = 1;
      for (int i = 1; i <=N; i++)
        {
          f *= i;
          f %= 10;
        }
      cout<< f << endl;
      
    }


  
  
  
}