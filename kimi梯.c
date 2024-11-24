#include <stdio.h>
#include <math.h>

int main() {
    // 要求函数y=kx+b，其中k和b为待求数，x,y为数据点。
    // 输入（x1,y1）（x2,y2）（x3,y3）（x4,y4）....
    // 输出k和b的值。
    
    int num = 0;
    double k = 0.0, b = 0.0;
    double learning_rate = 0.01; // 学习率
    double r;
    double x[1000], y[1000];
    
    // 输入数据个数
    printf("请输入数据个数：");
    scanf("%d", &num);
    
    // 输入数据
    for(int i = 0; i < num; i++) {
        scanf("%lf,%lf", &x[i], &y[i]);
    }
    
    // 梯度下降算法
    for (int iter = 0; iter < 1000; iter++) { // 可以设置一个迭代次数上限
        double dk = 0.0, db = 0.0; // dk和db分别为k和b的梯度
        for (int i = 0; i < num; i++) {
            double p = k * x[i] + b; // 计算预测值
            double error = y[i] - p; // 计算误差
            dk += (-2 * error * x[i]); // 计算k的梯度
            db += (-2 * error); // 计算b的梯度
        }
        
        dk = dk / num; // 计算k的平均梯度
        db = db / num; // 计算b的平均梯度
        
        k = k - learning_rate * dk; // 更新k
        b = b - learning_rate * db; // 更新b
    }
    
    // 输出k和b的值
    printf("斜率k = %lf\n", k);
    printf("截距b = %lf\n", b);
    
    return 0;
}