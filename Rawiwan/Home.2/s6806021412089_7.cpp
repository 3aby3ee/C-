#include <iostream>
using namespace std;

int main(){
    double price, vatRate, vatAmount, totalPrice;

    // รับค่าราคาสินค้า
    cout << "Enter price : ";
    cin >> price;

    // รับค่าอัตราภาษีมูลค่าเพิ่ม
    cout << "Enter vat(%): ";
    cin >> vatRate;

    // คำนวณภาษีมูลค่าเพิ่ม
    vatAmount = price * (vatRate / 100);

    // คำนวณราคารวมภาษี
    totalPrice = price + vatAmount;

    // แสดงผลลัพธ์
    cout << "Net Price of product = " << totalPrice << " Bath" << endl;

    return 0;
}
// 6806021412089 น.ส. รวิวรรณ เชียงดา ITI Sec.C