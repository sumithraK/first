#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,k;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
            }
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {

                    if(arr[i]==arr[j]){
                        k=1;
                    }
                }
                if(k==1){
                    printf("%d",arr[i]);
                    break;
                }
            }
            return 0;
}
