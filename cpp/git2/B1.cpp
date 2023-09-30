//#define NDEBUG
#include<cassert>
#include<iostream>
#include<cmath>

using namespace std; 

bool hamming (int num){
    if (num==1){return true;}
    if (((num%2)==0) and ((num%3)==0)){
        return true;
    }
    else if (((num%2)==0) and ((num%5)==0)){
        return true;
    }
    else if (((num%3)==0) and ((num%5)==0)){
        return true;
    }
    for(int i=1; i<=10;i++){
        if (num==(pow(2,i))){
            return true;
        } 
    }
    for(int i=1; i<=8;i++){
        if (num==(pow(3,i))){
            return true;
        }
    }
    for(int i=1; i<=5;i++){
        if (num==(pow(5,i))){
            return true;
        } 
    }
    return false;
}

int main() 
{
    cout<<hamming(365)<<endl;
    //Dulustan's tests
    {
        assert(hamming(1));
        assert(hamming(8));
        assert(hamming(12));
        assert(hamming(24));
        assert(hamming(45));
        assert(hamming(384));
        assert(!hamming(14));
        assert(!hamming(26));
        assert(!hamming(44));
        assert(!hamming(365));     
        #ifndef NDEBUG
            cout << "SUCCESS 1!" << endl;
        #endif   
    }

    //Придумайте 3 положительных и 3 отрицательных теста.
    //Student's tests
    {
        assert(!hamming(55));
        assert(!hamming(65));
        assert(!hamming(95));
        #ifndef NDEBUG
            cout << "SUCCESS 2!" << endl;
        #endif     
    }  
    {
        assert(hamming(15));
        assert(hamming(25));
        assert(hamming(192));
        #ifndef NDEBUG
            cout << "SUCCESS 3!" << endl;
        #endif   
    }  
}


