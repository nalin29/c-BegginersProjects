//
//  main.cpp
//  PrimeFactors
//
//  Created by Nalin Mahajan on 6/22/18.
//  Copyright © 2018 Nalin Mahajan. All rights reserved.
//

#include <iostream>
#include <set>
#include <iterator>
#include <queue>
#include <math.h>
using namespace std;
set<int> all;
queue<int> fact;
set<int> findFact(){
    if(fact.empty())
        return all;
    
    int orig = fact.front();
    if(pow(orig, 0.5) == floor(pow(orig, 0.5))){
        fact.pop();
        if(!all.count(pow(orig,0.5)))
        fact.push(pow(orig, 0.5));
        return findFact();
    }
    int n = ceil(pow(orig, 0.5));
    
    for(int i =2; i<n;i++){
        if(orig%i ==0){
            fact.pop();
            if(!all.count(i))
            fact.push(i);
            if(!all.count(orig/i))
            fact.push(orig/i);
            return findFact();
        }
    }
    all.insert(fact.front());
    fact.pop();
    return findFact();
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int orig;
    cout << "Enter Number to find Prime Factors of: ";
    cin >> orig;
    cout << "\n";
    fact.push(orig);
    set<int> x = findFact();
    for(int y : x){
        cout << " " << y;
    }
    cout << endl;
    return 0;
}
