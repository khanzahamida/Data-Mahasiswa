#include <iostream>
#include <string>
using namespace std;

struct tanggal {
    int hari, bulan, tahun;
};

struct nilai {
    float uts, uas, tugas;
};

struct siswa {
    string nama;
    int umur;
    string jurusan;
    tanggal lahir;
    nilai semester;
};

float NilaiAkhir(nilai semester){
  return (semester.uas*0.4)+(semester.uts*0.35)+(semester.tugas*0.25);
}
void input(int total,siswa pelajar[]){
     for (int j=0;j<total;j++){
        cout << endl;
      cout<<"======MASUKKAN DATA SISWA KE-"<<(j+1)<<" ======"<<endl;

        cout << "masukkan nama anda: "; 
        cin>>pelajar[j].nama;
        cout << "masukkan umur anda: ";
        cin>>pelajar[j].umur;
        cout << "masukkan jurusan anda: ";
        cin>>pelajar[j].jurusan;

        cout << "masukkan tanggal lahir anda: ";
        cin>>pelajar[j].lahir.hari;
        cout << "masukkan bulan lahir anda: ";
        cin>>pelajar[j].lahir.bulan;
        cout << "masukkan tahun lahir anda: ";
        cin>>pelajar[j].lahir.tahun;

        cout << "masukkan nilai uts: ";
        cin>>pelajar[j].semester.uts;
        cout << "masukkan nilai uas: ";
        cin>>pelajar[j].semester.uas;
        cout << "masukkan nilai tugas: ";
        cin>>pelajar[j].semester.tugas;
    }
}
void output(int total,siswa pelajar[]){
        for (int j=0;j<total;j++){
            cout<< endl;
            cout<<"====== DATA SISWA KE-"<<(j+1)<<" ======"<<endl;
            cout << "nama = " << pelajar[j].nama << endl;
            cout<< "umur = " << pelajar[j].umur << endl;
            cout<< "jurusan = " << pelajar[j].jurusan << endl;
            cout << "Tanggal,bulan,lahir "<< "=" << pelajar[j].lahir.hari << "-" << pelajar[j].lahir.bulan << "-" <<pelajar[j].lahir.tahun<<endl;
            cout << "nilai uts: " << pelajar[j].semester.uts << endl;
            cout<< "nilai uas: " << pelajar[j].semester.uas << endl;
            cout<< "nilai tugas: " << pelajar[j].semester.tugas << endl;
            cout << "Uts 35%: " << pelajar[j].semester.uts*0.35 << endl;
            cout << "Uas 40%: " << pelajar[j].semester.uas*0.4 << endl;
            cout<<"tugas 25%: " << pelajar[j].semester.tugas*0.25 << endl;
            cout<<"nilai akhir siswa: "<<NilaiAkhir(pelajar[j].semester)<<endl;
    }
}
int main()
{
    int total;
    cout<<"masukkan jumlah data siswa:";cin>>total;
    siswa pelajar[total];
    input(total, pelajar);
    output(total, pelajar);
    return 0;
}