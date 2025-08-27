#include <stdio.h>

int main() {
    int x; // กำหนดค่า ของตัวแปร x 
    int y; // กำหนดค่า ของตัวแปร y  

    // รับค่าจากผู้ใช้
    printf("กรอกค่า x: "); // ป้อนค่าที่ต้องการ ของตัวแปร x 
    scanf("%d", &x);
    printf("กรอกค่า y: "); // ป้อนค่าที่ต้องการ ของตัวแปร y 
    scanf("%d", &x);
    scanf("%d", &y);

    // เปรียบเทียบค่า
    if (x > y) { //
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");//แสดงค่า
    }

    return 0;
}