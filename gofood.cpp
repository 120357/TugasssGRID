#include <iostream>
using namespace std;

int main() {
    string nama;
    int h, gopay, pin;
    string menumakan[999];
    int i = 0;
    int total = 0;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan Topup Gopay Anda: ";
    cin >> gopay;

    while (true) {
        cout << "\n--- Menu Makanan ---" << endl;
        cout << "1. Ayam Geprek (10000)" << endl;
        cout << "2. Nasi Goreng (12000)" << endl;
        cout << "3. Tahu Telor (13000)" << endl;
        cout << "0. Jika anda sudah selesai memesan" << endl;
        cout << "Pesanan ke-" << i+1 << " Anda: ";
        cin >> h;


        if (h == 1) {
            total += 10000;
            menumakan[i++] = "Ayam Geprek";
            cout << "Ayam Geprek --Berhasil Ditambahkan\n";
        } 
		else if (h == 2) {
            total += 12000;
            menumakan[i++] = "Nasi Goreng";
            cout << "Nasi Goreng --Berhasil Ditambahkan\n";
        } 
		else if (h == 3) {
            total += 13000;
            menumakan[i++] = "Tahu Telor";
            cout << "Tahu Telor --Berhasil Ditambahkan\n";
        } 
        else if (h == 0) {
		break;
		}
		else if (h != 1||2||3||0) {
            cout << "Menu tidak tersedia.." << endl;
        }
    }


	while(true){ 
    	cout << "\n\n\nMasukkan Pin Anda: ";
    	cin >> pin;
 	   if (pin == 2551) {
 	   		cout <<"\n\n\n\n\n\t----------PESANAN ANDA----------";
    	    cout << "\n\n\tMenu yang dipesan adalah:" << endl;
        	for (int j = 0; j < i; j++) {
            	cout << "\t" << j+1 << ". "<< menumakan[j] << endl;
        	}
        	cout << "\n\tTotal pembayaran: " << total << endl;
        	cout << "\n\tSisa Gopay Anda: " << gopay - total << endl;
        	break;
    	} 
		else {
        	cout << "PIN salah! Coba Lagi" << endl;
        	continue;
    	}
	}

    return 0;
}
