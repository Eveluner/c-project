#include <stdio.h>
#include <float.h>  // 包含浮点数限制常量

int main() {
    // 声明浮点数
    float f1 = 3.14f;      // f后缀表示float类型
    double d1 = 3.1415926;  // 默认是double类型
    long double ld1 = 3.14159265358979L;  // L后缀表示long double
    
    // 科学计数法表示
    double d2 = 1.23e4;    // 1.23 × 10^4 = 12300.0
    double d3 = 1.23e-4;   // 1.23 × 10^-4 = 0.000123
    
    // 查看浮点数特性
    printf("float 精度: %d 位小数\n", FLT_DIG);
    printf("double 精度: %d 位小数\n", DBL_DIG);
    printf("float 最大值: %e\n", FLT_MAX);
    printf("double 最大值: %e\n", DBL_MAX);
    
    return 0;
}