// Created by gca on 2015/10/23

#include  <bits/stdc++.h>
#define PII pair<int, int>
#define Debug false
#define debug(format, ...) if(Debug){printf(format, __VA_ARGS__);}

using namespace std;

const int maxn = 4005;
int n;
int v[maxn], d[maxn], p[maxn];
int main () {
    scanf("%d", &n);
    memset(v, 0, sizeof(v));
    memset(d, 0, sizeof(d));
    memset(p, 0, sizeof(p));
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &v[i], &d[i],& p[i]);
    }
    vector<int> cure;
    for(int i=0;i<n;i++) {
        int volumn=v[i];
        if (p[i]<0)
            continue;
        queue<PII> q;
        for(int j=i+1;j<n;j++) {
            if (volumn<=0) break;
            if (p[j]<0) continue;
            p[j]-=volumn;
            volumn--;
            if (j==4)debug("#who %d sub %d now %d\n",i, volumn, p[j]);
            if (p[j]<0) {
                q.push(PII(j,d[j]));
            }

        }
        while (!q.empty()) {
            int index = q.front().first;
            int v = q.front().second;
            q.pop();
            for(int k=index+1;k<n;k++) {
                if (p[k]<0) continue;
                p[k]-=v;
                if (k==4)debug("who %d sub %d now %d\n", index, v, p[k]);
                if (p[k]<0) {
                    q.push(PII(k, d[k]));
                }
            }
        }
        cure.push_back(i+1);
    }
    printf("%d\n", cure.size());
    for(int i=0;i<cure.size();i++)
        printf("%d ",cure[i]);
}
