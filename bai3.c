/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108_CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    float r;
    float pi = 3.14;

    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);

    float dienTich = pi * r * r;
    float chuVi = 2 * pi * r;

    printf("Diện tích hình tròn: %.2f\n", dienTich);
    printf("Chu vi hình tròn: %.2f\n", chuVi);

    return 0;


}