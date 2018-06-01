/* 
 * File:   main.cpp
 * Author: gray
 *
 * Created on 2 June, 2018, 2:31 AM
 */

#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main()
{
    int n, i, j, ind; //Initializing the variables of data type int(integer).
    cout<<"Enter the number:"; //"cout" command is used to print something on the output screen, it can print anything you want.
    cin>>n;// taking input from the user.
    /* as 1 is not prime so lets start loop from 2*/
    for(i=2;i<=n;i++)
    {
        ind=0;//setting value of ind to 0
        for(j=2;j<i;j++)//loop inside another loop to check divisibility of the number from the outer loop.
        {
            if(i%j==0)//checking divisibility if true then the number is not prime as it is divisible by another prime number.
                ind=1;
        }
        if(ind==0)//but if the inner loop condition gives false then the number is prime.
        {
            cout<<i<<setw(3);//Printing the prime numbers one by one.(NOTE: You can also use "\n" instead of setw command and hence removing the iomanip.h header file.
        }
    }
    return 0;//this says that the main function is returning 0.
}
