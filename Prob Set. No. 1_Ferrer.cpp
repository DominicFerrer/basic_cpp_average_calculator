#include<iostream>

using namespace std;

int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    float x = 5;

    cout<<"Enter five numbers:\n";
    cin>>a>>b>>c>>d>>e;
    
    float sum = a + b + c + d + e ;
    float mean = sum / x;

    cout << "Mean:" << mean;

    return 0; 

}