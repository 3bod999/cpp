#include <iostream>
using namespace std; 
/*
Fahrenheit to Celsius or Celsius to Fahrenheit


From C to F: $F = (C \times 1.8) + 32$
From F to C: $C = (F - 32) / 1.8$
*/
int main (){
    int cho ; 
    while (true)
    {
         
        cout << "Fahrenheit to Celsius [1] or Celsius to Fahrenheit [2]";
        cin >>cho ;
        switch (cho)
    {
        case 1:{
            double Fahrenheit1  ;
            cout << " input your Fahrenheit value " ; 
            cin >> Fahrenheit1; 
            
            double  celsius = (Fahrenheit1 - 32) / 1.8;
            cout << " the Ans >>  "<< celsius;

        }

            break;
        case 2 : {
            double c ; 
            cout << "input your  Celsius value " ; 
            cin >> c ;
            double f = (c * 1.8) + 32;
            cout << "the Ans >> " << f ; 
            break;
        }
        default:
            cout <<"Okashii n janai";
            break;
    }
    }
    
    



    return 0 ; 
}