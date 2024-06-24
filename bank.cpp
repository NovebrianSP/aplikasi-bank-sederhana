 #include<iostream>
using namespace std;

int j=0,i=0,menu , setor, tarik;
char jawab;
long saldo=10000, historysaldo[20];

void menuutama(){
    system("clear");
    cout<<"|===========================|\n";
    cout<<"|       PT. BANKPERAN       |\n";
    cout<<"|===========================|\n";
    cout<<"   Saldo Anda:Rp. "<<saldo;
    cout<<"\n|===========================|\n";
    cout<<"|       Menu Transaksi      |\n";
    cout<<"|===========================|\n";
    cout<<"| 1. Setor Tabungan         |\n";
    cout<<"| 2. Ambil Tabungan         |\n";
    cout<<"| 3. History Saldo          |\n";
    cout<<"| 4. Exit                   |\n";
    cout<<"|===========================|\n";
    cout<<" Pilih Menu (1/2/3/4) ? : ";
}

void menupenyetoran(){
    system("clear");
    cout<<"|=================================|\n";
    cout<<"|           Menu Penyetoran       |\n";
    cout<<"|=================================|\n";
    cout<<" Jumlah Setor    :Rp. ";cin>>setor;
    saldo=saldo+setor;
}

void menusaldo(){
    system("clear");
    cout<<"|=================================|\n";
    cout<<"|               Saldo             |\n";
    cout<<"|=================================|\n";
    cout<<" Saldo Anda      :Rp. "<<saldo;
    cout<<endl;
}

void menupenarikan(){
    system("clear");
    cout<<"|=================================|\n";
    cout<<"|           Menu Penarikan        |\n";
    cout<<"|=================================|\n";
    cout<<" Jumlah Penarikan :Rp. ";cin>>tarik;
}

void menusaldotidakcukup(){
    system("clear");
    cout<<"|=================================|\n";
    cout<<"| Maaf Saldo Anda Tidak Mencukupi |\n";
    cout<<"|      Saldo Minimal Rp.10000     |\n";
    cout<<"|                                 |\n";
    cout<<"|===========Terima Kasih==========|\n";
}

void tambahhistorysaldo(){
    historysaldo[i]={saldo};
}

void menuhistorysaldo(){
    system("clear");
    cout<<"|=================================|\n";
    cout<<"|          history Saldo          |\n";
    cout<<"|=================================|\n";
    for(j;j<=i;j = j + 1){
        cout << j+1 <<". "<< historysaldo[j]<<endl;
    }
    j = 0;
    cout<<endl;
}

int main()
{

    do
    {
        menuutama();
        tambahhistorysaldo();
        cin>>menu;
        if(menu==1)
        {
            menupenyetoran();
            menusaldo();
            tambahhistorysaldo();
        }
        else if(menu==2)
        {   
            menupenarikan();
            
            if (saldo-tarik<10000)
            {
                menusaldotidakcukup();
            }
            else
            {   saldo=saldo-tarik;
                menusaldo();
                tambahhistorysaldo();
            }
        }
        else if(menu==3)
        { 
            tambahhistorysaldo();
            menuhistorysaldo();
        }
        else if(menu==4)
        { 
            return 0;
        }
        else
        { 
            cout<<"\n\nMenu yang anda inputkan tidak ada \n";
        }
        cout<<"\nKembali ke Menu Utama(Y/T)? : ";
        cin>>jawab;
        i = i + 1;
        }
        while(jawab=='Y'||jawab=='y');
cout<<"\n****** Terima Kasih ******\n";
return 0;
}
