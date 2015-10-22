//
// Created by red on 2015/10/22.
//

#include <bits/stdc++.h>
using namespace std;
#include <iostream>
int n;
int a1[105],a2[105];
int b[105];
int sm[105];
int ms[105];
bool cmp(int a,int b){
    return a < b;
}


int main() {
    scanf("%d", &n);
    memset(&sm, 0, sizeof(sm));
    memset(&ms, 0, sizeof(ms));
    a1[0] = a2[n-1] = b[0] = 0;
    for(int i=1;i<n;i++) {
        scanf("%d", &a1[i]);
        a1[i]+=a1[i-1];
    }
    int all=0;
    for(int i=0;i<n-1;i++) {
        scanf("%d", &a2[i]);
    }
    for(int i=n-2;i>=0;i--) {
        a2[i] += a2[i+1];
    }
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for (int i=0;i<n;i++) {
        sm[i] = a2[i] + a1[i] + b[i];
    }
    sort(sm, sm+n, cmp);
    printf("%d\n", sm[0] + sm[1]);

}


