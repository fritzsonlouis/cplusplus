#include <iostream>

using namespace std;

//Instructions
//Write a program that prompts the user to input an integer and then outputs both the individual digits of the number and the sum of the digits.

//For example, it should output the individual digits of:

//3456 as 3 4 5 6
//8030 as 8 0 3 0
//2345526 as 2 3 4 5 5 2 6
//4000 as 4 0 0 0
//-2345 as 2 3 4 5 //



int main() {
    int i, n=1,n2=0;
        cout << "Enter Number: " << endl;
    cin >> i;
     

    if(i<0)

    {

    i=i*(-1);

    }

    while(i/n>=10){

    n=n*10;

    }

    cout<<"The num:";

    do {

    n2+=i/n;

    cout<<i/n<<" ";

    i%=n;

    n=n/10;

    }

    while(n!=0);

    cout<<"\n Sum of the num:"<<n2;
      

    return 0;
}
