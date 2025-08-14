#include <iostream>
using namespace std;

int main(){
    const double PI = 3.1415; //ประกาศค่าคงที่ที่ไม่สามารถเปลี่ยนได้ ชนิดทศนิยม 
    double radius, area, circumference; //ประกาศตัวแปร 3 ตัว radius → ใช้เก็บค่ารัศมีของวงกลม area → ใช้เก็บค่าพื้นที่ของวงกลม circumference → ใช้เก็บค่าเส้นรอบวงของวงกลม

    cout << "Circle radius (real number) ?";
    cin >> radius;

    area = PI * radius * radius; //คำนวณการหาพื้นท่วงกลม

    circumference = 2 * PI * radius; //เส้นรอบวง

    cout << "Area of circle with radius = " << area << endl;
    cout << "Circumference is = " << circumference << endl; // แสดงผลลัพธ์

    return 0;
}
// 6806021412089 น.ส. รวิวรรณ เชียงดา ITI Sec.C