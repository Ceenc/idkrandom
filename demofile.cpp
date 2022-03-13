#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    int input;
    cout<<"Program za nastevanje prastevil!"<<endl;
    cout<<"Do katere stevilke zelis izpisati prastevila:";
    cin>>input;
    for(int i=2;i<input;i++){
        int stevec =0;
        for(int j=2;j<i;j++){
            if(i%j == 0)stevec++;
        }
        if(stevec<2)cout<<i<<" ";
    }
    int end;
    cin>>end;
    //cout<<"idk";
    return 0;
}