/*Chú thích cho nhiều
dòng một lúc!!
*/
#include<stdio.h>
int main () {
    //Chú thích một dòng
    printf("%d+%d=%d", 12, 12, 12 +12);
    return 0;
}

#include<stdio.h>
int main(){
    printf("12+53=%d", 12+53);
    return 0;
}

// Phép nhân
#include<stdio.h>
int main(){
    printf("23*12=%d", 23*12);
    return 0;
}

// Sử dụng \n để xuống dòng
#include<stdio.h>
int main(){
    printf("Quynh Jame.\n");
    printf("Jame Quynh:");
    return 0;
}

//Viết chương trình để hiển thị các biểu thức sau ra màn hình
/*
2468 + 1234 = {P1}
2468 - 1234 = {P2}
2468 * 1234 = {P3}
2468 / 1234 = {P4}
*/
#include<stdio.h>
int main(){
    printf("2468 + 1234 = %d\n", 2468 + 1234);
	printf("2468 - 1234 = %d\n", 2468 - 1234);
	printf("2468 * 1234 = %d\n", 2468 * 1234);
	printf("2468 / 1234 = %d", 2468 / 1234);
    return 0;
}

// Hiển thị ra màn tổng của a có giá trị 254 và b có giá trị 343
// kết quả in ra màn hình như sau a + b = {P}, {P} là tổng của a+b
#include<stdio.h>
int main(){
    int a = 254;
    int b = 343;
    printf("a + b = %d", a + b);
    return 0;
}

// Hiện thị ra màn hình hiệu của a có giá trị 8343và b có giá trị 6531
// Kết quả in ra màn hình như sau a - b = {P}, {P} là hiệu của a-b
#include<stdio.h>
int main(){
    int a = 8343;
    int b = 6531;
    printf("a - b = %d", a -b);
    return 0;
}
// viết một chương trình khai báo hai biến a,b và gán giá trị cho a=6,b=2
/* Hiển thị ra màn hình các biết thức sau
a + b = {P1} - {P1} là tổng của a+b
a - b = {P2} - {P1} là tổng của a-b
a * b = {P3} - {P1} là tổng của a*b
a / b = {P4} - {P1} là tổng của a/b
*/
#include<stdio.h>
int main(){
    int a = 6;
    int b = 2;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d", a / b);
    return 0;
}

// Viết một chương trình khai báo a,b đó là những số thực
// Gán giá trị cho a = 10.5 và b = 7
// Hiển thị ra màn hình biểu thức sau a / b = {P} - {P} là thương của a/b
#include<stdio.h>
int main(){
    double a = 10.5;
    int b = 7;
    printf("a / b = %f", a / b);
    return 0;
}

// Cho hình chữ nhật có chiều dài là 13.2 và chiều rộng là 7.2
// Hiển thị ra màn hình diện tích của hình chữ nhật
// In ra màn hình biểu thức sau Area = {P} - {P} là diện tích HCN
#include<stdio.h>
int main(){
    double lenght = 13.2;
    double width = 7.2;
    printf("Area = %f", lenght * width);
    return 0;
}
// Hoặc
#include<stdio.h>
int main (){
    printf("Area = %f", 13.2 * 7.2);
    return 0;
}

// Kiểu kí tự ta dùng kiểu dữ liệu char để lưu trữ giá trị dạng kí tự 'a' hoặc 'x'
//Hiện trị ra màn hình dòng kí tự 'a'
#include<stdio.h>
int main (){
    char a = 'x';
    printf("%c", a);
    return 0;
}
// scanf dùng để hỏi giá trị nhập từ bên ngoài
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Tich cua ab la: %d", a*b);
    return 0;
}
//Bạn hãy viết chương trình nhập từ bàn phím chiều dài và chiều rộng của một hình chữ nhật
// (chiều dài và chiều rộng của hình chữ nhật này là một số nguyên) sau đó hiển thị lên màn hình:
#include<stdio.h>
int main(){
    int length, width;
    printf("Moi nhap length va width\n");
    scanf("%d%d", &length, &width);
    printf("Area : %d", length*width);
    return 0;
}

/*
Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím,
bạn hãy viết chương trình hiển thị ra màn hình:
a mod b = {P}
% dùng để lấy sô dư phép chia(số dư của thương)
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap ab");
    scanf("%d%d", &a, &b);
    printf("So du cua thuong ab la: %d", a%b);
    return 0;
}

/*
Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím, 
bạn hãy viết chương trình hiển thị ra các phép tính trên 2 số này:
a + b = {P1}
a - b = {P2}
a * b = {P3}
a / b = {P4}
a mod b = {P5}
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a mod b = %d", a % b);
    return 0;
}
/*
Cho 2 biến kiểu số nguyên a và b được nhập từ bàn phím, 
bạn hãy viết chương trình hoán đổi giá trị của biến a và biến b. Sau đó hiển thị ra màn hình:
Bạn có thể hoán đổi giá trị 2 biến a, b bằng cách tạo ra biến trung gian c giống như sau:
int c = a;
a = b;
b = c;
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    int c = a;
        a = b;
        b = c;
    printf("after swapping, a = %d, b = %d", a, b);
    return 0;
}

/*
Viết chương trình nhập vào bán kính r của một hình tròn 
và hiển thị ra màn hình chu vi của hình tròn đó biết π = 3.14:
Circumference = {P}
Chu vi hình tròn là đường kính nhân pi(2 lần bán kính nhân pi)
*/
#include<stdio.h>
int main(){
    double r;
    printf("Moi nhap r\n");
    scanf("%lf", &r);
    printf("Chu vi hinh tron la: %lf", 2*r*3.14);
    return 0;
}


/*
Bạn hãy viết chương trình nhập vào một ký tự từ bàn phím và 
thực hiện hiển thị ký tự tiếp trong bảng bảng chữ cái của ký tự đó ra màn hình.
Ví dụ nếu bạn nhập
c
thì chương trình sẽ hiển thị ra
d
Như đã được học ở phần Variable Bạn có thể hiển thị ký tự 
tiếp theo của 1 ký tự bằng cách cộng ký tự đó với 1.
*/
#include<stdio.h>
int main(){
    char d;
    printf("Moi nhap ki tu\n");
    scanf("%c", &d);
    d = d + 1;
    printf("%c", d);
    return 0;
}


#include<stdio.h>
int main(){
    char a;
    printf("Moi nhap ki tu\n");
    scanf("%c", &a);
    a = a +1;
    printf("Ki tu tiep theo la: %c", a);
    return 0;
}



// Dùng lệnh Scanf để hỏi nhập giá trị
// Tính trung bình cộng của a,b,c giá trị tùy ý

#include<stdio.h>
int main(){
    double a, b, c;
    
    printf("Moi nhap a\n");
    scanf("%f", &a);
    printf("Moi nhap b\n");
    scanf("%f", &b);
    printf("Moi nhap c\n");
    scanf("%f", &c);
    printf("Trung binh cong la: %f", (a+b+c)/3);
    return 0;
}

// Dùng lệnh if else
#include<stdio.h>
int main(){
    int a = 9;
    int b = 9;
    if (a>b){
        printf("a>b");
    }
    else if (a==b){
        printf("a=b");
    }
    if (a<b){
        printf("a<b");
    }
    
    
    return 0;
}

// Kiểu dữ long long
// In ra màn hình tích của a và b giá trị gnas tùy ý
#include<stdio.h>
int main(){
    long long a;
    long long b;
    printf("Moi nhap a");
    scanf("%lld", &a);
    printf("Moi nhap b");
    scanf("%lld", &b);
    printf("Tich cua ab la: %lld", a * b);
    return 0;
}

// Viết chương trình có 2 biến nhập từ bàn phím
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    printf("Trung binh cong cua ab la: %d", (a+b)/2);
    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n. 
Sau đó kiểm tra xem nếu n là số chẵn thì hiển thị ra:
n is an even number
Ngược lại, nếu n là số lẻ thì hiển thị ra:
n is an odd number
*/
#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("n la so chan");
    }else{
        printf("n la so le");
    }
    return 0;
}


/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và hiển thị ra màn hình:
Nếu n là số nguyên dương thì hiển thị ra:
n is a positive number
Nếu n là số nguyên âm thì hiển thị ra:
n is a negative number
Nếu n = 0 thì hiển thị ra:
n is equal to 0
*/
#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("n la so duong");
    }else if (n == 0){
        printf("n bang 0");
    }
    else{
        printf("n la so am");
    }
    

    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số 2 nguyên a và b. 
Sau đó hiển thị ra màn hình:
Nếu a lớn hơn hoặc bằng b thì hiển thị ra:
a is greater than or equal to b
Ngược lại nếu a nhỏ hơn b thì hiển thị ra:
a is smaller than b
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    if(a >= b){
        printf("a lon hon hoac bang b");
    }else{
        printf("a nho hon b");
    }
    return 0;
}


/*
Viết chương trình nhập từ bàn phím 2 số nguyên a, b. 
Bạn hãy kiểm tra xem giá trị của cả a và b có khác 0 không. Nếu có hiển thị:
a is not equal to 0 and b is not equal to 0
Ngược lại nếu a hoặc b có giá trị bằng 0 thì hiển thị:
a is equal to 0 or b is equal to 0
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    if (a != 0 && b != 0)
    {
        printf("a va b khac 0");
    }else{
        printf("a va b deu bang 0");
    }
    
    return 0;
}

/*
Viết chương trình nhập từ bàn phím 3 số nguyên. 
Sau đó hiển thị lên màn hình số lớn nhất trong 3 số này.
Nếu bạn nhập:
4 7 3
thì màn hình sẽ hiển thị ra:
7
Nếu bạn nhập:
4 4 4
thì màn hình sẽ hiển thị ra:
4
*/
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Moi nhap a, b va c\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >=c){
        printf("%d", a);
    }else if(b >= c){
        printf("%d", b);
    }else{
        printf("%d", c);
    }
    return 0;
}

/*
Viết chương trình nhập từ bàn phím số nguyên a. 
Bạn hãy kiểm tra xem a có nằm trong đoạn [10, 100] không, nếu có thì hiển thị ra màn hình:
{P} is in range (10, 100)
Ngược lại hiển thị ra màn hình:
{P} is not in range (10, 100)
*/
#include<stdio.h>
int main(){
    int a;
    printf("Moi nhap a\n");
    scanf("%a", &a);
    if (a >= 10 && a <= 100)
    {
        printf("%d is in range (10, 100)", a);
    }else{
        printf("%d is not in range (10, 100)", a);
    }
    
    return 0;
}

/*
Viết chương trình nhập từ bàn phím điểm của một học sinh. 
Biết điểm hợp lệ là điểm nằm trong đoạn từ 0 đến 10, 
bạn hãy kiểm tra xem điểm vừa nhập có hợp lệ không, nếu có thì hiển thị ra màn hình:
The score is valid
Ngược lại nếu điểm không hợp lệ thì hiển thị:
The score is not valid
*/
#include<stdio.h>
int main(){
    int score;
    printf("Moi nhap score\n");
    scanf("%d", &score);
    if (score >= 0 && score <=10)
    {
        printf("The score is valid");
    }else{
        printf("The score is not valid");
    }
    
    return 0;
}

/*
Viết chương trình nhập từ bàn phím 3 số nguyên a, b, c. 
Sau đó hãy kiểm tra xem a, b, c có tạo thành một dãy số tăng dần hoặc giảm dần hay không.
Nếu a ≤ b và b ≤ c thì chỉ hiển thị:
increasing
Nếu a ≥ b và b ≥ c thì hiển thị:
decreasing
Ngược lại, nếu không vào 1 trong hai trường hợp trên thì hiển thị:
neither increasing nor decreasing order
*/
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Moi nhap a, b va c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b && b <= c)
    {
        printf("increasing");
    }else if (a >= b && b >= c) {
        printf("decreasing");
    }else{
        printf("neither increasing nor decreasing oder");
    }
    
    return 0;
}


/*
Cho 2 biến kiểu số nguyên a, b và 1 biến kiểu ký tự c. 
Cả 3 biến này đều được được nhập từ bàn phím. 
Biết biến c là 1 trong 4 ký tự '+', '-', '*', '/'. 
Bạn hãy viết chương trình hiển thị giá trị của biểu thức khi áp dụng phép toán c lên a và b. 
Ví dụ nếu bạn nhập a = 7, c = '+', b = 9 như bên dưới:
7 + 9
Thì màn hình sẽ hiển thị ra:
16
*/
#include<stdio.h>
int main(){
    int a, b;
    char c;
    printf("Moi nhap a, b va c\n");
    scanf("%d %c %d", &a, &b, &c);
    switch (c){
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            printf("%d", a / b);
            break;
        default:
            printf("%d", a + b);
    }
    return 0;
}

//Viết menu mời nhập tính diện tích va chu vi hình chữ nhật
#include<stdio.h>
int main(){
    int chon;
    printf("Nhap lua chon\n");
    scanf("%d", &chon);
    switch(chon){
        case 1 :
            printf("Cau lenh A\n");
            break;
        case 2 :
            printf("Cau lenh B\n");
            break;
        case 3 :
            printf("Cau lenh C\n");
            break;
        case 4 :
            printf ("Cau lenh D\n");
            break;
        default :
            printf("khong nhap dung lua chon");
    }
    return 0;
}

// 
#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d", i);
    }
    return 0;
}

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d", i);
	}
	return 0;
}


#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    return 0;
}
// Hiển thị ra màn hình 5 lần 2 dòng chữ Helo Anh Quynh và Xinh chao Anh
#include<stdio.h>
int main(){
    int i;
    for(i = 0; i < 5; i++){
        printf("Helo Anh Quynh\n");
        printf("Xin chao Anh\n");
    }
    return 0;
}

// Hiển thị các số từ 1 đến 25
#include<stdio.h>
int main(){
    int i;
    for(int i = 1; i <= 25; i++){
        printf("%d\n", i);
    }
    return 0;
}

/*
Bạn hãy viết chương trình nhập từ bàn phím số nguyên a và b. 
Sau đó hiển thị ra các số từ a tới b:
Ví dụ nếu nhập a = 5, b = 9 thì chương trình sẽ hiển thị ra màn hình:
5 6 7 8 9 
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        printf("%d", i);
    }
    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n (n >= -5) và thực 
hiện hiển thị các số từ n về -5.
Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:
5 4 3 2 1 0 -1 -2 -3 -4 -5
*/
#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = n; i >= -5; i--){
        printf("%d\n", i);
    }
    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên a và b. 
Sau đó hiển thị ra màn hình tổng các số từ a tới b:
Ví dụ nếu nhập a = 5, b = 9 thì chương trình sẽ hiển thị ra màn hình:
35
*/
#include<stdio.h>
int main(){
    int a, b;
    int sum = 0;
    // sum là biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn gần phải gán giá trị cho sum = 0
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++){
        sum = sum + i;
    }
    printf("Tong cua cac so tu a toi b la: %d", sum);
    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên n và thực hiện 
hiển thị ra tổng các số lẻ từ 0 tới n.
Ví dụ nếu nhập n = 7 thì chương trình sẽ hiển thị ra màn hình:
16
Giải thích: 1 + 3 + 5 + 7 = 16
*/
#include<stdio.h>
int main (){
    int n;
    int sum = 0;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(i % 2 == 1){
            sum = sum + i;
        }
    }
    printf("Tong cua cac so le tu 0 den n la: %d", sum);
    return 0;
}

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // Biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn cần khởi tạo giá trị cho biến = 0
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            // sum += i tương đương với sum = sum + i
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}

/*
Bạn hãy viết chương trình nhập vào từ bàn phím số nguyên a và b. 
Sau đó hiển thị ra màn hình các số chia hết cho 3 từ a tới b:
Ví dụ nếu nhập a = 1, b = 20 thì chương trình sẽ hiển thị ra màn hình:
3 6 9 12 15 18
*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Moi nhap a va b\n");
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i % 3 == 0){
            printf("Cac so chia het cho 3 la: %d\n", i);
        }
    }
    return 0;
}

/*Bạn hãy viết chương trình nhập từ bàn phím số nguyên n và
hiển thị ra màn hình n! (n giai thừa).
Ví dụ nếu nhập n = 5 thì chương trình sẽ hiển thị ra màn hình:
120

Sử dụng factorial để tính giai thừa
*/
#include<stdio.h>
int main(){
    int n;
    int factorial = 1;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }printf("%d", factorial);
    return 0;
}

/*
Bạn hãy viết chương trình nhập từ bàn phím một số nguyên n và 
hiển thị ra màn hình các ước của n (n > 0).
Ví dụ nếu nhập n = 12 thì chương trình sẽ hiển thị ra màn hình:
1 2 3 4 6 12
*/
#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 90; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}

