#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
float BMI(float weight, float height){
    float bmi=weight/pow (height,2);
    return bmi;
}  
int main(){
    float a, b;
    float c;
    cout<<"Enter Your Weight(in kg)"<<endl;
    cin>>a;
    cout<<"Enter Your Hieght(in m)"<<endl;
    cin>>b;
    float bmi=BMI(a,b);
    cout<<"Your Body Mass Index is: "<<bmi<<endl;
    if (bmi<18.5){
        cout<<"You are Underweight"<<endl;
        }
    else if(bmi>=18.5 && bmi<25){
        cout<<"Normal"<<endl;
    }
    else if(bmi>=25 && bmi<30){
        cout<<"Overweight"<<endl;
    }
    else if (bmi>30){
        cout<<"Obese"<<endl;
    }
      return 0 ;
}