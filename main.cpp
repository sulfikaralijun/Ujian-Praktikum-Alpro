#include <iostream>
using namespace std;

int main(){
    // inisiasi variabel
    string label, tokoh;
    int N;
    int ikan[100], tepungSagu[100], gulaAren[100];
    int jumlahIkan = 0, jumlahTepungSagu = 0, jumlahGulaAren = 0;
    int kombinasi = 0;

    // Input data mulai dari label, jumlah tokoh, dan nomor tokoh;
    cout << "Masukkan label: ";
    cin >> label;

    cout << "Masukkan jumlah tokoh: ";
    cin >> N;

    cout << "Masukkan nomor tokoh: ";
    cin >> tokoh;

    for(int i = 0; i < N; i++){
        if(tokoh[i] == '1'){
            ikan[jumlahIkan] = i;
            jumlahIkan++;
        }else if (tokoh[i] == '2'){
            tepungSagu[jumlahTepungSagu] = i;
            jumlahTepungSagu++;
        }else if (tokoh[i] == '3'){
            gulaAren[jumlahGulaAren] = i;
            jumlahGulaAren++;
        }
    }

    for(int i = 0; i < jumlahIkan; i++){
        for(int j = 0; j < jumlahTepungSagu; j++){
            for (int k = 0; k < jumlahGulaAren; k++){
                if (ikan[i] < tepungSagu[j] && tepungSagu[j] < gulaAren[k]){
                    kombinasi++;
                }
            }
        }
    }

    cout << "Kombinasi: " << kombinasi << endl;

  return 0;
}