/******************************************************************************
 * Họ và tên: [Phan Thành Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108_CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    int a,b;
  
  printf("Nhập số thứ nhất: ");
  scanf("%d",&a);

  printf("Nhập số thứ hai: ");
  scanf("%d",&b);
  int tong = a+b;
  int hieu = a-b;
  printf("Diện tích:%d\n",tong);
  printf("Chu vi:%d\n",hieu);
  return 0;

}