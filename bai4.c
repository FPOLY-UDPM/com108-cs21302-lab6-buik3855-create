/******************************************************************************
 * Họ và tên: [Bùi đăng khoa]
 * MSSV:      [PS48500]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

#include <stdio.h>

int main() {
    int n, m;
    printf("Nhập số hàng của ma trận: ");
    scanf("%d", &n);
    printf("Nhập số cột của ma trận: ");
    scanf("%d", &m);
    int matrix[n][m];
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma trận sau khi tính bình phương các phần tử:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = matrix[i][j] * matrix[i][j];
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

