#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int N, cases;
  
  cin>> cases;
  for (int low = 0; low < cases; low++)
    {
      cin >> N;
      int fact = 1;
      for (int i = 1; i <=N; i++)
        {
          fact *= i;
          fact %= 10;
        }
      cout<< fact << endl;
      
    }


  
  
  
}