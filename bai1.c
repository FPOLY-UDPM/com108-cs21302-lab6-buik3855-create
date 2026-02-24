/******************************************************************************
 * Họ và tên: [BÙI ĐĂNG KHOA]
 * MSSV:      [PS48500]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 

#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Trung binh tong cac so chia het cho 3: %.2f\n", average);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    return 0;
}

