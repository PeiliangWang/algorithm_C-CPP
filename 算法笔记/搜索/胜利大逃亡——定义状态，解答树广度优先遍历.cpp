//BFS
#include<cstdio>
#include<queue>
using namespace std;
bool mark[51][51][51];
int maze[51][51][51];
struct N{//¶¨Òå×´Ì¬£¨x, y, z, t£©
    int x, y, z;
    int t;
};

queue<N> Q;
int go[6][3]={
    {0, 1, 0},
    {0, -1, 0},
    {1, 0, 0},
    {-1, 0, 0},
    {0, 0, 1},
    {0, 0, -1}
};

int BFS(int a, int b, int c){
    while(Q.empty() == false){
        N now = Q.front();
        Q.pop();
        for(int i = 0;i < 6;i++){
            int nx = now.x + go[i][0];
            int ny = now.y + go[i][1];
            int nz = now.z + go[i][2];

            if(nx < 0 || nx >= a || ny < 0 || ny >= b || nz < 0 || nz >= c)continue;
            if(maze[nx][ny][nz] == 1)continue;
            if(mark[nx][ny][nz] == true)continue;

            N tmp;
            tmp.x = nx;
            tmp.y = ny;
            tmp.z = nz;
            tmp.t = now.t + 1;
            Q.push(tmp);
            mark[nx][ny][nz] = true;

            if(nx == a-1 && ny == b-1 && nz == c-1 && maze[nx][ny][nz] == 0)return tmp.t;
        }
    }
    return -1;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int a, b, c, t;
        scanf("%d%d%d%d", &a, &b, &c, &t);
        for(int i = 0;i < a;i++){
            for(int j = 0;j < b;j++){
                for(int k = 0;k < c;k++){
                    scanf("%d", &maze[i][j][k]);
                    mark[i][j][k] = false;
                }
            }
        }
        if(a == 1 && b == 1 && c == 1){printf("0\n");continue;}
        while(Q.empty() == false)Q.pop();
        mark[0][0][0] = true;
        N tmp;
        tmp.x = 0;
        tmp.y = 0;
        tmp.z = 0;
        tmp.t = 0;
        Q.push(tmp);
        int rec = BFS(a, b, c);
        if(rec <= t)printf("%d\n", rec);
        else printf("-1\n");

    }
    return 0;
}
