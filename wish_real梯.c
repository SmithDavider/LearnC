            /*#include <stdio.h>

int main() {

    //要求函数y=kx+b，其中k和b为待求数，x,y为数据点。
    //输入（x1,y1）（x2,y2）（x3,y3）（x4,y4）....
    //输出k和b的值。
    double x[1000], y[1000];
    int n;
    double k = 0.0, b = 0.0;
    double learning_rate = 0.01; //学习率
    int i ; 

    //输入数据
    printf("请输入数据个数：");
    for(;n<1000;n++){
    scanf("%lf,%lf", &x[n], &y[n]);}

    for (int i = 0; i < 1000; i++) {
        double dk = 0.0, db = 0.0;//dk和db分别为k和b的导数
        for (int i = 0; i < 1000; i++) {
            double p = k * x[i] + b ;//计算预测值
            dk = dk - 2 * x[i] * (y[i] - p); //计算k的导数
            db = db - 2 * (y[i] - p); //计算b的导数
        }

        dk = dk / n; //计算k的平均导数
        db = db / n; //计算b的平均导数

        k = k - learning_rate * dk; //更新k
        b = b - learning_rate * db; //更新b

        printf("k=%.5lf,b=%.5lf\n", k, b); //输出k和b的值
    }

    return 0;
}

  */

 #include <stdio.h>

int main() {
//要求函数y=kx+b，其中k和b为待求数，x,y为数据点。
//输入（x1,y1）（x2,y2）（x3,y3）（x4,y4）....
//输出k和b的值。
    double x[10], y[10];
    int num;
    double k = 0.0, b = 0.0;
    double learning_rate = 0.01; //学习率
    int i ; 

    //输入数据
    printf("请输入数据个数：");
    scanf("%d", &num);
    for(i=0;i<num;i++){
        scanf("%lf,%lf", &x[i], &y[i]);}
double r;
       // 残差平方和
       r = (y[i] - (k * x[i] + b)) * (y[i] - (k * x[i] + b))*y[i];
        //y偏导数
    double dy[10] = 2*y[i]-2*k*x[i]-2*b+k*k*x[i]*x[i]+2*k*b*x[i]+b*b;
    //x偏导数
    double dx[10] = 2*k*k*x[i]+2*k*b-2*y[i]*k+y[i]*y[i]+b*b+2*y[i]*b;
    //k偏导数
    

    double fd = dx[i]*dx [i]+dy[i]*dy[i];
    //fd开方    
    double f = sqrt(fd);
    double fang = -f;
    while (fang > 0) {

        
        
    

    }

    return 0;
}