#include <iostream>

using std::cout;

int main(int argc, char* argv[], char* envp[])
{
    int i = 0;
    for (; i < argc; ++i)//顺序打印主函数参数
        cout << "argv[" << i << "] = " << argv[i] << endl;
    
    for (i = 0, char** penv = envp; *penv != nullptr; ++penv)//顺序打印shell传给main函数的环境变量
        cout << "envp[" << i++ << "]" << *penv << endl;
    return 0;
}
