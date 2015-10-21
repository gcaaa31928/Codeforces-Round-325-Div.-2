
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int a[105];
int main() {
    int n;
    scanf("%d", &n);
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int f=0;
    for (int i=0;i<n;i++){
        if(a[i])f=1;
        if(f) {
            if(a[i]) {
                ans++;
                continue;
            }
            int k=i,zerocnt=0;
            while(!a[k]&&k<n) {
                k++;
                zerocnt++;
            }
            if (zerocnt>=2 || k>=n){
                i=k-1;
            } else{
                ans++;
//                printf("%d a\n",i);
            }
        }
    }

    printf("%d\n", ans);



}