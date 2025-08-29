#include <stdio.h>
int main()
{
    int level;
    printf("Enter level (1-4): "); //แสดงค่าที่ป้อน
    scanf("%d", &level); //ป้อนค่าที่ต้องการ

    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    }
    else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    }
    else {
        switch (level)
        {
        case 1: printf("Beginner\n"); break;
        case 2: printf("Intermediate\n"); break;
        case 3: printf("Advanced\n"); break;
        case 4: printf("Expert\n"); break;
        }
    }
    return 0;
}
/*หากป้อนค่าแล้วตรงกับเงื่อนไข if จะเเสดงผล ของ if เช่น -4 จะแสดง The level below 1 is not allowed
หากป้อนค่าแล้วไม่ตรงกับเงื่อนไข if จะแสดงผล ของคำสั่ง else if โดยมีค่า(1-4) และมีคำสั่ง switch อยู่ในเงื่อนไขด้วย เช่่น ป้อนค่า 1 ไปจะแสดงผลที่ case 1: print (Beginner) 
และหากป้อนค่าที่มากกว่า 4 จะแสดงผล ของเงื่อนไข else if โดยแสดงผล  The level above 4 is not allowed
break จะทำงานก็ต่อเมื่อเจอคำสั่งที่ตรงกัน โดยการทำงานเป็นลักษณะการหยุดทำงาน
*/