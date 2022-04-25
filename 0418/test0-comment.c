/* test0.c */
#include <stdio.h>

/*
  ・引数：整数i, j
  ・返値：iとjの積となる整数
  ・機能：引数の積を計算して結果を返す関数
*/
int test(int i, int j) {
  return (i * j);
}

int main(int argc, char *argv) {
  int i, j;  /* 入力となる変数i, j */
  int k;     /* 積の結果を入れる変数k */

  /* 値の代入 */ 
  i = 3;
  j = 2;

  /* iとjの積を計算して、結果をkに入れる */
  k = test(i, j);

  /*
    kの値が5より大きいかどうかを確認する
       ・5より大きい：">5"を表示する
       ・それ以外   ："<=5"を表示する
  */
  if (k > 5) {
    printf(">5\n");
  } else {
    printf("<=5\n");
  }
  return 0;
}
