#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


void printVector(vector<int> v,int range){
 for(int i = 0; i < range; i++){
    cout<<v[i]<<" ";
 }

}
int main(){
 int n,bit,previos,longN=0,bits=0,longer = 0,number = 1;
 int numberReal = 0;
 bool longest = false;
 bool stop = false,start = false;
 bool arr = false;
 cout<<"Enter the number: "<<endl;
 cin>>n;

  int m = n;

 while(n != 0){
    //previos = bit;
    bit = n%2;
    n/=2;
    //cout<< bit<<" ";
    bits++;
}

 vector<int> a(bits);
 for(int i = 0; i < bits; i++, m != 0){


  bit = m%2;
  m /= 2;
  a[i] = bit;
  //cout<<a[i]<<" ";
  vector<int> b(bits);


}
 cout<<"\n";
 //cout<<longer<<endl;

 for(int j = a.size()-1;j >= 0; j--){

    cout<<a[j]<<" ";

    if(a[j] == 1){
      start = true;
    }
    if(start){
        if(a[j] != a[j-1]){
            longN++;
            a.erase(a.begin() + j);

        }
        /*else if(start && a[j] == 1 && a[j-1] == 1){
            longN++;
            start = false;
        }*/
        else{
            start = false;

        }

    }
    if(longN > longer)
            longer = longN;



 }
  for(int j = 0; j < a.size(); j++){
    if(a[j] == 1)
    numberReal += pow(2,j);
 }
 cout<<endl;
 cout<<longer<<endl;
 cout<<numberReal<<endl;
 //printVector(a,a.size());
return 0;

}
