    #include<stdio.h>

    int pow(int a, int b){
        int res=1;
        for(int i=0;i<b;i++){
            res*=a;
        }
        return res;
    }

    int main(){
        int m,n;
        int first=0;
        scanf("%d %d",&m,&n);
        for (int i = m; i <= n; i++)
        {
            for (int j = 1; j <= 4; j++)
            {   
                if (i == (i*i)%pow(10,j)&&(i*i)>pow(10,j))
                {
                    if(first==0){
                        first=1;
                        printf("%d",i);
                        break;
                    }else{
                        printf(" %d",i);
                        break;
                    }
                }
                
            }
            
        }
        return 0;
    }