#include <stdio.h>//要求函数y=kx+b，其中k和b为待求数，x,y为数据点。
//#include <math.h>//输入（x1,y1）（x2,y2）（x3,y3）（x4,y4）....
//输出k和b的值。
int main() {
    int num = 6;
    double k = 0.0, b = 0.0;
    double learning_rate = 0.01; //学习率
    int i;
    double loss;
       printf("enter the number of data points:"); //输入数据个数
        scanf("%d", &num);
    double x[1000], y[1000];
    for (i = 0; i < 1000; i++) {
        x[i] = 0.0;
        y[i] = 0.0;
    }
    
    for(i=0;i<num;i++){
        scanf("%lf,%lf", &x[i], &y[i]);}
    for (int iter = 0; iter < 10000; iter++) {
        double dk = 0.0, db = 0.0;//dk和db分别为k和b的偏导
        double tk = 0.0, tb = 0.0; //计算k和b的梯度
        for (i = 0; i < num; i++) {
            double yu; //计算预测值
            yu = k * x[i] + b; //计算预测值
            //loss = (y[i] - yu) * (y[i] - yu); //单一损失
             //double sum = 0.0;
           // sum = sum + loss; //计算总损失
            
            //double avg_loss = sum / num; //损失函数         1/n*∑(yi-y(k*xi+b))^2
            double wuca = y[i] - yu; //误差
            double dk = -2 * wuca * x[i]; //k偏导数
            double db = -2 * wuca; //b偏导数
            tk = tk + dk; //累加k的梯度
            tb = tb + db; //累加b的梯度
            printf("loss=%.3lf\n", wuca * wuca); //输出误差

        }
        dk = tk / num; //k梯度
        db = tb / num; //b梯度
       // printf("dk=%.3lf,db=%.3lf\n", dk, db); //输出k和b的梯度
        k = k - learning_rate * dk; //更新k
        b = b - learning_rate * db; //更新b
        printf("k=%.3lf,b=%.3lf\n", k, b); //输出k和b的值
    }
    printf("k=%.3lf,b=%.3lf", k, b); //输出k和b的值
    return 0;
}



