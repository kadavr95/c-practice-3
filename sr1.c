#include <stdio.h>

int main(){
 int k,i,n,n1,n2,n3,m,m1,m2,m3;
 printf("Enter k:\n");
 scanf("%d",&k);
 n2=1;
 n1=2;
 for (i=1;i<=k;i++){
   n=i;
   if (i<=2)
     printf("%d\n",n);
   else{
	 n=2*n1+n2;
	 n2=n1;
	 n1=n;
	 printf("%d\n",n);
	}
   }
 n3=0;
 n2=1;
 n1=2;
 m=3;
 m1=2;
 m2=1;
 m3=0;
 while (2*(2*n1+n2)+n>=0){
   n=2*n1+n2;
   n3=n2;
   n2=n1;
   n1=n;
   m=m+1;
   m1=m1+1;
   m2=m2+1;
   m3=m3+1;
  }
	 n=2*n1+n2;
 printf("%-10d %10d\n",m3,n3);
 printf("%-10d %10d\n",m2,n2);
 printf("%-10d %10d\n",m1,n1);
 printf("%-10d %10d\n",m,n);
 fflush(stdin);
 getchar();
}
