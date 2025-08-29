//กรณีใช้ Switch case
#include <stdio.h>

int main() {
    int level[100];

    printf("Enter membership level (1-4): ");
    scanf("%d", &level);
    
    switch (level[100]) {
        case 1:
            printf("Silver Member: 5%% discount\n");
            break;
        case 2:
            printf("Gold Member: 10%% discount + Reward points\n");
            break;
        case 3:
            printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
            break;
        case 4:
            printf("Diamond Member: All benefits + VIP events\n");
            break;
        default:
            printf("Invalid membership level\n");
    }
    return 0;
}
/*การใช้ switch case เหมาะกับเงื่อนไขที่ไม่ซับซ้อน อ่านง่าย และเก็บได้เฉพาะ จำนวนเต็มเท่านั้น
    การทำงาน เมื่อป้อนค่าลงไป แล้วตรงกับคำสั่งใด จะแสดงผลคำสั่งนั้น เช่น ป้อนค่า 2 จะแสดง Gold Member: 10%% discount + Reward points
    และหากค่าที่ป้อนนั้นไม่ตรงกับค่าใดๆเลย จะมี default 
    การมี break ของคำสั่งแต่ละบรรทัดคือการสั่งหยุดทำงานที่คำสั่งนั้น คำสั่งเดียว
*/