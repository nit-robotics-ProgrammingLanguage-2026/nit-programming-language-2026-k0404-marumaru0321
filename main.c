#include <stdio.h>

int main(void) {
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    int x;    
    scanf("%d",&x);

    if (x == -100) {
        return 0;/*x が32bit int の最大値 2147483647 なのに x + 100 を計算して、int の範囲を超えてしまうので結果がおかしくならないようにこれを入れる(githubAI談)*/
    }
    
    
    double a; /*xはこのままだとint型なのでdouble型に変換する必要がある。だからこうやって別の文字にxを入れる必要がある*/
    a = 1.0/((double)x + 100.0);
    printf("%.15f\n",a);
    return 0;
}
