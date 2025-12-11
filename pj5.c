#include <stdio.h>

int main() {
    // 定义结构体数组
    struct { int x; char y; } z[3] = { {1, 'A'}, {2, 'B'}, {3, 'C'} };
    
    // 计算表达式
    int result = z[1].x + z[2].y;
    
    // 输出详细信息和结果
    printf("z[1].x = %d\n", z[1].x);
    printf("z[2].y = '%c' (ASCII值: %d)\n", z[2].y, z[2].y);
    printf("z[1].x + z[2].y = %d + %d = %d\n", 
           z[1].x, z[2].y, result);
    
    return 0;
}