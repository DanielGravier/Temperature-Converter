#include <iostream>
using namespace std;
int main() {
    int temp;
    cout<<"Enter the current temperature in Celsius: "<<endl;
    cin >> temp;
   
   if(temp <= 0){
       cout<<"The temperature is: Freezing"<<endl;
   }
   else if (temp >= 0 && temp <= 10){
       cout<<"The temperature is: Cold"<<endl;
   }
   else if (temp >= 11 && temp <= 25){
       cout<<"The temperature is: Warm"<<endl;
   }
   else if (temp > 25){
       cout<<"The temperature is: Hot"<<endl;
   }
   
    return 0;
}
