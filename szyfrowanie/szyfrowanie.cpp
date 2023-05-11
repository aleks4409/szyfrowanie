#include <iostream>
#include <fstream>
using namespace std;
string shift(string wyraz, int n){
    string nowy;
    int d = wyraz.size();
    for(int i = 0; i < d; i++){
        nowy += wyraz[(i+n)%d];
    }
    return nowy;
}

int main(){
    string wyraz;
    cout<<"podaj wyraz = ";
    cin>>wyraz;
    int n;
    cout<<"n= ";
    cin>>n;
    cout<<shift(wyraz, n)<<endl;
return 0;
}