#include&lt;stdio.h&gt;
int fact(int n);
int fact(int n)
{
int res;
if(n==0){
return 1;
}
else{
res=n*fact(n-1);
}
}
void main()
{
int a,r;
printf("Enter the number\n");
scanf("%d",&a);
r=fact(a);
printf("Factorial of %d is %d\n"a,r);

}