#include <iostream>
#include <fstream>
using namespace std;
string szyfruj(string wyraz, string jawny, string szyfrowy){
int dw = wyraz.size();
int dalf = jawny.size();
string szyfrogram;
for(int i = 0; i < dw; i++){ //indeksuje kolejną literę wyrazu
    for(int j = 0; j < dalf; j++){ // indeksuje kolejną literę w alfabecie jawnym
        if(wyraz[i] == jawny[j]){
            szyfrogram += szyfrowy[j];
        } 
    }
}
return szyfrogram;
}
string szyfruj( string szyfrogram, string wyraz, string jawny, string szyfrowy){
    string odszyfrowany;
    int dw = szyfrogram.size();
    int dalf = jawny.size();

for(int i = 0; i < dw; i++){ //indeksuje kolejną literę wyrazu
    for(int j = 0; j < dalf; j++){ // indeksuje kolejną literę w alfabecie jawnym
        if(szyfrogram[i] == szyfrowy[j]){
            odszyfrowany += jawny[j];
        } 
    }
}
return odszyfrowany;
}

}


int main(){
   string jawny = "abcdefghijklmnopqrstuvwxyz";
   string szyfrowy;
   int dj = jawny.size();
   int k;
   cout<<"k =";
   cin>>k;
   for(int i = 0; i < dj; i++){
       szyfrowy += jawny[(i + k)%dj];
   }
       cout<<szyfrowy<<endl;

       string wyraz;
       cout<<"wyraz do zaszyfrowania= ";
       cin>>wyraz;
       cout<<szyfruj(wyraz, jawny, szyfrowy);
       string szyfrogram = szyfruj(wyraz, jawny, szyfrowy);
   
}