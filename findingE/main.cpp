//
//  main.cpp
//  findingE
//
//  Created by Nalin Mahajan on 6/19/18.
//  Copyright © 2018 Nalin Mahajan. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*
 Allows for quick calculation of factorials to find error and add taylor series
 */
double fact(double a){
    int k = a;
    if(a ==0)
        return 1;
    for(int i=1;i<k;i++){
        a*=i;
    }
    return a;
}
/*
    finds next error in the series which ends up through simplifcation as simply the next term in the taylor series 1/(n+1)!
 */
double err(int n){
    return (1/fact(n+1));
}
/*
 The mathematica constant e is fount by taing the limit as x -> 0 of (1+1/x)^x.
 This can also be modeled by the Taylor Series polynomial for e^x sum from 0 -> n of x^n/n! centered about 0.
 To find e we can simply set x to 1 leaving us with the sum of 0 -> n of 1/n!.
 A taylor series only approximates the value of e so there is a maximum error that we can calcultae by utlizing Lagrange error.
 This is defined as A(x) = M(x)^n+1/(n+1)! where M is the maximum value of the next term of the taylor series when centered around 0. Since x is equal to 1 we are left with A(1) = M/(n+1)! where it simplifies to 1/(n+1)!.
 Now using this we can sequentially go thorugh the series and stop when our error is less than half our decimal places as to prevent rounding up.
 */
double findE(int dec){
    double apprx = pow(10, -dec-1)/2; //gives us the maximum allowed error half of decimal place
    double error = err(0);
    int n=0;
    double e =0;
    while(error >= apprx){            // calculates taylor series till max error is below requested error
        e+= 1/fact(n);                // adds taylor series
         n++;
        error = err(n);              // calculates current error
    }
    return e;
}
// simply asks user for error and outputs
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Enter amount of decimal placed: ";
    int dec;
    cin >> dec;
    cout << endl;
    double e = findE(dec);
    cout << setprecision(dec+1) << e << endl; //helps display only number of decimal places requested
    return 0;
}


