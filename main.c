#include <stdio.h>

int main(void) {
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    int x;    
    scanf("%d",&x);
    x = x+100;
    double a; /*xはこのままだとint型なのでdouble型に変換する必要がある。だからこうやって別の文字にxを入れる必要がある*/
    a = 1.0/x;
    printf("%.15f\n",a);
    return 0;
}
