#include <iostream>
#include "struktur.h"

using namespace std;

int main(){
print "[=============]Simple Text Editor By Fajar Firdaus[=============]\n";
teks nama_file;
print "Masukan Nama file : ";
masuk nama_file;

ofstream f;
f.open(nama_file);
f.close();

print "[=======================================================]\n";    
ofstream asw(nama_file);
if (asw.is_open()){
    teks data;
    do{
        getline(cin,data);
        cout << "- ";
        asw << data << endl;
    }while(data != "'");
    asw.close();
}
return 0;
print "[=======================================================]\n";
}
