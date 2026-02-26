#include <iostream> 
using namespace std ; 
int main (){

    cout << "the bmi calculator \n";
    float hight0; 
    cout << "Enter your hight " ; 
    cin >> hight0 ; 
    float hight = hight0 /100 ;
    float h2 = hight * hight ; 
    cout << "Enter your weight ";
    int weight ;
    cin >> weight ; 
    float reslut = weight / h2;
    cout << "ur reslut is " << reslut << "\n";
//---------------------------------------------------------
    if (reslut < 18.5 ){
        cout << "Underweight"; 
    }
    else if (reslut >= 18.5 && reslut <= 24.9) {
        cout <<"Healthy weight"; 
    }
    else if (reslut >= 25.0 && reslut <= 29.9){
        cout << "Overweight" ; 
    }
    else{
        cout << "Obesity";
    }





    return 0 ; 
}
