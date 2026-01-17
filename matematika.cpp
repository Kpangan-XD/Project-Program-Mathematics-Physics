// INCLUDE

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <chrono>

// Variabel Atas atau Using.

using namespace std;
using str = string;
using namespace std::chrono;
const double pi = 3.14159265359;

// pembukaan

void aritmatika();
void bangundatar();
void suhu();
void bangunruang();
void loading();
void catatan();
void biodata();
void rumuslanjutan();
void fisika();
void sistembilangan();

// kalau bentrok sama dibawah

// Void
void open(){
  
}
void buka(){

}

void pembukaan(){ // diganti 
  str nama;
  cout << "======================= C++ MATEMATIKA =======================" << endl;
  cout << "======================= SELAMAT DATANG =======================" << endl;
  cout << "Nama Anda Siapa ? : "; cin >> nama;
  cout << "Oke " << nama << " Siap???" << endl;
  Sleep(3000);
  loading();
}

void loading(){ // overal good
  system("cls");
      cout << "Loading." << endl;
    Sleep(500);
    system("cls");
      cout << "Loading.." << endl;
    Sleep(500);
    system("cls");
      cout << "Loading..." << endl;
    Sleep(500);
    system("cls");
     cout << "Loading." << endl;
    Sleep(500);
    system("cls");
      cout << "Loading.." << endl;
    Sleep(500);
    system("cls");
      cout << "Loading..." << endl;
    Sleep(1000);
    system("cls");
}

void awal() { // dibedahi
  int p;
    cout << " SELAMAT DATANG GES " <<  endl;
    cout << " SILAHKAN PILIH ---  " <<  endl;
    cout << " =================" << endl;
    cout << " 1 : Bangun Datar" <<  endl;
    cout << " 2 : Bangun Ruang " << endl;
    cout << " =================" << endl;
    cout << " 3 : Suhu 4 Jenis " << endl;
    cout << " 4 : Aritmatika" << endl;
    cout << " =================" << endl;
    cout << " 5 : Biodata" << endl;
    cout << " 6 : Catatan Program" << endl;
    cout << " =================" << endl;
    cout << " MASIH TAHAP PEMBUATAN" << endl;
    cout << " 7 : Rumus Lanjutan (TUTUP)" << endl;
    cout << " 8 : Fisika (TUTUP)" << endl;
    cout << " 9 : Sistem Bilangan (TUTUP)" << endl;
    cout << " =================" << endl;
    cout << " Masukkan inputnya : ";
    cin >> p;

    
      switch(p){
        case 1:
        system("cls");
        bangundatar();
        break;
        case 2:
        system("cls");
        bangunruang();
        break;
        case 3:
        system("cls");
        suhu();
        break;
        case 4:
        system("cls");
        aritmatika();
        break;
        case 5:
        system("cls");
        biodata();
        break;
        case 6:
        system("cls");
        catatan();
        break;
        case 7:
        system("cls");
        rumuslanjutan();
        break;
        case 8:
        system("cls");
        fisika();
        case 9:
        system("cls");
        sistembilangan();
        default:
        cout << "Ngawur bgt...." << endl;
        break;
      }
  }
  
void satuan(){ /// LANJUT Senin...
int inp;
cout << "1 : Satuan Panjang (CM)  2 : Satuan Berat (KG) 3 : Satuan Digital (MB) " << endl;
cout << "4 : Satuan Temperatur (^c)" << endl;
cout << "Masukkan Inputnya : "; cin >> inp;
switch(inp){
  case 1:{
    double mm, cm, m, dm, dam, hm, km;
    long double mkm, nm, pm, hasil;
    int inl, ink;
  cout << "1: Pico meter, 2 : Nano Meter 3 : MKM 4 : Mili Mater 5 : CM 6 : Meter" << endl;
  cout << "Masukkan inputnya "; cin >> inl;

  switch(inl){
    case 1: /// Pico meter
    cout << "Masukkan input" << endl;
    break;
    case 2:
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    default:
    cout << "ngaco..." << endl;
    return;
  }
  break;}
  case 2:{
    double mg, cg, dg, g, dag, hg, kg;
  break;}
  case 3:{
  long double b, kb, mb, gb, tb, hasil;
  break;}
  case 4:
  system("cls");
  suhu();
  break;
  default:
  cout << "Ngayal kamu..." << endl;
  return;
}
} 

void aritmatika() { /// LANJUT senin
  double angka1, angka2, hasil;
    int tes;
    cout << "1 : Tambah  2 : Kurang" << endl;
    cout << "3 : Kali    4 : bagi" << endl;
    cout << "5 : ?       6 : ?" << endl;
    cout << "masukan input : ";
    cin >> tes;
    cout << "Masukkan angka 1 : "; cin >>  angka1;
    cout << "Masukkan angka 2 : "; cin >>  angka2;

switch(tes){
    case 1:
    hasil = angka1 + angka2;
    break;
    case 2:
    hasil = angka1 - angka2;
    break;
    case 3:
    hasil = angka1 * angka2;
    break;
    case 4:
    hasil = angka1 / angka2;
    break;
    default:
    cout << "anda pilih : " << tes << endl;
    cout << "pilihan ngaco";
    return;
    }
    cout << "hasilnya : " << hasil << endl;
    cout << "Anda pilih : " << tes << endl;
    
}

void bangundatar() { /// tinggal restorasi, dekorasi.
  int in, out;
  
  
  cout << "=========================================="       << endl;
  cout << "1 : Persegi / Persegi Panjang          " << endl; 
  cout << "2 : Segitiga      3 : jajar genjang     " << endl;
  cout << "4 : Trapesium     5 : Lingkaran       " << endl;
  cout << "6 : layang layang 7 : Belah Ketupat " << endl;
  cout << "==========================================" << endl;
  cout << "Disetiap masing masing bangun datar sudah ada luas/keliling, atau semacamnya !" << endl;
  cout << "Masukkan inputnya : ";
  cin >> out;
  
  switch(out){
    case 1:{ //// PERSEGI / PERSEGI PANJANG
      int ina;
      cout << "Misalnya :" << endl;
      cout << "1 : Persegi  | 2 : Persegi Panjang" << endl;
      cout << "Masukkan inputnya (JANGAN NGACO) : "; cin >> ina;

      switch(ina){
        case 1:{ /// PERSEGI 
          int inb;
        cout << "1 : Luas Persegi | 2 : Keliling Persegi " << endl;
        cout << "cari diagonal sudah ada di l/k          " << endl;
        cout << "Masukkan inputnya : "; cin >> inb;
        switch(inb){
          case 1:{
            int inc;
            cout << "Ingat? Sistem terdapat fitur reverse, gunakan dengan baik!!" << endl;
            cout << "misalnya, ingin mencari luas, maka hanya input sisi saja, \njika ingin mencari sisi, maka harap input luasnya." << endl;
            cout << "Oke gas." << endl;
            cout << "1 : Cari sisi dari luas | 2 : Cari Diagonal  \n3 : Luas " << endl;
            cout << "Masukkan inputnya : "; cin >> inc;
            switch(inc){
              case 1:{
                double luas, sisi, hasil;
                cout << "Masukkan input dari luas (CM) : "; cin >> luas;
                hasil = sqrt(luas);
                cout << "Hasilnya : " << hasil << " cm" << endl;
              break;}
              case 2:{
                double sisi, hasil;
                cout << "Masukkan input dari sisi (CM) : "; cin >> sisi;
                hasil = sisi * sqrt(2);
                cout << "Hasilnya : " << hasil << " cm" << endl; 
              break;}
              case 3:{
                double sisi, hasil;
                cout << "Masukkan input dari sisi (CM) : "; cin >> sisi;
                hasil = pow(sisi, 2);
                cout << "Hasilnya : " << hasil << " cm" << endl;
              break;}
              default:
              cout << "Ngaco...." << endl;
              break;
            }
            
          break;}
          case 2:{
          int inc;
            cout << "Ingat? Sistem terdapat fitur reverse, gunakan dengan baik!!" << endl;
            cout << "misalnya, ingin mencari luas, maka hanya input sisi saja, \njika ingin mencari sisi, maka harap input luasnya." << endl;
            cout << "Oke gas." << endl;
            cout << "1 : Cari sisi dari Keliling | 2 : Cari Diagonal  \n3 : Keliling " << endl;
            cout << "Masukkan inputnya : "; cin >> inc;
            switch(inc){
              case 1:{
                double keliling, sisi, hasil;
                cout << "Masukkan input dari Keliling (CM) : "; cin >> keliling;
                hasil = keliling / 4;
                cout << "Hasilnya : " << hasil << " cm" << endl;
              break;}
              case 2:{
                double sisi, hasil;
                cout << "Masukkan input dari sisi (CM) : "; cin >> sisi;
                hasil = sisi * sqrt(2);
                cout << "Hasilnya : " << hasil << " cm" << endl; 
              break;}
              case 3:{
                double sisi, hasil;
                cout << "Masukkan input dari sisi (CM) : "; cin >> sisi;
                hasil = sisi * 4;
                cout << "Hasilnya : " << hasil << " cm" << endl;
              break;}
              default:
              cout << "Ngaco...." << endl;
            break;}
      break;} 
        }
        break;}
        case 2:{ /// PERSEGI PANJANG
          int ind;
          cout << "Misalnya :" << endl;
          cout << "1 : Luas   | 2 :  Keliling \n3: Diagonal " << endl;
          cout << "Masukkan inputnya (JANGAN NGACO) : "; cin >> ind;
          switch(ind){
            case 1:{ ///luas
              double luas, pnjg, lebar, hasil;
              int out;
              cout <<"misalnya ingin menghitung luas, cukup input p, l. \nkalau ingin mencari panjang atau lebar, cukup menginput satunya." << endl;
              cout << "Cukup input yang anda butuhkan.." << endl;
              cout << "Masukkan input luas (CM) : "; cin >> luas;
              cout << "Masukkan input Panjang (CM) : "; cin >> pnjg;
              cout << "Masukkan input lebar (CM) : "; cin >> lebar;
              
              if (luas == 0 && lebar != 0 && pnjg != 0){
                luas = pnjg * lebar;
                cout << "Hasilnya : " << luas << " cm" << endl;
              } else if (pnjg == 0 && lebar != 0 && luas != 0){
                pnjg = luas / lebar;
                cout << "Hasilnya : " << pnjg << " cm" << endl;
              } else if ( lebar == 0 && pnjg != 0 && luas != 0){
                lebar = luas / pnjg;
                cout << "Hasilnya : " << lebar << " cm" << endl;
              } else {
                cout << "hadeh..." << endl;
              }
            break;}
            case 2:{
            double keliling, pnjg, lebar, hasil;
              int out;
              cout <<"misalnya ingin menghitung keliling, cukup input p, l. \nkalau ingin mencari panjang atau lebar, cukup menginput satunya." << endl;
              cout << "Cukup input yang anda butuhkan.." << endl;
              cout << "Masukkan input keliling (CM) : "; cin >> keliling;
              cout << "Masukkan input Panjang (CM) : "; cin >> pnjg;
              cout << "Masukkan input lebar (CM) : "; cin >> lebar;
              
              if (keliling == 0 && lebar != 0 && pnjg != 0){
                keliling = 2 * (pnjg + lebar);
                cout << "Hasilnya : " << keliling << " cm" << endl;
              } else if (pnjg == 0 && lebar != 0 && keliling != 0){
                pnjg = (keliling / 2)  - lebar;
                cout << "Hasilnya : " << pnjg << " cm" << endl;
              } else if ( lebar == 0 && pnjg != 0 && keliling != 0){
                lebar = (keliling / 2 ) - pnjg;
                cout << "Hasilnya : " << lebar << " cm" << endl;
              } else {
                cout << "hadeh..." << endl;
            break;}}
            case 3:{
              double pnjg, lebar, dg;
              cout << "DIAGONAL------" << endl;
              cout << "Masukkan Inputnya panjang (CM) : "; cin >> pnjg;
              cout << "Masukkan Inputnya lebar (CM) : "; cin >> lebar;

              dg = sqrt((pnjg * pnjg) + (lebar * lebar));
              cout << "Hasilnya : " << dg << " cm" << endl;

            break;}

            
          default:
          cout << "ngacoo..." << endl;
          break;
        }
        break;}
        default:
        cout << "ngaco..." << endl;
        break;}
    break;}
    case 2:{ //// SEGITIGA
      int ink;
        cout << "1 : Luas  2 : keliling" << endl;
        cout << "Masukkan inputnya"; cin >> ink;
        if (ink == 2){
          double s1, s2, s3, hasil;
          cout << "Masukkan sisi satu : "; cin >> s1;
          cout << "Masukkan sisi dua  : "; cin >> s2;
          cout << "Masukkan sisi tiga : "; cin >> s3;
          hasil = s1 + s2 + s3;
          cout << "hasilnya : " << hasil << " cm" << endl;
          } else if (ink == 1){
            double a, t, hasil;
            cout << "Masukkan alasnya : "; cin >> a;
            cout << "Masukkan tingginya : "; cin >> t;
            hasil = (1.0/2.0) * a * t;
            cout << "Hasilnya : " << hasil << " cm" << endl;
          } else {
            cout << "ngaco...." << endl;
    
    
    
    break;}
    case 3:{ //// JAJAR GENJANG
      double a, t, alas, sj, sm,  tinggi, sjajar, smiring, luas, keliling, l, k, hasil;
      int inj;
      cout << "===============" << endl;
      cout << "1 : Luas | 2 : Keliling" << endl;
      cout << "Masukkan inputnya : "; cin >> inj;
      if (inj == 1){
        cout << "Masukkan Input Alas (CM) : "; cin >> a;
        cout << "Masukkan Input Tinggi (CM) : "; cin >> t;
        cout << "Masukkan Input Luas (CM) : "; cin >> luas;
        hasil = a * t;
        alas = luas / t;
        tinggi = luas / a;
        if (luas == 0 && a != 0 && t != 0){
          cout << "Hasilnya : " << hasil << " cm" << endl;
        } else if (a == 0 && luas != 0 && t != 0){
          cout << "Hasilnya : " << alas << " cm" << endl;
        } else if (t == 0 && luas != 0 && a != 0){
          cout << "Hasilnya : " << tinggi << " cm" << endl;
        } else {
          cout << "ngaco............" << endl;
      }
      } else if (inj == 1){
        cout << "==========" << endl;
        cout << "Masukkan input sisi sejajar (CM) : "; cin >> sjajar;
        cout << "Masukkan input sisi miring (CM) : "; cin >> smiring;
        cout << "Masukkan input keliling (CM) : "; cin >> k;
        k = 2 * (sjajar + smiring);
        sj = (k / 2) - sm;
        sm = (k / 2) - sj;
        if (k == 0 && sm != 0 && sj != 0){
          cout << "Hasilnya : " << k << " cm" << endl;
        } else if (smiring == 0 && k != 0 && sj != 0){
          cout << "Hasilnya : " << sm << " cm" << endl;
        } else if (sjajar == 0 && k != 0 && sm != 0){
          cout << "Hasilnya : " << sj << " cm" << endl;
        } else {
          cout << "ngaco............" << endl;
      }
      }
    break;}
    case 4:{ /// Trapesium
    double a, b, c, d, t, l, k, hasil;
    double ab, bc, cd, de, luas, kel;
    int ink;
    cout << "============" << endl;
    cout << "1 : Luas | 2 : Keliling" << endl;
    cout << "Masukkan inputnya : "; cin >> ink;
    if (ink == 1){
      cout << "Masukkan Inputnya sisi sejajar (A) (CM) : "; cin >> a;
      cout << "Masukkan Inputnya sisi sejajar (B) (CM) : "; cin >> b;
      cout << "Masukkan Inputnya tinggi (CM) : "; cin >> t;
      cout << "Masukkan Inputnya luas (CM) : "; cin >> l;
      luas = 0.5 * ( a + b) * t;
      ab = (2 * l) / t;
      hasil = (2 * l) / (a + b);
      if (l == 0 && a != 0 && b != 0 && t != 0){
          cout << "Hasilnya : " << luas << " cm" << endl;
        } else if (a == 0 && b == 0 && l != 0 && t != 0){
          cout << "Hasilnya : " << ab << " cm" << endl;
        } else if (t == 0 && b != 0 && a != 0 && l != 0){
          cout << "Hasilnya : " << hasil << " cm" << endl;
        } else {
          cout << "ngaco............" << endl;
      }
    } else if (ink == 2){
      cout << "Masukkan Inputnya sisi (A) (CM) : "; cin >> a;
      cout << "Masukkan Inputnya sisi (B) (CM) : "; cin >> b;
      cout << "Masukkan Inputnya sisi (C) (CM) : "; cin >> c;
      cout << "Masukkan Inputnya sisi (D) (CM) : "; cin >> d;
      cout << "==== gabisa di reverse..." << endl;
      k = a + b + c + d;
      cout << "Hasilnya : " << k << " cm" << endl;
    }
    break;}
    case 5:{ //// LINGKARAN
    
      int ina;
    cout << "Pilih ===" << endl;
    cout << "1 : Luas | 2 : Keliling" << endl;
    cout << "Diagonal ada di nomor 2" << endl;
    cout << "Masukkan inputnya : "; cin >> ina;
    if (ina == 1){
      double r, l, luas, hasil;
      cout << "Masukkan Inputnya jari jari (CM) : "; cin >> r;
      cout << "Masukkan inputnya luas (CM) : "; cin >> l;
      luas = pi * r * r;
      hasil = sqrt(luas / pi);
      if (l == 0 && r != 0 ){
        cout << "Hasilnya : " << luas << " cm" << endl;
      } else if (r == 0 && l != 0){
        cout << "Hasilnya : " << hasil << " cm" << endl;
      } else {
        cout << "keluar mamang" << endl;
      }
    } else if (ina == 2){
      double r, d, hasil, kel, k, inp;
      cout << "1 : Keliling | 2 : Diagonal (Langsung hitung keliling !)" << endl;
      cout << "Masukkan inputnya : "; cin >> inp;
      if (inp == 1){
        cout << "Masukkan inputnya jari jari (CM) : "; cin >> r;
        cout << "Masukkan inputnya keliling (CM) : "; cin >> k;
        kel = 2 * pi * r;
        hasil = k / (2 * pi);
        if(k == 0 && r != 0){
          cout << "Hasilnya : " << kel << " cm" << endl;
        } else if(r == 0 && k != 0){
          cout << "Hasilnya : " << hasil << " cm" << endl;
        } else {
          cout << "Keluar kamu.." << endl;
        }
      } else if (inp == 2){
        int inj;
        cout << "1 : Cari diameter (LGSG KE RUMUS KALAU SUDAH) \n2 : Keliling pakai Diagonal" << endl;
        cout << "Masukkan inputnya : "; cin >> inj;
        if (inj == 1){
          cout << "Masukkan jari jarinya (CM) : "; cin >> r;
          d = 2 * r;
          k = pi * d;
          cout << "Hasilnya = Diagonal : " << d << " cm | Keliling :  " << k << " cm" << endl;
        } else if ( inj == 2){
          cout << "Masukkan Diagonal nya : "; cin >> d;
          k = pi * d;
          cout << "Hasilnya : " << k << " cm" << endl;
        } else {
          cout << "TAK PEDULI" << endl;
        }
      }
    }
    break;}
    case 6:{ //// LAYANG LAYANG
    double d1, d2, l, k, sa, sb, hasil;
    double s1, s2, ds, dd, luas, kel;
    int ina;
    cout << "=======================" << endl;
    cout << "1 : Luas | 2 : Keliling" << endl;
    cout << "Masukkan inputnya : "; cin >> ina;
    if (ina == 1){
      cout << "Masukkan Input Diagonal (SATU) (CM) : "; cin >> d1;
      cout << "Masukkan Input Diagonal (DUA) (CM) : "; cin >> d2;
      cout << "Masukkan Input Luas (CM) : "; cin >> l;
      luas =  0.5 * d1 * d2;
      ds = (2 * l) / d2;
      dd = (2 * l) / d1;
      if (l == 0 && d1 != 0 && d2 != 0){
        cout << "Hasilnya : " << luas << " cm" << endl;
      } else if (d1 == 0 && l != 0 && d2 != 0){
        cout << "Hasilnya : " << ds << " cm" << endl;
      } else if (d2 == 0 && l != 0 && d1 != 0){
        cout << "Hasilnya : " << dd << " cm" << endl;
      } else {
        cout << "NGACOO......." << endl;
      }
    } else if (ina == 2){
      cout << "Masukkan Input Sisi (A) (CM) : "; cin >> sa;
      cout << "Masukkan Input Sisi (B) (CM) : "; cin >> sb;
      cout << "Masukkan Input Keliling (CM) : "; cin >> k;
      kel =  2 * (sa + sb);
      s1 = (k / 2) - sb;
      s2 = (k / 2) - sa;
      if (k == 0 && sa != 0 && sb != 0){
        cout << "Hasilnya : " << kel << " cm" << endl;
      } else if (sa == 0 && k != 0 && sb != 0){
        cout << "Hasilnya : " << s1 << " cm" << endl;
      } else if (sb == 0 && k != 0 && sa != 0){
        cout << "Hasilnya : " << s2 << " cm" << endl;
      } else {
        cout << "NGACOO......." << endl;
      }
    } else {
      cout << "NGACOOO" << endl;
    }
    break;}
    case 7:{ /// BELAH KETUPAT
      double d1, d2, s, l, k, hasil;
      double ds, dd, ss, luas, kel;
      int inl;

      cout << "===================" << endl;
      cout << "1 : Luas \n2 : Keliling" << endl;
      cout << "Masukkan Inputnya : "; cin >> inl;

      if (inl == 1){
      cout << "Masukkan Inputnya diagonal (satu) dan diagonal (dua) (CM) : "; cin >> d1 >> d2;
      cout << "Masukkan Inputnya Luas (CM) : "; cin >> l;
      luas =  0.5 * d1 * d2;
      ds = (2 * l) / d2;
      dd = (2 * l) / d1;
      if (l == 0 && d1 != 0 && d2 != 0){
        cout << "Hasilnya : " << luas << " cm" << endl;
      } else if (d1 == 0 && l != 0 && d2 != 0){
        cout << "Hasilnya : " << ds << " cm" << endl;
      } else if (d2 == 0 && l != 0 && d1 != 0){
        cout << "Hasilnya : " << dd << " cm" << endl;
      } else {
        cout << "NGACOO......." << endl;
      }

      } else if (inl == 2){
        cout << "Masukkan inputnya sisi (CM) : "; cin >> s;
        cout << "Masukkan inputnya Keliling (CM) : "; cin >> k;
        kel = 4 * s;
        ss = k / 4;

        if (k == 0 && s != 0){
        cout << "Hasilnya : " << kel << " cm" << endl;
      } else if (s == 0 && k != 0){
        cout << "Hasilnya : " << ss << " cm" << endl;
      } else { 
        cout << "NGACOOO" << endl;
      }

      } else {
        cout << "NGACOO........" << endl;
      }

    break;}


    default:
    cout << "balik lu mamang" << endl;
    break; 
}
}
}
void suhu() { // sudah sempurna, tingal dekorasi
  int input, hasil;
  
  double c, k, r, f, all;
  system("cls");
  cout << "Jika anda menginput dari 1-3 kategori suhu, terminal akan lgsg menerjemahkan nya 3 sekaligus. paham?" << endl;
  cout << "1 : Celcius 2 : Kelvin  3 : Fahrenheit 4 : Reamur ";
  cin >> input;
  cout << "Suhu apa yang anda input ?";
  cin >> all;
  switch (input) {
    case 1:  /// celcius
    k = all + 273.15;
    r = all * 0.8;
    f = 32 + (all * 1.8);
    c = all;
    cout << "hasilnya = K = " << k << " K" << "| R = " << r << " R" << "| F = " << f << " F"  << "| C = " << c << " c" << endl;
    break;
    case 2: /// Kelvin
    c = all - 273.15;
    r = (all - 273.15) * 0.8;
    f = (all - 273.15) + 32 * 1.8;
    k = all;
    cout << "hasilnya = K = " << k << " K" << "| R = " << r << " R" << "| F = " << f << " F"  << "| C = " << c << " c" << endl;
    break;
    case 3: /// fahrenheit
    c = (all - 32) * (5.0/9.0);
    r = (all - 32) * (4.0/9.0);
    k = (all - 32) * (5.0/9.0) + 273.15;
    f = all;
    cout << "hasilnya = K = " << k << " K" << "| R = " << r << " R" << "| F = " << f << " F"  << "| C = " << c << " c" << endl;
    break;
    case 4: /// reamur
    c = (5.0/4.0) * all;
    f = ((9.0/4.0) * all) + 32;
    k = ((5.0/4.0) * all) + 273.15;
    r = all;
    cout << "hasilnya = K = " << k << " K" << "| R = " << r << " R" << "| F = " << f << " F"  << "| C = " << c << " c" << endl;
    break;
    default:
    return;
  }
  
  }

void bangunruang(){ // sempurna, dekorasi lanjut..

int inp;
cout << "1 : Kubus            2 : Balok    " << endl;
cout << "3 : Tabung           4 : Kerucut  " << endl;
cout << "5 : Limas segi bebas 6 : Prisma bebas " << endl;
cout << "7 : Bola             8 : ?" << endl;
cout << "Masukkan inputnya : "; cin >> inp;


switch(inp){
  case 1:{
    int inp;
    cout << "1 : LP(6xs^2) 2 : Volume  " << endl;
    cout << "mana yang mau di input? : "; cin >> inp;
    switch(inp){
      case 1:{
      double s, hasil;
      cout << "Masukkan sisinya : "; cin >> s;
      hasil = 6 * (s * s);
      cout << "Hasilnya : " << hasil << " cm" << endl;
      break;}
      case 2:{
        double s, hasil;
        cout << "Masukkan sisinya : "; cin >> s;
        hasil = pow (s, 3);
        cout << "Hasilnya : " << hasil << " cm" << endl;
      break;}
      default:
      cout << "Udah salah woy " << endl;
      return;
      break;}
      break;}
    case 2:{
      int inp;
      cout << "1 : LP 2 : Volume " << endl;
      cout << "Apa inputnya ?  : "; cin >> inp;

      if (inp == 1){
        double p, l, t, hasil;
        cout << "Masukkan Panjang inputnya : "; cin >> p;
        cout << "Masukkan Lebar Inputnya : "; cin >> l;
        cout << "Masukkan Tinggi Inputnya : "; cin >> t;
        hasil = 2 * ((p * l) + (p * t) + (l * t));
        cout << "Hasilnya : " << hasil << " cm" << endl;
      } else if (inp == 2) {
        double p, l, t, hasil;
        cout << "Masukkan input p : "; cin >> p;
        cout << "Masukkan input l : "; cin >> l;
        cout << "Masukkan input t : "; cin >> t;
        hasil = p * l * t;
        cout << "Hasilnya : " << hasil << " cm" << endl;
      } else {
        cout << "Kurang ajar" << endl;
        break;
      }
      break;}
    case  3: {
    int inp;
    cout << "1 : LP   2 : Volume  " << endl;
    cout << "Apa Inputnya     : "; cin >> inp;

    if (inp == 1){
      double r, t, hasil;
      cout << "Masukkan jari alas    : "; cin >> r;
      cout << "Masukkan Tinggi nya   : "; cin >> t;
      hasil = 2 * pi * r * (r + t);
      cout << "Hasilnya : " << hasil << " cm" << endl;
    }else if (inp == 2){
      double r, t;
      double hasil;
      cout << "Masukkan jari alas : "; cin >> r;
      cout << "Masukkan tingginya : "; cin >> t;
      hasil = pi * pow(r, 2) * t;
      cout << "Hasilnya : " << hasil << " cm" << endl;
    break;}}
    case 4:{
    int inp;
    double r, t, s;
    double hasil;
    cout << "1 : LP Kerucut  2 : Volume Kerucut  3 : Garis Pelukis Kerucut. " << endl;
    cout << "Masukkan inputnya : "; cin >> inp;
    switch(inp){
      case 1:
      cout << "Harap sudah menghitung Total Garis Pelukis" << endl;
      cout << "Masukkan Jari - Jari : "; cin >> r;
      cout << "Masukkan Total Garis Pelukis : "; cin >> s;
      hasil = pi * r * (r + s);
      cout << "Hasilnya : " << hasil << " cm" << endl;
      break;
      case 2:
      cout << "Harap sudah menghitung total garis pelukis" << endl;
      cout << "Masukkan jari jarinya : "; cin >> r;
      cout << "Masukkan Total Garis Pelukis : "; cin >> s;
      hasil = (1.0/3.0) * pi * pow(r, 2) * t;
      cout << "Hasilnya : " << hasil << " cm" << endl;
      case 3:
      double r, t, hasil;
      cout << "Masukkan jari jari : "; cin >> r;
      cout << "Masukkan tinggi : "; cin >> t;
      hasil = sqrt((r * r) + (t * t)); 
      cout << "Hasilnya : " << hasil << " cm" << endl;
      default:
      cout << "Ngaco bat sumpah..." << endl;
      return;
    }
    break;}
    case 5:{
      int inp;
      cout << " 1 : LP Limas 2 : Volume Limas " << endl;
      cout << "Masukkan inputnya : "; cin >> inp;
      if (inp == 1){
        double la, ls, hasil;
        cout << "Masukkan Luas alas : "; cin >> la;
        cout << "Masukkan Luas Selimut : "; cin >> la;
        hasil = la + ls;
        cout << "Hasilnya : " << hasil << "cm" << endl;
      } else if (inp == 2){
        double la, t, hasil;
        cout << "Masukkan Luas alas : "; cin >> la;
        cout << "Masukkan Tinggi nya : "; cin >> t;
        hasil = (1.0/3.0) * la * t;
        cout << "Hasilnya : " << hasil << "cm" << endl;
      } else {
        cout << "ada yang ngaco " << endl;
        return;
      }
    break;}
    case 6:{
    int inp;
    cout << "1 : LP Prisma  2 : Volume Prisma" << endl;
    cout << "Masukkan inputnya : "; cin >> inp;
    if (inp == 1){
      int inl;
      cout << "1 : hanya luas alas dan selimut 2 : hitung dengan siku siku . " << endl;
      cout << "Masukkan inputnya : "; cin >> inl;
      if (inl == 1){
      double la, ls, hasil;
      cout << "Masukkan Luas alas : "; cin >> la;
      cout << "Masukkan Luas Selimut : "; cin >> ls;
      hasil = (2 * la) + ls;
      cout << "Hasilnya : " << hasil << " cm" << endl;
      } else if (inl == 2){
        double la, ls, t, ks, hasil;
        cout << "Masukkan luas alas  : "; cin >> la;
        cout << "Masukkan luas selimut : "; cin >> ls;
        cout << "Masukkan tinggi nya : "; cin >> t;
        cout << "Masukkan siku siku nya : "; cin >> ks;
        hasil = (2 * la) + (ks * t);
        cout << "Hasilnya : " << hasil << "cm" << endl;
      } else { 
        cout << "ngawurr.. " << endl;
        return;
      }
    } else if (inp == 2) { 
      double la, t, hasil;
      cout << "Masukkan luas alas : "; cin >> la;
      cout << "Masukkan tingginya : "; cin >> t;
      hasil = la * t;
      cout << "Hasilnya" << hasil << " cm" << endl;
    }
    break;}
    case 7:{
      int inp;
      double r, hasil;
      cout << "1 = LP Bola  2 : Volume Bola  3 : Volume Setengah Bola" << endl;
      cout << "Masukkan inputnya : "; cin >> inp;
      switch(inp) {
        case 1:
        cout << "Masukkan jari jarinya : "; cin >> r;
        hasil = 4 * pi * (r * r);
        cout << "Hasilnya : " << hasil << " cm" << endl;
        break;
        case 2:
        cout << "Masukkan jari jarinya : "; cin >> r;
        hasil = (4.0/3.0) * pi * pow(r,3);
        cout << "Hasilnya : " << hasil << " cm" << endl;
        break;
        case 3:
        cout << "Masukkan jari jarinya : "; cin >> r;
        hasil = (2.0/3.0) * pi * r;
        cout << "Hasilnya : " << hasil << " cm" << endl;
        break;
        default:
        cout << "ngotak su..." << endl;
        break;
      }

    break;}
    default:
    cout << "Ngaco bat...." << endl;
    break;
}}

void rumuslanjutan(){
  int inp;
  cout << "Ini Rumus lanjutan dari Matematika, jadi semua rumus lanjutan ya disini mamang." << endl;
  cout << "1 : Segitiga Lanjutan 2 : " << endl;
  cout << "=============================" << endl;
  cout << "MASIH TAHAP PEMBUATAN" << endl;
  cout << "Masukkan Inputnya : "; cin >> inp;

  switch(inp){
    case 1:{
      int inl;
    cout << "Segitiga Lanjutan, lengkap dari segitiga biasa atau macam macam, terdapat juga pythagoras." << endl;
    cout << "1 : Segitiga biasa  2 : Segitiga Siku Siku  3 : Segitiga Sembarang" << endl;
    cout << "4 : Pythagoras      5 : Segitiga Sama Kaki  6 : Segitiga Sama Kaki" << endl;
    cout << "7 : Rumus Heron     8 :                     9 : Segitiga Trigonometri" << endl;
    cout << "Masukkan inputnya "; cin >> inl;
    switch(inl){
      case 1:{
        double a, t;
            int ink;
            cout << "1 : Luas  2 : keliling" << endl;
            cout << "Masukkan inputnya"; cin >> ink;
            if (ink == 2){
              double s1, s2, s3, hasil;
              cout << "Masukkan sisi satu : "; cin >> s1;
              cout << "Masukkan sisi dua  : "; cin >> s2;
              cout << "Masukkan sisi tiga : "; cin >> s3;
              hasil = s1 + s2 + s3;
              cout << "hasilnya : " << hasil << " cm" << endl;
              } else if (ink == 1){
                double a, t, hasil;
                cout << "Masukkan alasnya : "; cin >> a;
                cout << "Masukkan tingginya : "; cin >> t;
                hasil = (1.0/2.0) * a * t;
                cout << "Hasilnya : " << hasil << " cm" << endl;
              } else{
                cout << "ngaco...." << endl;
        
          
          break;}

      

    }

    
    case 2:
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    case 7:
    break;
    default:
    cout << "Input salah...." << endl;
    return;
  }}}
}

void biodata(){
  

cout << " =======================================================================================================" << endl;
cout << " = NAMA : Kpangan_Zkxfsd  || BIMA                                                                      =" << endl;
cout << " = SKILL : C++ Junior // Troubleshooting                                                               =" << endl;
cout << " = KELAS : X RPL 3                                                                                     =" << endl;
cout << " = LTSC 2021 || I3 1315U                                                                               =" << endl;
cout << " = IoT && OOP -> Learning                                                                              =" << endl;
cout << " = Virtualization && Experimental                                                                      =" << endl;
cout << " =======================================================================================================" << endl;  

}

void fisika(){

}

void sistembilangan(){
  
}

void catatan(){

cout << "[x] jangan pernah menginput diluar yang disuruh program !!! " << endl;
cout << "[Y] Jika input (N/n) maka program akan keluar" << endl;
cout << "[INFO] Program sudah tahap v1.1 \nUpdate dari Fisika, Rumus Lanjutan dan dll. \nTunggu Updatenya ya !!" << endl;
cout << "[x] Program kadang ada bug, tolong kasih tahu !" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "" << endl;
cout << "[//] Masih tahap awal !!" << endl;  
}
// Int main()

int main(){
char p;


    /// hitung
    do{
    auto start = high_resolution_clock::now();
    open();
    buka();
    auto menu_siap = high_resolution_clock::now();
    
    /// hitung waktu dari buka program
    buka();
    awal();
    /// alat hitung dimatikan
    auto stop = high_resolution_clock::now();
    /// alat hitung waktu dari buka program di kurangkan oleh alat hitung
    auto startup = duration_cast<milliseconds>(menu_siap - start);
    /// alat hitung waktu dikurangkan oleh alat hitung waktu dimatikan
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Selesai dalam " << duration.count() << " s" << endl;
    cout << "Kecepatan Dalam buka Program " << startup.count() << " ms" << endl;
    cout << "Ketik n/N akan keluar..." << endl;
    cout << "Apakah masih ingin menggulang ? (y/Y) : "; cin >> p;
    system("cls");
    } while(p == 'y' || p == 'Y');
    cout << "Oke Goodbye..." << endl;
    



    return 0;
}


