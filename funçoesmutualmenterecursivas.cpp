#include <iostream>
using namespace std;
int H(int x);
int F(int x){
  if(x==0){
    return 1;
  }
  else if(x>0 and x%2==0){
    return 2*H(x)+F(x-1);
  }
  else if(x>0 and x%2!=0){
    return 2*H(x)-F(x-1);
  }

}
int H(int x){
 if(x==0){
   return 0;
 }
 else if(x>0){
   return H(x-1)+F(x-1);
 }
 }

int main(){
  int x;
  cin>>x;
  int f2=F(x);
  cout<<f2;
  return 0;
}