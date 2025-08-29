
#include <stdio.h>

int main() {
    float score = 45;                         // กำหนดคะแนนสอบ midterm
    float final_score;

    if (score >= 50) {                     // คะแนน มากกว่าหรือเท่ากับ 50
        final_score = score * 1.05 ;       // คิด 5% ของคะแนนที่ได้จริง
    } else {                             //คำสั่ง else จะแสดงผลต่อเมื่อไม่สามารถ เข้าเงื่อนไข if
        final_score = score;            // คะแนนเท่ากับคะแนนที่กำหนด
    }

    printf("Final score: %.2f\n", final_score);
    printf("End of evaluation\n");

    return 0;
}
/*คำสั่ง else คือถ้าหากคะแนนน้อยกว่า ที่ if กำหนด จะแสดงค่า ที่ได้หนด เช่น if หนดที่มากกว่าหรือเท่ากับ 50 แต่คะแนนได้ 45 eles จะแสดงค่า 45 */
