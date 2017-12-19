#include <iostream>

/*
Muratcan Albayraklýoðlu - 2013123033
mrtcnalb@yandex.com

*/

using namespace std;
void paletegit (int TCP[],const int boyut,int palet[],const int boyut2)
{
    TCP[0] = palet[0];
    TCP[1] = palet[1];
    TCP[2] = palet[2];
    cout << "Robot Kolu Palete Geldi." << endl;
    cout << "Robot Kolu " <<" Z : " << TCP[2] << "X : " << TCP[0] << " Y : " << TCP[1] << " Konumunda (Palet)" << endl;
    cout << "Urun Alindi." << endl;

}

void bitis (int TCP[],const int boyut,int temp[],const int boyut2)
{
    TCP[0] = temp[0];
    TCP[1] = temp[1];
    TCP[2] = temp[2];
    cout << "Kutu Doldu. Robot Kolu eski yerine gidiyor." << endl;
    cout << "Robot Kolu " <<" Z : " << TCP[2] << " X : " << TCP[0] << " Y : " << TCP[1] << " Konumuna Tekrar Geldi." << endl;
}
int main()
{
    const int boyut=3,boyut2=3;

    int palet[boyut],kutu[boyut],kutukonum[boyut],TCP[boyut],temp[boyut],uzaklik[boyut],kututemp[boyut];

    cout << "Robot ucunun konumunu giriniz. \nX ekseni: " << endl;
    cin >> TCP[0];
    cout << "\nY ekseni: " << endl;
    cin >> TCP[1];
    cout << "\nZ ekseni: " << endl;
    cin >> TCP[2];

    cout << "\nPaletin bulundugu konumu giriniz. \n X ekseni:" << endl;
    cin >> palet[0];
    cout << "\nY ekseni: " << endl;
    cin >> palet[1];
    cout << "\nZ ekseni: " << endl;
    cin >> palet[2];

    temp[0] = TCP[0];
    temp[1] = TCP[1];
    temp[2] = TCP[2];

    cout << "\nKutunun enine kac bölmeden olustugunu giriniz." << endl;
    cin >> kutu[0];
    cout << "\nKutunun boyuna kac bölmeden olustugunu giriniz." << endl;
    cin >> kutu[1];
    cout << "\nKutunun kac katli oldugunu giriniz." << endl;
    cin >> kutu[2];

    kututemp[0] = kutu[0];
    kututemp[1] = kutu[1];
    kututemp[2] = kutu[2];

    cout << "\nKutunun enine bolmeleri arasindaki uzakligi giriniz." << endl;
    cin >> uzaklik[0];
    cout << "\nKutunun boyuna bolmeleri arasindaki uzakligi giriniz." << endl;
    cin >> uzaklik[1];
    cout << "\nKutunun katlari arasindaki uzakligi giriniz." << endl;
    cin >> uzaklik[2];

    cout << "\nKutunun konumunu giriniz. \nX ekseni: " << endl;
    cin >> kutukonum[0];
    cout << "\nY ekseni: " << endl;
    cin >> kutukonum[1];
    cout << "\nZ ekseni: " << endl;
    cin >> kutukonum[2];
    int i=1;
    for(int z=0;z<kututemp[2];z++)
    {
        cout << z+1 << ". Kat" << endl;
        for(int x=0;x<kututemp[0];x++)
        {
            for (int y=0;y<kututemp[1];y++)
            {
                TCP[0] = kutukonum[0];
                TCP[1] = kutukonum[1];
                TCP[2] = kutukonum[2];

                cout << "Robot Kolu " <<"Z : " << TCP[2] << "X : " << TCP[0] << "Y : " << TCP[1] << " Konumundaki Kutu." << endl;
                cout << "Robot Kolu " <<z+1 << ". Kat " << x+1 << ". satir " << y+1 << ". sutundaki kutuya geldi." << endl;
                paletegit(TCP,boyut,palet,boyut2);
                cout << i << ". " <<"Urun Birakildi" << endl;
                i++;


                kutu[1] = kutu[1] + 1 ;
                kutukonum[0] = uzaklik[0] + uzaklik[0];
            }
            kutu[0] = kutu[0] + 1;
            kutukonum[1] = uzaklik[1] + uzaklik[1];
        }
        kutu[2] = kutu[2] + 1;
        kutukonum[2] = uzaklik[2] + uzaklik[2];
    }

    bitis(TCP,boyut,temp,boyut2);
    return 0;
}


