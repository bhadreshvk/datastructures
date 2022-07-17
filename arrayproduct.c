#include <stdio.h>

int main() {
int T;
scanf("%d",&T);
while(T!=0)
{ int n,arr[n],i=0,mult=1;
    scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
    mult=mult*arr[i];
}
printf("%d\n",mult);
    T--;
}

return 0;
}