#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;

template <typename T>
void randomMatrix(T z[][10]){
//Write your code here.

int N = sizeof(z[0])/sizeof(z[0][0]);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
    double  ran = (rand()%10000);
    double  ranc=ran/1000;
      z[i][j]=ranc;
      cout<<z[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  srand(time(0));
	double a[10][10] = {};

  randomMatrix(a);

  cout<<endl;
  return 0;
}
