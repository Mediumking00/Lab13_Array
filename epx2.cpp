#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
using namespace std;

const int x=3;


void inputMatrix(double [][x]);

void matrixMultiply(double [][x],double [][x],double [][x]);

void showMatrix(double [][x]);

int main(){
	double a[x][x] = {},b[x][x]={},c[x][x]={};
    inputMatrix(a);
    inputMatrix(b);
    matrixMultiply(a,b,c);
    cout<<"result is ....\n";
    showMatrix(c);


  cout<<endl;
  return 0;
}
void inputMatrix(double z[][x]){
  int N = sizeof(z[0])/sizeof(z[0][0]);
  for(int i=0;i<N;i++){
    cout<<"<"<<i+1<<">";
    for(int j=0;j<N;j++){
      cin>>z[i][j];
    }
  }
}

void matrixMultiply(double y[][x],double z[][x],double c[][x]){
  int N = sizeof(z[0])/sizeof(z[0][0]);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      for(int k=0;k<N;k++){
      c[i][j]+=y[i][k]*z[k][j];
      }
    }
  }
}
void showMatrix(double c[][x]) {
  int N = sizeof(c[0])/sizeof(c[0][0]);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
}
