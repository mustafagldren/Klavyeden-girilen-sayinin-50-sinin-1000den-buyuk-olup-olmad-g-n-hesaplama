// Klavyeden girilen sayinin %50 sinin 1000den buyuk olup olmadıgını hesaplama
//

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Bir deger giriniz : \n" << endl;
    cin >> x;
    y = x / 2;
    if (y < 1000) {
        cout << "Girilen degerin %50'i , 1000'den kucuktur. \n" << endl;
    }
    else if (y>1000) {
        cout << "Girilen degerin %50'i , 1000'den buyuktur. \n" << endl;
    }
    else {
        cout << "Girilen deger 2000'dir.\n" << endl;
    }
    system("pause");
    return(0);


}

