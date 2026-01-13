/******************************************************************************
 * Họ và tên: [Phan Thanh Đạt]
 * MSSV:      [PS48403]
 * Lớp:       [COM108_CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
  


  int a,b;
  
  printf("Nhập chiều dài: ");
  scanf("%d",&a);

  printf("Nhập chiều rộng: ");
  scanf("%d",&b);
  int dienTich = a*b;
  int chuVi = (a+b)*2;
  printf("Diện tích:%d\n",dienTich);
  printf("Chu vi:%d\n",chuVi);
  return 0;



}