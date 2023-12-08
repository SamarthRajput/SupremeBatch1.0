#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

// //Sieve of eratothenes - counting nos of prime in the given range  

vector<bool>Sieve(int n){
    //create a sieve array of n size telling isPrime
    vector<bool>sieve(n+1 , true );
    sieve[0]=sieve[1]=false;
    
    for(int i = 2; i*i <= n  /*i <= sqrt(n)*/ ; i++ ){  //Optimisation 2
        if(sieve[i]==true){
            //int j = i*2;
            int j = i*i;  //Optimisation 1 : irst unmarked number would be i*i ,as others ave been marked by 2 to (i-1) 
            while(j<=n){
                sieve[j]=false;
                j = j + i;
            }
        }
    }
    return sieve;
}

//Segmented sieve - used when left range(L) and right range(R) are given


vector<bool>Segsieve(int L , int R){
    //get the prime array and mark the segmented sieve
    vector<bool>sieve = Sieve(sqrt(R));
    vector<int>baseprimes;
    for(int i =0 ; i<sieve.size() ; i++){
        if(sieve[i]){
            baseprimes.push_back(i);
        }
    }
    vector<bool>segsieve(R-L+1 , true);
    if(L==0 || L==1){
        segsieve[L] = false;
    }
    
    for(auto prime : baseprimes){
        int firstmultiple = (L/prime)*prime;
        if(firstmultiple < L){
            firstmultiple = firstmultiple + prime;
        }
        int j = max(firstmultiple , prime*prime);
        while(j<=R){
            segsieve[j-L]= false;
            j = j + prime;
        }
    }
    return segsieve;
}



int main(){

    // int n ;
    // cin>>n;
    // vector<bool>sieve = Sieve(n);
    // for(int i = 0 ; i <= n ; i++){
    //     if(sieve[i]){
    //         cout<< i <<" ";
    //     }
    // }

    int L = 1;
    int R = 10;
    vector<bool>ss = Segsieve(L ,  R);
    for(int i = 0 ; i < ss.size() ; i++){
        if(ss[i]){
            cout<< i + L <<" ";
        }
    }
return 0 ;
}