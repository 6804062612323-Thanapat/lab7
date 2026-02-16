#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
}
/*

a)  functionM(); จะไม่มีค่า return กลับมาเพราะยังไม่ได้เก็บค่าใดในตัวแปร
b)  a = functionM(); ถูกต้อง เเต่ค่าอาจผิด เพราะ a เป็น int แต่ฟังก์ชัน return double
c)  b = functionN(a, b); ถูกต้อง เพราะ พารามิเตอร์  b จะเปลี่ยนค่าเป็นตัวแปร int และฟังก์ชันreturn int
d)  r = functionO(r,a,s,b); ถูกต้อง รับค่าและรีเทิร์นออกมาตรงกัน
e)  s = functionP(a,b,c,d,e); ผิด พารามิเตอร์เกินเพราะพารามิเตอร์ของฟังก์ชันรับแค่ 4 ตัว แต่ส่งไป 5 ตัว
f)  u = functionM(); ถูกต้อง รับค่าเป็น double ตรงกับตัวแปร
g)  c = d + functionN(r,s); ถูกต้อง เพราะ r เปลี่ยนเป็นจำนวนเต็ม
h)  t = s * functionO(r, a, r, a); ถูกต้อง รับค่าdouble มาใส่ตัวแปรที่เป็นdouble
i)  a = v + functionP(r, s, t, t); ถูกต้อง ผลบวกถ้ามีทศนิยมจะเปลี่ยนเป็นจำนวนเต็ม
j)  functionP(functionN(a, a), s, t, t+r); ถูกต้อง พารามิเตอร์ s t และ t+r จะเปลี่ยนเป็นจำนวนเต็ม
k)  v = functionP(functionN(a, a), s, t, t+r); ถูกต้อง

*/

