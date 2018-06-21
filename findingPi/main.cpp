//
//  main.cpp
//  pi project
//
//  Created by Nalin Mahajan on 6/12/18.
//  Copyright © 2018 Nalin Mahajan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;


double accuracy(int accur){
    double accurdouble = pow(10, -1*accur)/2;
    double estimated = pow(-1, 2)/(2 - 1);
    double n = 1;
    while ( fabs(estimated)> accurdouble) {
        n++;
        cout << n << endl;
        estimated = pow(-1, n+1)/(2*n-1);
    }
    return n;
}
double piSum(double accur){
    double n = accuracy(accur);
    double pi =0;
    for (double i=1; i<n; i++) {
        pi+= pow(-1, i+1)/(2*i-1);
        cout << pi << endl;
    }
    return pi*4;
}

int main(int argc, const char * argv[]) {
    int accuracy;
    cout << "enter decimal places:" ;
    cin >> accuracy;
    cout << endl;
    accuracy++;
   double pi =  piSum(accuracy);
    string p = to_string(pi);
     p = p.substr(0,accuracy+1);
    
    cout << p << endl;
    return 0;
}




