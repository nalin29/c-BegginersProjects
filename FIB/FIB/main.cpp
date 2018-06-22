//
//  main.cpp
//  FIB
//
//  Created by Nalin Mahajan on 6/22/18.
//  Copyright © 2018 Nalin Mahajan. All rights reserved.
//

#include <iostream>
using namespace std;
string fibPos(int n){
    string s ="";
    if(n<1)
        return "no negativity";
    if(n == 1){
        s ="0";
        return s;
    }
    if(n == 2){
        s ="0 1";
    return s;
    }
    else{
        int a1=0;
        s +=to_string(a1);
        int a2 =1;
        s+=" "+to_string(a2);
        int t;
        for(int i=2;i<n;i++){
            t = a1 +a2;
            s+=" "+to_string(t);
            a1 = a2;
            a2 =t;
        }
            
    }
    return s;
}
string fibNum(int n){
    string s ="";
    if(n<0)
        return "No negatives";
    if(n == 0)
        return "0";
    if(n == 1)
        return "0 1";
    else{
        int a1=0;
        s +=to_string(a1);
        int a2 =1;
        s+=" "+to_string(a2);
        int t =1;
        while (t<n) {
            t = a1 +a2;
            s+=" "+to_string(t);
            a1 = a2;
            a2 =t;
        }
    }
    return s;
}
int main() {
    // insert code here...
    int fib;
    char code;
    cout << "A.\tTerm in sequence\nB.\tNumber of times in sequence\n";
    cin >> code;
    cout << "What Number: ";
    cin >> fib;
    
    switch (code) {
        case 'A':
            cout << fibNum(fib) << endl;
            break;
            
        case 'B':
            cout << fibPos(fib) << endl;
            break;
        default:
            cout<< "invalide choice" << endl;
    }
        return 0;
}
