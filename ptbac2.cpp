#include <bits/stdc++.h>
using namespace std;
void giaiPTBac2(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            cout<<"Phuong trinh vo nghiem!"<<endl;
        } else {
            float x;
            x= -c / b;
            cout<<"Phuong trinh co mot nghiem: x = " << x <<endl;
        }
        return;
    }
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        cout<<"Phuong trinh co 2 nghiem la: x1 = "<<x1<<" va "<<x2<<endl;
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        cout<<"Phong trinh co nghiem kep: x1 = x2 = "<< x1<<endl;
    } else {
        cout<<"Phuong trinh vo nghiem!"<<endl;
    }
}

int main() {
 float a, b, c;
    cout<<"Nhap he so bac 2, a = "<<endl;
    cin>>a;
    cout<<"Nhap he so bac 1, b = "<<endl;
    cin>>b;
    cout<<"Nhap so hang tu do, c = "<<endl;
    cin>>c;
    giaiPTBac2(a, b, c);
    return 1;
}