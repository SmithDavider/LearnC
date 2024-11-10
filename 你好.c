// 头文件包含，提供输入输出功能
//#include 引入标准输入输出库 
#include <stdio.h> 
int main()
{
    /* 我的第一个 C 程序 */
    // 此函数用于输出“Hello, World!”到控制台
    // 文件名: e:\vscode project\test.c
    printf("Hello, World! \n");
 
    // 该文件是一个C语言源代码文件，包含主函数的返回值
    // 返回值0表示程序成功结束
        return 0;
}
//程序的第一行 #include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
//下一行 int main() 是主函数，程序从这里开始执行。
//下一行 /*...*/ 将会被编译器忽略，这里放置程序的注释内容。它们被称为程序的注释。
//下一行 printf(...) 是 C 中另一个可用的函数，会在屏幕上显示消息 "Hello, World!"。
//下一行 return 0; 终止 main() 函数，并返回值 0。
//现在，键入 a.exe来执行程序。
//gcc 命令如果不指定目标文件名时默认生成的可执行文件名为 a.out(linux) 或 a.exe(windows)。

//可用 gcc [源文件名] -o [目标文件名] 来指定目标文件路径及文件名。
//例如，windows 系统上，gcc hello.c -o target/hello 会在 target 目录下生成 hello.exe 文件(Linux 
// 系统生成 hello 可执行文件)，target 目录必须已存在，[源文件名] 和 -o [目标文件名] 的顺序可互换， gcc -o target/hello hello.c 依然有效。