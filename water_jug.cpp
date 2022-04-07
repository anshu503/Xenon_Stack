#include<bits/stdc++.h>
using namespace std;

void solve(int n , int x, int y){
      int first_quantity = 0, second_quantity = 0,t;
      cout << setw(15) <<"FIRST JUG"<< setw(15) <<"SECOND JUG"<<endl;
      while (first_quantity != n && second_quantity!=n ){
          if (first_quantity == 0){
              first_quantity = x;
              cout << setw(10) << first_quantity << setw(15) << second_quantity<<endl;
          }
          else if (second_quantity == y){
              second_quantity = 0;
              cout << setw(10) << first_quantity << setw(15) << second_quantity<<endl;
          }
          else{
              t = min(y - second_quantity, first_quantity);
              second_quantity= second_quantity + t;
              first_quantity = first_quantity - t;
              cout << setw(10) << first_quantity << setw(15) << second_quantity<<endl;
          }
      }
}
int main(){
int first_jug,second_jug,target;
cout << "Enter target capacity :-"<<endl;
cin >> target;
cout << "Enter the capacity of first jug:-"<<endl;
cin >> first_jug;
cout << "Enter the capacity of second jug:-"<<endl;
cin >> second_jug;
if(target<first_jug || target<second_jug){ 

    if(target%(__gcd(first_jug,second_jug))==0)
        solve(target,first_jug,second_jug);
    else
        cout<<"This is not possible....\n";  
}
else
    cout<<"This is not possible....\n"; 
}