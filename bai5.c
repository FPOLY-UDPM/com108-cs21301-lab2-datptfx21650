/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108_CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    int so1, so2;
int tich;
    float thuong;

    printf("Chương trình tính tích và thương của 2 số\n");
    printf("Nhập số thứ nhất: ");
    scanf("%d", &so1);
    printf("Nhập số thứ hai: ");
    scanf("%d", &so2);

    tich = so1 * so2;
    printf("Tích của 2 số: %d\n", tich);

    if (so2 != 0) {
        thuong = (float)so1 / so2;
        printf("Thương của 2 số: %.2f\n", thuong);
    } else {
        printf("Không thể tính thương vì số thứ hai bằng 0\n");
    }


    return 0;
} 