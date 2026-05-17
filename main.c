#include <stdio.h>

// chương trình tính tiền cước xe taxi
int main(void) {
    float a , b = 13.5, c = 11 , result ;

    // Yêu cầu người dùng nhập vào khoảng cách di chuyển
    printf("nhap vao khoang cach di chuyen km:");
    scanf("%f", &a);

    // Tính số tiền phải trả

        // 1km đầu tiên giá (giá mở cửa): 15.000VND/km
    if ( a == 1 ) {
        printf("so tien phai tra: 15.000VND\n");
    } else
       // Từ km thứ 2 đến km 10: 13.500VND/km
        if ( a >= 2 && a <= 10) {
         result = a * b;
         printf("so tien phai tra: %.3fVND\n", result);
    } else
       // Từ km thứ 11 trở đi: 11.000VND/km
        if ( a >= 11 && a <= 20 ) {
         result = a * c;
         printf("so tien phai tra: %.3fVND\n", result);
    } else
       // ĐẶT BIỆT: từ 20km trên lên khách hạng được giảm 10% tổng bill
        if ( a >= 21 && a <= 30 ) {
        result = ( a * c ) * 90 / 100;
        printf("so tien phai tra: %.3fVND\n", result);
    } else
        // Nếu khách hàng nhập số km bằng không
         {
        printf("So km khong the thanh toan\n");
    }

    return 0;
}