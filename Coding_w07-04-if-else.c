// กรณีใช้ IF ELSE IF
#include <stdio.h>

int main() {
    int level;

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    } 
    else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } 
    else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } 
    else if (level == 4) {
        printf("Diamond Member: All benefits + VIP events\n");
    } 
    else {
        printf("Invalid membership level\n");
    }

    return 0;
}
/*การใช้ if else if เหมาะกับเงื่อนไขที่ซับซ้อน เช่น การเปรียบเทียบระหว่าง ค่าหนึ่ง กับอีก ค่าหนึ่ง เช่น 1<2 3>4 และใช้ได้กับค่าที่มีทศนิยมได้
    การทำงาน เมื่อป้อนค่าแล้วตรงกับเงื่อนไขใดจะแสดงผลของคำสั่งนั้นๆ เช่น ป้อนค่า 3 จะแสดง Platinum Member: 15%% discount + Reward points + Birthday gift
    และหากป้อนค่าที่ไม่อยู่ในเงื่อนไขใดๆเลย จะแสองผล Invalid membership level ที่อยู่ในคำสั่ง else แทน
*/