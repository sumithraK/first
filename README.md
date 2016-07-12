#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {

                    if(a[i]==a[j]){
                        c=1;
                    }
                }
                if(c==1){
                    printf("%d",a[i]);
                    break;
                }
            }
            return 0;
}
