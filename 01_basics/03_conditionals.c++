#include<iostream>  
using namespace std; 

int main(){
    // int num;

    // cin>>num;
    // if(num%2==0){
    //     cout<<"even number";
    // } else{
    //     cout<<"odd number";
    // }

//three conditions

// int marks;
//     cout<<"enter your marks", marks;
//     cin>>marks;
//     if(marks>33){
//         cout<<"pass";
//     } if(marks==33){
//         cout<<"also pass";
//     }
//     else{
//         cout<<"fail";
//     }

//child, adult, teenager

// int age;
// cout<<"enter your age";
// cin>>age;

// if(age<18){
//     cout<<"child";
// }if(18<age<60){
//     cout<<"adult";
// }
// else{
//     cout<<"old";
// }

// //conditional operators && || 
// //same question using terniary condition
// age>18? cout<<"pass"<<endl : cout<<"fail"<<endl;


//even odd using logical operators
// int num;

// cout<<"enter number";
// cin>>num;
// if((num>0) && (num%2==0)){
//     cout<<"even";
// }else{
//     cout<<"odd";
// }

//switch case - used when a single value is being compared with several values
//print day on the basis of day number

int day;
cout<<"what day it is? ";
cin>>day;
switch(day){
    case 1:
    cout<<"Monday";
    break;

     case 2:
    cout<<"Tue";
    break;

     case 3:
    cout<<"Wed";
    break;

     case 4:
    cout<<"Thurs";
    break;

     case 5:
    cout<<"Fri";
    break;

     case 6:
    cout<<"Sat";
    break;

     case 7:
    cout<<"Sun";
    break;

      default:
    cout<<"invalid input";
    break;
}

}



