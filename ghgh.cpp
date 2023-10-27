#include <iostream>
using namespace std;
int main(){

int amount;
cout<<"total amount"<<endl;
cin>>amount;

int n100 , n50, n20 , n1;
n1 = n20 = n50 = n100 = 0;

switch(amount>=100){
    n100 = amount/100;
    amount -= (n100 * 100);
     break;
}
switch (amount>=50)
{
    n50 = amount/50;
    amount -=(n50*50);
    break;
}

cout<<"100"<<n100<<endl;
cout<<"50"<<n50<<endl;
}
