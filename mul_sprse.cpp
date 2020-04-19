#include<stdio.h> 
#define MAX 20 

void print_sparse(int b[MAX][3]); 
void read_sparse(int b[MAX][3]); 
void multiply(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3]); 
void Fast_transpose(int B1[MAX][3],int B2[MAX][3]); 
int main() 
{ 
    int b1[MAX][3],b2[MAX][3],b3[MAX][3]; 
    read_sparse(b1); 
    read_sparse(b2); 
    multiply(b1,b2,b3); 
    print_sparse(b3); 
   // getch(); 
   return 0;
} 
void multiply(int b1[MAX][3],int b2[MAX][3],int b3[MAX][3]) 
{        int b22[MAX][3]; 
    int i,j,k,B1rno,B2colno,i1,sum,t1,t2; 
    t1=b1[0][2];t2=b2[0][2]; 
    if(b1[0][1]!=b2[0][0]) 
    { 
        printf("\n can not multiply"); 
       return ;
    } 
    Fast_transpose(b2,b22);   /* b1 in row major form and b2 in column 
    major form ,as for multiplication,dot product of a row of b1 
    with column of b2 is taken  */ 
    k=1;       //index for b3 
    i=1; 
    while(i<=t1) 
    { 
        i1=i; 
        j=1; 
        while(j<=t2) 
        { 
            B1rno=b1[i][0]; 
            B2colno=b22[j][0]; 
            sum=0; 

        while(i<=t1 && j<=t2 && B1rno==b1[i][0] && B2colno==b22[j][0]) 
        { 
            if(b1[i][1]==b22[j][1]) 
                { 
                sum=sum+b1[i][2]*b22[j][2]; 
                i++;j++; 
                } 
            else 
                if(b1[i][1]<b22[j][1]) 
                    i++; 
                else 
                    j++; 
        } 
        if(sum!=0) 
        { 
            b3[k][0]=B1rno; 
            b3[k][1]=B2colno; 
            b3[k][2]=sum; 
            k++; 
        } 
        if(j<=t2) 
            i=i1; 
        while(B2colno==b22[j][0] && j<=t2) 
            j++; 
    } 
    while(B1rno==b1[i][0] && i<=t1) 
        i++; 
    } 
    b3[0][0]=b1[0][0]; 
    b3[0][1]=b22[0][0]; 
    b3[0][2]=k-1; 
} 
void print_sparse(int b[MAX][3]) 
{ 
    int i,n; 
    n=b[0][2];   //no of 3-triples 
    printf("\nrows = %d\tcolumns = %d",b[0][0],b[0][1]); 
    printf("\n"); 
    for(i=0;i<=n;i++) 
        printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]); 
} 
void read_sparse(int b[MAX][3]) 
{ 
    int i,t; 
    printf("\nEnter size of the matrix:"); 
    scanf("%d%d",&b[0][0],&b[0][1]); 
    printf("\nEnter no. of non-zero elements:"); 
    scanf("%d",&t); 
    b[0][2]=t; 

    for(i=1;i<=t;i++) 
    { 
        printf("\n Enter the next triple(row,column,value) :"); 
        scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]); 
    } 
} 
void Fast_transpose(int B1[MAX][3],int B2[MAX][3]) 
{ 
    int m,n,t,i,col_num,location; 
    int total[MAX],index[MAX]; 
    m=B1[0][0];n=B1[0][1];t=B1[0][2]; 
    B2[0][0]=n;B2[0][1]=m;B2[0][2]=t; 
    for(i=0;i<n;i++) 
        total[i]=0; 
    for(i=1;i<=t;i++) 
    { 
        col_num=B1[i][1]; 
        total[col_num]++; 
    } 
    index[0]=1; 
    for(i=1;i<n;i++) 
        index[i]=index[i-1]+total[i-1]; 

    for(i=1;i<=t;i++) 
    { 
        col_num=B1[i][1]; 
        location=index[col_num]; 
        index[col_num]++; 
        B2[location][0]=B1[i][1]; 
        B2[location][1]=B1[i][0]; 
        B2[location][2]=B1[i][2]; 
    } 
}
