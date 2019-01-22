#include <iostream>
using namespace std;

int main(){
    cout<<"Enter 5 numbers for the array"<<endl;
    int masivs [5];
    for (int i=0; i<5; i++) {
        cin>>masivs[i];
    }
    bool sorted=true;
    int tmp, operation=0;
    while (sorted==true) {
        sorted=false;
        for (int i=0; i<4; i++) {
            if (masivs[i]>masivs[i+1]) {
                operation++;
                tmp=masivs[i];
                masivs[i]=masivs[i+1];
                masivs[i+1]=tmp;
                sorted=true;

            }
            //else cout<<"Not entering"<<endl;
        }
    }

    for (int i=0; i<5; i++){
        cout<<masivs[i]<<endl;
    }
    cout<<"Operations performed: "<<operation<<endl;
}
//so yeah, testing git now
