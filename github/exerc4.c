#include <stdio.h>

int main(){
    int n ,a[3],b[3],F[4];
    char c[4],d[3],e[3],G[7];
    
    //insercao
    printf("\nInsira um numero entre(3,4,6): \n");
    scanf("%d",&n);
    //aqui comeca a primeira condicao
   if(n == 3)
    {
        for(int i =0;i < 3 ; i++){
            a[i]=1+i;
          }
          for(int i =0;i < 3 ; i++){
              b[i]=2+i;
              b[2]=-3+1;
            }
            for(int i =0;i < 4 ; i++){
                c[0]='3';
                c[1]='U';
                c[2]='2';
                c[3]='3';
              }
              for(int i =0;i < 1 ; i++){
                d[0]='1';
                d[1]='^';
                d[2]='^';
              }
              for(int i =0;i < 1 ; i++){
                e[0]='1';
                e[1]='2';
                e[2]='^';
              }
            //impressao
          for(int i = 0;i < 3;i++){
              printf(" %d ",a[i]);
             }  
             printf("\n"); 
             for(int i = 0;i < 3;i++){
                printf(" %d ",b[i]);
               }  
               printf("\n"); 
             
                printf("%c ",c[0]);
                printf(" T");
                printf(" %c ",c[1]);
                printf(" -%c ",c[2]);
                printf(" -%c ",c[3]);
                printf("\n"); 
                //putro
                for(int i = 0;i < 3;i++){
                    printf("%c",d[i]);
                   }  
                   printf("\n"); 
                   for(int i = 0;i < 3;i++){
                    printf("%c",e[i]);
                   }  
               //ultimo
               printf("\n"); 
               for(int i = 0;i < 3;i++){
                printf("%d",a[i]);
               }   
   }
   //aqui termina a primeira
   else if(n == 4)
        {
          for(int i =0;i<4;i++)
          { 
            F[i]=1+i;
          }


          //imprimindo
          for(int j=0;j<2;j++)
          {
            for(int i =0;i<4;i++)
            { 
            printf(" %d ",F[i]);
            }
          printf("\n");
          for(int i =0;i<4;i++)
          { 
            F[i]=2+i;
            F[3]=-2;
            printf(" %d ",F[i]);
          }
          printf("\n");
          for(int i =0;i<2;i++)
          { 
            F[0]=3;
            F[1]=4;
            printf(" %d ",F[i]);
          }
            printf(" TU");
            F[2]=-2;
            F[3]=-3;
            printf(" %d ",F[2]);
            printf(" %d ",F[3]);
        
          printf("\n");
          F[0]=4;
          F[1]=-2;
          F[2]=-3;
          F[3]=-4;
          printf(" %d ",F[0]);
          printf(" LI");
          printf(" %d ",F[1]);
          printf(" %d ",F[2]);
          printf(" %d ",F[3]);
      
        printf("\n ");
        for(int i =0;i<4;i++)
        { 
          F[i]=1+i;
        }
          for(int i =0;i<2;i++)
           {  
            printf("%d",F[i]);
          }
          printf("^");
          printf("^");
          printf("\n ");
          for(int i =0;i<3;i++)
          {  
           printf("%d",F[i]);
         }
         printf("^");
         printf("\n ");
         for(int i =0;i<4;i++)
         {  
          printf("%d",F[i]);
        }
        
        printf("\n");
          }
        }
   else if (n==6)
   {
    for(int i =0;i <7;i++){
      G[i]=1+i;
     }
    
     //imprimindo....
     for(int i =0;i <7;i++){
      printf(" %d ",G[i]);
     }
     printf("\n");
     for(int i =0;i <7;i++){
      G[i]=2+i;
      G[6]=-2;
      printf(" %d ",G[i]);
     }
     printf("\n");
     for(int i =0;i <5;i++){
      G[i]=3+i;
      printf(" %d ",G[i]);
     }
     printf("TU");
     G[5]= -2;
     G[6]= -3;
     printf(" %d ",G[5]);
     printf(" %d ",G[6]);
     //outro
     printf("\n");
     for(int i =0;i <4;i++){
      G[i]=4+i;
      printf(" %d ",G[i]);
     }
     printf("LI");
     G[4]= -2;
     G[5]= -3;
     G[6]= -4;
     printf(" %d ",G[4]);
     printf(" %d ",G[5]);
     printf(" %d ",G[6]);
     //outro2
     printf("\n");
     for(int i =0;i <3;i++){
      G[i]=5+i;
      printf(" %d ",G[i]);
     }
     printf("NG");
     G[3]= -2;
     G[4]= -3;
     G[5]= -4;
     G[6]= -5;

     printf(" %d ",G[3]);
     printf(" %d ",G[4]);
     printf(" %d ",G[5]);
     printf(" %d ",G[6]);
     //OUTRO3
     printf("\n");
     for(int i =0;i <7;i++){
      G[i]=-i;
      G[0]=6;
      G[1]=7;
      printf(" %d ",G[i]);
     }
     //OUTRO3
     printf("\n");
     for(int i =0;i <7;i++){
      G[i]=-i-1;
      G[0]=7;
      printf(" %d ",G[i]);
     }
     //OUTRO4
     printf("\n   ");
     G[0]=1;
      printf(" %d",G[0]);
     for(int i =0;i <6;i++){
      G[i]= '^';
      printf("%c",G[i]);
     }
     //OUTRO5
     printf("\n   ");
     G[0]=1;
     G[1]=2;
      printf(" %d",G[0]);
      printf("%d",G[1]);
     for(int i =0;i <5;i++){
      G[i]= '^';
      printf("%c",G[i]);
     }
       //OUTRO6
       printf("\n   ");
       for(int i =0;i <3;i++){
        G[i]= i+1;
        
       }
       
      
       for(int i =0;i <3;i++){
        printf("%d",G[i]);
       }
        printf("^");
        printf("^");
        printf("^");
        printf("^");
         //OUTRO7
       printf("\n   ");
       for(int i =0;i <7;i++){
        G[i]= i+1;
        
       }
      
       for(int i =0;i <4;i++){
        printf("%d",G[i]);
       }
      
        printf("^");
        printf("^");
        printf("^");
        //outro7
        printf("\n   ");
        for(int i =0;i <5;i++){
          printf("%d",G[i]);
         }
        
          printf("^");
          printf("^");
           //outro7
        printf("\n   ");
        for(int i =0;i <6;i++){
          printf("%d",G[i]);
         }
          printf("^");
         //acabou
         printf("\n   ");
         for(int i =0;i <7;i++){
          printf("%d",G[i]);
         } 
         
    


    
   }
  
    return 0;
}