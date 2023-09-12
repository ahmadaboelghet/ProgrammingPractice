//
//  main.c
//  PSetsC
//
//  Created by aBoelghet  on 09/08/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,i,j,k,l,dim,s;
    scanf("%d", &n);
    dim=2*n-1;
    //upper part
      for(i=0;i<n-1;i++)
      {
          for(s=n;s>n-i;s--)
          printf("%d ",s);

          for(l=i;l<dim-i;l++)
          printf("%d ",n-i);

          for(s=n-i+1;s<=n;s++)
          printf("%d ",s);

          printf("\n");

      }

    //middle
    for(k=n;k>0;k--)
    printf("%d ",k);
    for(k=2;k<=n;k++)
    printf("%d ",k);
    printf("\n");

    //bottom
    for(i=n-2;i>=0;i--)
      {

          for(s=n;s>n-i;s--)
          printf("%d ",s);

          for(l=i;l<dim-i;l++)
          printf("%d ",n-i);

          for(s=n-i+1;s<=n;s++)
          printf("%d ",s);

          printf("\n");

      }
    return 0;
}
