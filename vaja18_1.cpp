#include <iostream>
using namespace std;


string sodoALiLiho(int A){
    if (A % 2 == 0){
        return "SODO";
    }
    else {
        return "LIHO";   
    }    
}




int main(){
    
    int A;
    
    cout << "Izberi poljubno stevilo: " << endl;
    cin >> A;
    
    string SodoLiho = sodoALiLiho(A);
    
    cout << "Izbrano stevilo je " << SodoLiho;
    
    return 0;
}