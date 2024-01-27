//while loop

// while (condition) {
    //code
// }
#include<iostream>  
using namespace std; 

int main(){
// int i = 1;
// while (i<5){
//     cout<<i;
//     i++;
//     return 0;
// }

//sum of first n natural numbers

// int n;
// cin>>n;

// int sum = 0;

// int i =1;  //loop variable
// while(i<=n){ //conditon
//     sum+=i;
//     i++;  //update
// }
// cout<<sum<<endl;

// return 0;


//for loop

//for (init-statement; condition; final-expression){
       // code
//}

// int n;
// cout<<"enter number";
// cin>>n;

// int sum=0;
// for(int i=1; i<=n; i++){

//   sum+=i;

// }

// cout<<sum<<endl;
// return 0;


//also can be used for multiple variables

//for(i=0; j=0; i<5; j>0; i++; j--) {
   //code
//}

//for loop vs while loop
//while used when we don't know condition before 

//break keayword

// for (int i=5; ;i+=5){
//     if(i%7==0){
//       cout<<i;
//       break;
//     }
  
// }

// return 0;


//do-while

//do {
   //code
//} while(condition;)

// int n;

// cout<<"enter number";
// cin>>n;

// int sum=0;

// do{
//    int num;
//    cin>>num;
//    sum+=num;
//    n--;
// } while(n>0);

// cout<<sum;

// return 0;

//continue keyboard : to skip sometthing

//print till 50, but skip multiples of 3
for (int i= 1; i<=50 ;i++){

 if (i%3==0){
    continue;

  }

  cout<<i<<endl;
  }

  return 0;
}