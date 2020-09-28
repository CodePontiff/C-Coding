#include<stdio.h>
void dfs(int mat[][2], int friend, int *visible, int depth){
if(visible[friend-1]==0)
visible[friend-1] = 2;
if(mat[friend-1][0]-1>=0 && mat[friend-1][1]-1>=0&& depth>0){
if(visible[mat[friend-1][0]-1]==0)
dfs(mat, mat[friend-1][0], visible, depth-1);
if(visible[mat[friend-1][1]-1]==0)
dfs(mat, mat[friend-1][1], visible, depth-1);
}
}
void recommendFriend(int mat[][2], int* visible, int user, intdepth){
visible[user-1] = 3;
visible[mat[user-1][0]-1] = 1;
visible[mat[user-1][1]-1] = 1;
dfs(mat,mat[user-1][0], visible, depth);
dfs(mat,mat[user-1][1], visible, depth);
}
int main(){
int t;
int r = 1;
scanf("%d", &t);
while(t--){
int n, depth, user;
scanf("%d", &n);
int mat[n][3], max=-1;
for(int i=0;i<n;i++){
scanf("%d %d %d", &mat[i][0], &mat[i][1],&mat[i][2]);
if(max<mat[i][0])
max = mat[i][0];
if(max<mat[i][1])
max = mat[i][1];
if(max<mat[i][2])
max = mat[i][2];
}
scanf("%d %d", &user, &depth);
int adj_mat[max][2], visited[max];
for(int i=0;i<max;i++){
adj_mat[i][0] = 0;
adj_mat[i][1] = 0;
visited[i] = 0;
}
for(int i=0;i<n;i++){
adj_mat[mat[i][0] - 1][0] = mat[i][1];
adj_mat[mat[i][0] - 1][1] = mat[i][2];
}
recommendFriend(adj_mat, visited, user, depth);
printf("Recommendation #%d: \n", r++);
int blank = 1;
for(int i=0;i<max;i++){
if(visited[i]==2){
printf("%d\n ", i+1);
blank = 0;
}
}
if(blank==1) printf("-");
printf("\n");
}
return 0;
}
