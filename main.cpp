#include <iostream>
using namespace std;

int main() {
char orderChoice;
int foodChoice, drinkChoice;
float foodQuantity, drinkQuantity, totalFood = 0, totalDrink = 0, total;

cout << "------------------------" << endl;
cout << "Selamat datang di Toko Joko!" << endl;
cout << "------------------------" << endl;
cout <<  "Kami tidak pernah meragukan tamu meskipun permintaannya aneh-aneh." << endl;

cout << "Apakah Anda ingin memesan makanan dan minuman? (y/n): ";
cin >> orderChoice;

if (orderChoice == 'y' || orderChoice == 'Y') {

cout << "------------------------" << endl;
cout << "Pilihan Makanan:" << endl;
cout << "1. Bakso 	5.000" << endl;
cout << "2. Ketoprak 	8.000" << endl;
cout << "3. Soto 	7.000" << endl;
cout << "4. Gorengan 	2.000" << endl;
cout << "5. Nasi Padang 	13.000" << endl;
cout << "Masukkan pilihan makanan (1-5), atau 0 untuk melewatkan: ";
cin >> foodChoice;

if (foodChoice != 0) {
cout << "Masukkan jumlah pesanan makanan: ";
cin >> foodQuantity;


if (foodChoice == 1) {
totalFood = 5000 * foodQuantity;
} else if (foodChoice == 2) {
totalFood = 8000 * foodQuantity;
} else if (foodChoice == 3) {
totalFood = 7000 * foodQuantity;
} else if (foodChoice == 4) {
totalFood = 2000 * foodQuantity;
} else if (foodChoice == 5) {
totalFood = 13000 * foodQuantity;
} else {
cout << "Pilihan makanan tidak valid." << endl;
}
}

cout << "------------------------" << endl;
cout << "Pilihan Minuman:" << endl;
cout << "1. Es Teh 	4.000" << endl;
cout << "2. Air Putih 	1.500" << endl;
cout << "3. Kopi 	3.500" << endl;
cout << "4. Es Jeruk 	3.000" << endl;
cout << "5. Teh Hangat 	2.500" << endl;
cout << "Masukkan pilihan minuman (1-5), atau 0 untuk melewatkan: ";
cin >> drinkChoice;

if (drinkChoice != 0) {
cout << "Masukkan jumlah pesanan minuman: ";
cin >> drinkQuantity;

if (drinkChoice == 1) {
totalDrink = 4000 * drinkQuantity;
} else if (drinkChoice == 2) {
totalDrink = 1500 * drinkQuantity;
} else if (drinkChoice == 3) {
totalDrink = 3500 * drinkQuantity;
} else if (drinkChoice == 4) {
totalDrink = 3000 * drinkQuantity;
} else if (drinkChoice == 5) {
totalDrink = 2500 * drinkQuantity;
} else {
cout << "Pilihan minuman tidak valid." << endl;
}
}


total = totalFood + totalDrink;

if (total > 0) {
cout << "Total harga untuk pesanan Anda: " << total << endl;
} else {
cout << "Pesanan Anda tidak valid." << endl;
}

} else {
cout << "Terima kasih, silakan datang kembali." << endl;
}

cout << "Code by : AA•PROJECTS - X RPL" << endl;
return 0;
}
