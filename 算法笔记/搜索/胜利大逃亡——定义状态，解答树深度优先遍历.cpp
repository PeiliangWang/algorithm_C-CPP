//DFS
#include<cstdio>

int maze[51][51][51];
int mark[51][51][51];

int a, b, c, t;

struct N{
    int x, y, z;
    int t;
};

int go[6][3]={
    {0, 1, 0},
    {0, -1, 0},
    {1, 0, 0},
    {-1, 0, 0},
    {0, 0, 1},
    {0, 0, -1}
};
int it=0;
int DFS(N pos){

    mark[pos.x][pos.y][pos.z] = true;
    N now;
    for(int i = 0;i < 6;i++){
        now.x = pos.x + go[i][0];
        now.y = pos.y + go[i][1];
        now.z = pos.z + go[i][2];
        if(now.x < 0 || now.x >= a || now.y < 0 || now.y >= b || now.z < 0 || now.z >= c)continue;
        if(maze[now.x][now.y][now.z] == 1)continue;
        if(mark[now.x][now.y][now.z] == true)continue;
        now.t = pos.t + 1;
        if(now.x == a-1 && now.y == b-1 && now.z == c-1 && maze[now.x][now.y][now.z] == 0)return now.t;
        else
        {
            it++;
            DFS(now);
        }
    }
    it--;
    if(it == 0) return -1;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
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
        mark[0][0][0] = true;
        N tmp;
        tmp.x = 0;
        tmp.y = 0;
        tmp.z = 0;
        tmp.t = 0;
        int rec = DFS(tmp);
        printf("%d\n", rec);
    }
    return 0;
}
