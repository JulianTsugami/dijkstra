#include <stdio.h>
#include <string.h>
#define MAX 17          //最大値の定義（値は今回の課題で選択したガーデンズ・バイ・ザ・ベイのノード数）
#define INFINITY 99999  //無限大の定義　

void Dijkstra(int Graph[MAX][MAX], int n, int root); //ダイクストラ法で最短経路を探索するための関数

int main()
{
  int Graph[MAX][MAX]; //グラフのための二次元配列を定義
  int n = 17;          //ノードの合計数を設定（ルートを含む）
  int u = 0;           //ルートがどのノードなのかを設定

  //下記は各ノードのエッジの値を設定
  Graph[0][0] = 0;
  Graph[0][1] = 390;
  Graph[0][2] = 0;
  Graph[0][3] = 0;
  Graph[0][4] = 0;
  Graph[0][5] = 0;
  Graph[0][6] = 0;
  Graph[0][7] = 0;
  Graph[0][8] = 0;
  Graph[0][9] = 0;
  Graph[0][10] = 0;
  Graph[0][11] = 0;
  Graph[0][12] = 0;
  Graph[0][13] = 80;
  Graph[0][14] = 0;
  Graph[0][15] = 0;
  Graph[0][16] = 400;

  Graph[1][0] = 390;
  Graph[1][1] = 0;
  Graph[1][2] = 0;
  Graph[1][3] = 0;
  Graph[1][4] = 0;
  Graph[1][5] = 0;
  Graph[1][6] = 0;
  Graph[1][7] = 0;
  Graph[1][8] = 0;
  Graph[1][9] = 0;
  Graph[1][10] = 320;
  Graph[1][11] = 270;
  Graph[1][12] = 0;
  Graph[1][13] = 320;
  Graph[1][14] = 280;
  Graph[1][15] = 0;
  Graph[1][16] = 120;

  Graph[2][0] = 0;
  Graph[2][1] = 0;
  Graph[2][2] = 0;
  Graph[2][3] = 50;
  Graph[2][4] = 0;
  Graph[2][5] = 0;
  Graph[2][6] = 0;
  Graph[2][7] = 110;
  Graph[2][8] = 0;
  Graph[2][9] = 0;
  Graph[2][10] = 0;
  Graph[2][11] = 0;
  Graph[2][12] = 0;
  Graph[2][13] = 0;
  Graph[2][14] = 0;
  Graph[2][15] = 0;
  Graph[2][16] = 0;

  Graph[3][0] = 0;
  Graph[3][1] = 0;
  Graph[3][2] = 50;
  Graph[3][3] = 0;
  Graph[3][4] = 420;
  Graph[3][5] = 380;
  Graph[3][6] = 300;
  Graph[3][7] = 150;
  Graph[3][8] = 150;
  Graph[3][9] = 0;
  Graph[3][10] = 0;
  Graph[3][11] = 0;
  Graph[3][12] = 0;
  Graph[3][13] = 0;
  Graph[3][14] = 0;
  Graph[3][15] = 0;
  Graph[3][16] = 0;

  Graph[4][0] = 0;
  Graph[4][1] = 0;
  Graph[4][2] = 0;
  Graph[4][3] = 420;
  Graph[4][4] = 0;
  Graph[4][5] = 380;
  Graph[4][6] = 0;
  Graph[4][7] = 0;
  Graph[4][8] = 0;
  Graph[4][9] = 630;
  Graph[4][10] = 0;
  Graph[4][11] = 0;
  Graph[4][12] = 0;
  Graph[4][13] = 0;
  Graph[4][14] = 0;
  Graph[4][15] = 0;
  Graph[4][16] = 0;

  Graph[5][0] = 0;
  Graph[5][1] = 0;
  Graph[5][2] = 0;
  Graph[5][3] = 380;
  Graph[5][4] = 380;
  Graph[5][5] = 0;
  Graph[5][6] = 230;
  Graph[5][7] = 0;
  Graph[5][8] = 0;
  Graph[5][9] = 0;
  Graph[5][10] = 0;
  Graph[5][11] = 0;
  Graph[5][12] = 0;
  Graph[5][13] = 0;
  Graph[5][14] = 0;
  Graph[5][15] = 0;
  Graph[5][16] = 0;

  Graph[6][0] = 0;
  Graph[6][1] = 0;
  Graph[6][2] = 0;
  Graph[6][3] = 300;
  Graph[6][4] = 0;
  Graph[6][5] = 230;
  Graph[6][6] = 0;
  Graph[6][7] = 0;
  Graph[6][8] = 280;
  Graph[6][9] = 270;
  Graph[6][10] = 0;
  Graph[6][11] = 0;
  Graph[6][12] = 0;
  Graph[6][13] = 0;
  Graph[6][14] = 0;
  Graph[6][15] = 0;
  Graph[6][16] = 0;

  Graph[7][0] = 0;
  Graph[7][1] = 0;
  Graph[7][2] = 110;
  Graph[7][3] = 150;
  Graph[7][4] = 0;
  Graph[7][5] = 0;
  Graph[7][6] = 0;
  Graph[7][7] = 0;
  Graph[7][8] = 160;
  Graph[7][9] = 0;
  Graph[7][10] = 0;
  Graph[7][11] = 0;
  Graph[7][12] = 100;
  Graph[7][13] = 0;
  Graph[7][14] = 0;
  Graph[7][15] = 200;
  Graph[7][16] = 0;

  Graph[8][0] = 0;
  Graph[8][1] = 0;
  Graph[8][2] = 0;
  Graph[8][3] = 150;
  Graph[8][4] = 0;
  Graph[8][5] = 0;
  Graph[8][6] = 280;
  Graph[8][7] = 160;
  Graph[8][8] = 0;
  Graph[8][9] = 110;
  Graph[8][10] = 0;
  Graph[8][11] = 0;
  Graph[8][12] = 0;
  Graph[8][13] = 0;
  Graph[8][14] = 0;
  Graph[8][15] = 230;
  Graph[8][16] = 0;

  Graph[9][0] = 0;
  Graph[9][1] = 0;
  Graph[9][2] = 0;
  Graph[9][3] = 0;
  Graph[9][4] = 630;
  Graph[9][5] = 0;
  Graph[9][6] = 270;
  Graph[9][7] = 0;
  Graph[9][8] = 110;
  Graph[9][9] = 0;
  Graph[9][10] = 60;
  Graph[9][11] = 0;
  Graph[9][12] = 0;
  Graph[9][13] = 0;
  Graph[9][14] = 0;
  Graph[9][15] = 0;
  Graph[9][16] = 0;

  Graph[10][0] = 0;
  Graph[10][1] = 320;
  Graph[10][2] = 0;
  Graph[10][3] = 0;
  Graph[10][4] = 0;
  Graph[10][5] = 0;
  Graph[10][6] = 0;
  Graph[10][7] = 0;
  Graph[10][8] = 0;
  Graph[10][9] = 60;
  Graph[10][10] = 0;
  Graph[10][11] = 100;
  Graph[10][12] = 0;
  Graph[10][13] = 0;
  Graph[10][14] = 0;
  Graph[10][15] = 0;
  Graph[10][16] = 0;

  Graph[11][0] = 270;
  Graph[11][1] = 0;
  Graph[11][2] = 0;
  Graph[11][3] = 0;
  Graph[11][4] = 0;
  Graph[11][5] = 0;
  Graph[11][6] = 0;
  Graph[11][7] = 0;
  Graph[11][8] = 0;
  Graph[11][9] = 0;
  Graph[11][10] = 100;
  Graph[11][11] = 0;
  Graph[11][12] = 0;
  Graph[11][13] = 0;
  Graph[11][14] = 0;
  Graph[11][15] = 50;
  Graph[11][16] = 0;

  Graph[12][0] = 0;
  Graph[12][1] = 0;
  Graph[12][2] = 0;
  Graph[12][3] = 0;
  Graph[12][4] = 0;
  Graph[12][5] = 0;
  Graph[12][6] = 0;
  Graph[12][7] = 100;
  Graph[12][8] = 0;
  Graph[12][9] = 0;
  Graph[12][10] = 0;
  Graph[12][11] = 0;
  Graph[12][12] = 0;
  Graph[12][13] = 150;
  Graph[12][14] = 100;
  Graph[12][15] = 0;
  Graph[12][16] = 0;

  Graph[13][0] = 80;
  Graph[13][1] = 320;
  Graph[13][2] = 0;
  Graph[13][3] = 0;
  Graph[13][4] = 0;
  Graph[13][5] = 0;
  Graph[13][6] = 0;
  Graph[13][7] = 0;
  Graph[13][8] = 0;
  Graph[13][9] = 0;
  Graph[13][10] = 0;
  Graph[13][11] = 0;
  Graph[13][12] = 150;
  Graph[13][13] = 0;
  Graph[13][14] = 50;
  Graph[13][15] = 0;
  Graph[13][16] = 0;

  Graph[14][0] = 0;
  Graph[14][1] = 280;
  Graph[14][2] = 0;
  Graph[14][3] = 0;
  Graph[14][4] = 0;
  Graph[14][5] = 0;
  Graph[14][6] = 0;
  Graph[14][7] = 0;
  Graph[14][8] = 0;
  Graph[14][9] = 0;
  Graph[14][10] = 0;
  Graph[14][11] = 0;
  Graph[14][12] = 100;
  Graph[14][13] = 50;
  Graph[14][14] = 0;
  Graph[14][15] = 0;
  Graph[14][16] = 0;

  Graph[15][0] = 0;
  Graph[15][1] = 0;
  Graph[15][2] = 0;
  Graph[15][3] = 0;
  Graph[15][4] = 0;
  Graph[15][5] = 0;
  Graph[15][6] = 0;
  Graph[15][7] = 200;
  Graph[15][8] = 230;
  Graph[15][9] = 0;
  Graph[15][10] = 0;
  Graph[15][11] = 50;
  Graph[15][12] = 0;
  Graph[15][13] = 0;
  Graph[15][14] = 0;
  Graph[15][15] = 0;
  Graph[15][16] = 0;

  Graph[16][0] = 400;
  Graph[16][1] = 120;
  Graph[16][2] = 0;
  Graph[16][3] = 0;
  Graph[16][4] = 0;
  Graph[16][5] = 0;
  Graph[16][6] = 0;
  Graph[16][7] = 0;
  Graph[16][8] = 0;
  Graph[16][9] = 0;
  Graph[16][10] = 0;
  Graph[16][11] = 0;
  Graph[16][12] = 0;
  Graph[16][13] = 0;
  Graph[16][14] = 0;
  Graph[16][15] = 0;
  Graph[16][16] = 0;
 //ここまで

  Dijkstra(Graph, n, u); //ダイクストラ法の関数のパラメータに値をいれる

  return 0;
}

void Dijkstra(int Graph[MAX][MAX], int n, int root) //パラメーターはグラフ、ノードの合計（ルートを含む）、ルート
{
  int cost[MAX][MAX]; //各エッジの値、main関数でインプットした値を代入
  int distance[MAX];  //ルートからのあるノードまでの距離（最終的には最短距離となる）
  int visited[MAX];   //訪問済みか否かの真偽を確かめるために使用　(1の場合は訪問済み、0の場合は未訪問)
  int count;          //最短距離が確定したノードの数を表す（while文のループで使用する）
  int mindistance;    //ルートからのあるノードまでの最短距離（テンポラリとして使用する）
  int nextnode;       //次のノードを設定するために使用すr
  int i;              //for文のループで使用
  int j;              //for文のループで使用


  for (i = 0; i < n; i++) //各エッジの値を「cost」に代入するため、
  { 
    for (j = 0; j < n; j++) //ノードの合計数（ルートを含む）の二乗分繰り返す（今回の場合は17^2)
    {
      if (Graph[i][j] == 0)     //エッジがの値が0ということは、エッジが存在しないということ（つまり、あるノードとノードがエッジで直接繋がっていない状態、または二つのノードが同じである状態）
        cost[i][j] = INFINITY;    //main関数でインプットしたエッジの値が0のときは、「cost」に無限大を代入
      else                      //エッジがの値が0でないとい右ことは、エッジが存在するということ（つまり、あるノードとノードが繋がっている状態）
        cost[i][j] = Graph[i][j]; //main関数でインプットしたエッジの値が0でないときは、そのエッジの値を「cost」に代入
    }
  }


  for (i = 0; i < n; i++) //各ノードの距離を設定し、未訪問ノードにするため、ノードの合計数（ルートを含む）分繰り返す（今回は17回）
  {
    distance[i] = cost[root][i]; //各ノードの距離をルートと直接繋ぐエッジの値とする（直接繋がっていないノードの値は0）
    visited[i] = 0;               //全て未訪問と設定するため、全ての「visited」の値を0とする
  }


  distance[root] = 0; //ルートまでの距離は0なので、ここで値を0と設定
  visited[root] = 1;  //ルートまでの距離は0と確定し、訪問済みとなったので「visited」の値を1とする
  count = 1;           //ルートまでの距離が既に確定したので、距離が確定したノード（ルートを含む）が一個となる

  while (count < n - 1) //最短距離が確定した数が、ノードの合計数（ルートを含まないので-1とする）未満の間はループを続ける
  {
    mindistance = INFINITY; //各ノードまでの最短距離はわからないので、無限大とおく

    for (i = 0; i < n; i++) //全てのノード最短距離を設定するため、ノードの合計数（ルートを含む）分繰り返す（今回は17回）
    {
     if (!visited[i]) //もしノードが未訪問で、
      if (distance[i] < mindistance) //最短距離が無限大ではないとき
      {
        mindistance = distance[i]; //最短距離値は「distance」である（一番最初は各ノードの距離をルートと直接繋ぐエッジの値）
        nextnode = i;              //次のノードは現在確認しているノードとおく
      }
    }

    visited[nextnode] = 1; //一番最後に次ノードととしたノードは訪問済みとする
    
    for (i = 0; i < n; i++) //最短距離を更新したり、確定したりするために各ノードを確認しないとならないのでノードの合計数（ルートを含む）分繰り返す（今回は17回）
    {
      if (!visited[i]) //もしノードが未訪問で、
        if (mindistance + cost[nextnode][i] < distance[i]) //距離「distance」が現在の最短距離と次のノードと直接繋がっているエッジの値の合計より大きいとき
        {
          distance[i] = mindistance + cost[nextnode][i]; ///距離「distance」はその合計に更新する
        }
    }  

    count++; //全ての処理が終わったら、最短距離が確定したノードの数が一個増える
  }

  // 確定した最短距離を全てプリントアウトする
  char name[256];
  for (i = 0; i < n; i++)
  {
    if (i != root) //ルート以外の距離をアウトプットする
    { 
      if (i == 1)
      {
       strcpy(name, "Marina City Park");
      }

       if (i == 2)
      {
       strcpy(name, "Flower Dome");
      }

       if (i == 3)
      {
       strcpy(name, "Cloud Forest");
      }

       if (i == 4)
      {
       strcpy(name, "Satay By The Bay");
      }

       if (i == 5)
      {
       strcpy(name, "Kingfisher Lake");
      }

       if (i == 6)
      {
       strcpy(name, "Water Lily Pond");
      }

       if (i == 7)
      {
       strcpy(name, "Indian Garden");
      }

       if (i == 8)
      {
       strcpy(name, "Secrete Life of Threes");
      }

       if (i == 9)
      {
       strcpy(name, "Worlds of Palms");
      }

       if (i == 10)
      {
       strcpy(name, "Peach Garden");
      }

       if (i == 11)
      {
       strcpy(name, "SuperTree by IndoChine");
      }

       if (i == 12)
      {
       strcpy(name, "Chinese Garden");
      }

       if (i == 13)
      {
       strcpy(name, "Dragonfly Bridge");
      }

       if (i == 14)
      {
       strcpy(name, "Malay Garden");
      }

       if (i == 15)
      {
       strcpy(name, "OCBC Skyway");
      }

       if (i == 16)
      {
       strcpy(name, "The Meadow");
      }

      printf("Marina Bay Sandsから%sまでの最短距離は%dm（徒歩約%d分）\n", name, distance[i], distance[i]/80); //80mで割ることで徒歩約何分で着くかがわかる
    }
  }
}
