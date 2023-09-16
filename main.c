#include<stdio.h>
int main(){
    
    
    //INITIALITATION
    int a[3],b[3],i=0,j=0;
    
    
    //TAKING INPUT DATE
    printf("HI! ENTER A DATE : \n");
    do{
        scanf("%d",&a[i++]);
    }
    while(getchar() != '\n' && i<=2);
    a[i];

    
    //EXTRUDING INACURATE INPUT DATES AND ASKING FOR CORRECT DATE  
    if((a[2]<=0)||(a[1]<=0)||(a[0]<=0)||(a[1]>12)){
        printf("OOPS! WRONG FORMAT\n");
        printf("ENTER A CORRECT DATE : \n");
        do{
            scanf("%d",&b[j++]);
        }
        while(getchar() != '\n' && j<=2);
        b[j];
        a[0]=b[0];
        a[1]=b[1];
        a[2]=b[2];


    }
    if((a[1]==1)||(a[1]==3)||(a[1]==5)||(a[1]==7)||(a[1]==8)||(a[1]==10)||(a[1]==12)){
        if(a[0]>31){
            printf("OOPS! WRONG FORMAT\n");
            printf("ENTER A CORRECT DATE : \n");
            do{
                scanf("%d",&b[j++]);
            }
            while(getchar() != '\n' && j<=2);
            b[j];
            a[0]=b[0];
            a[1]=b[1];
            a[2]=b[2];
        }
    }
    if((a[1]==4)||(a[1]==6)||(a[1]==9)||(a[1]==11)){
        if(a[0]>30){
            printf("OOPS! WRONG FORMAT\n");
            printf("ENTER A CORRECT DATE : \n");
            do{
                scanf("%d",&b[j++]);
            }
            while(getchar() != '\n' && j<=2);
            b[j];
            a[0]=b[0];
            a[1]=b[1];
            a[2]=b[2];
        }
    }
    if(a[1]==2){
        if(a[2]%4==0){
            if(a[2]%100==0){
                if(a[2]%400==0){
                    if(a[0]>29){
                        
                        printf("OOPS! WRONG FORMAT\n");
                        printf("ENTER A CORRECT DATE : \n");
                        do{
                            scanf("%d",&b[j++]);
                        }
                        while(getchar() != '\n' && j<=2);
                        b[j];
                        a[0]=b[0];
                        a[1]=b[1];
                        a[2]=b[2];
                    }
                }
                else{
                    if(a[0]>28){
                        printf("OOPS! WRONG FORMAT\n");
                        printf("ENTER A CORRECT DATE : \n");
                        do{
                            scanf("%d",&b[j++]);
                        }
                        while(getchar() != '\n' && j<=2);
                        b[j];
                        a[0]=b[0];
                        a[1]=b[1];
                        a[2]=b[2];
                    }
                }
            }
            else{
                if(a[0]>29){
                    printf("OOPS! WRONG FORMAT\n");
                    printf("ENTER A CORRECT DATE : \n");
                    do{
                        scanf("%d",&b[j++]);
                    }
                    while(getchar() != '\n' && j<=2);
                    b[j];
                    a[0]=b[0];
                    a[1]=b[1];
                    a[2]=b[2];
                }
            }
        }
        else{
            if(a[0]>28){
                printf("OOPS! WRONG FORMAT\n");
                printf("ENTER A CORRECT DATE : \n");
                do{
                    scanf("%d",&b[j++]);
                }
                while(getchar() != '\n' && j<=2);
                b[j];
                a[0]=b[0];
                a[1]=b[1];
                a[2]=b[2];
            }
        }
    }
    
    
    //CREATING AND FILLING BUFFER ARRAYS
    int b1[3],c1[3];
    b1[0]=a[0];
    b1[1]=a[1];
    b1[2]=a[2];
    c1[0]=a[0];
    c1[1]=a[1];
    c1[2]=a[2];
    
    
    
    //TOMORROW'S AND YESTERDAY'S DATE FOR NORMAL DATES
    if((a[1]==4)||(a[1]==6)||(a[1]==9)||(a[1]==11)){
        if(1<=a[0]<=29){
            b1[0]=a[0]+1;
        }
        
    }
    if((a[1]==1)||(a[1]==3)||(a[1]==5)||(a[1]==7)||(a[1]==8)||(a[1]==10)||(a[1]==12)){
        if(1<=a[0]<=30);{
            b1[0]=a[0]+1;
        }
    }
    
    if((a[1]==4)||(a[1]==6)||(a[1]==9)||(a[1]==11)){
        if(2<=a[0]<=30){
            c1[0]=a[0]-1;
        }
    }
    if((a[1]==1)||(a[1]==3)||(a[1]==5)||(a[1]==7)||(a[1]==8)||(a[1]==10)||(a[1]==12)){
        if(2<=a[0]<=31);{
            c1[0]=a[0]-1;
        }
    }
    if(a[1]==2){
        if(a[2]%4==0){
            if(2<=a[0]<=29);{
                c1[0]=a[0]-1;
            }
        }
        if((a[2]%4)!=0){
            if(2<=a[0]<=28);{
                c1[0]=a[0]-1;
            }
        }    
    }
    
    
    
    //*******EXCEPTIONS*******
    //TOMORROW'S AND YESTERDAY'S DATE FOR MONTHS WITH 30 DAYS
    if((a[1]==4)||(a[1]==6)||(a[1]==9)||(a[1]==11)){
        if(a[0]==30){
            b1[0]=1;
            b1[1]=a[1]+1;
        }
        
    }
    if((a[1]==4)||(a[1]==6)||(a[1]==9)||(a[1]==11)){
        if(a[0]==1){
            c1[0]=31;
            c1[1]=a[1]-1;
        }
    }
    
    
    //TOMORROW'S AND YESTERDAY'S DATE FOR FEB(LEAP YEAR)
    if(a[1]==2){
        if(a[2]%4==0){
            if(a[0]==29){
                b1[0]=1;
                b1[1]=a[1]+1;
            }
        }
    }
    if(a[1]==2){
        if(a[2]%4==0){
            if(a[0]==1){
                c1[0]=31;
                c1[1]=a[1]-1;
            }
        }
    }
    
    
    //TOMORROW'S AND YESTERDAY'S DATE FOR FEB(NORMAL YEAR)
    if(a[1]==2){
        if((a[2]%4)!=0){
            if(a[0]==28){
                b1[0]=1;
                b1[1]=a[1]+1;
            }
        }
    }
    if(a[1]==2){
        if((a[2]%4)!=0){
            if(a[0]==1){
                c1[0]=31;
                c1[1]=a[1]-1;
            }
        }
    }
    
    
    
    //TOMORROW'S DATE OF MONTHS WITH 31 DAYS
    if((a[1]==1)||(a[1]==3)||(a[1]==5)||(a[1]==7)||(a[1]==8)||(a[1]==10)){
        if(a[0]==31){
            b1[0]=1;
            b1[1]=a[1]+1;
        }
    }
    else if(a[1]==12){
        if(a[0]==31){
            b1[0]=1;
            b1[1]=1;
            b1[2]=b1[2]+1;
        }
    }
    
    
    //YESTERDAY'S DATE OF MONTHS WITH 31 DAYS
    if((a[1]==3)||(a[1]==5)||(a[1]==7)||(a[1]==10)||(a[1]==12)){
        if(a[0]==1){
            c1[0]=30;
            c1[1]=a[1]-1;
        }
        
    }
    else if(a[1]==8){
        if(a[0]==1){
            c1[0]=31;
            c1[1]=a[1]-1;
        }
    }
    else if(a[1]==1){
        if(a[0]==1){
            c1[0]=31;
            c1[1]=12;
            c1[2]=a[2]-1;
        }
    }
    //TOMORROW'S DATE FOR FEB
    if(a[1]==2){
        if(a[2]%4==0){
            if(a[2]%100==0){
                if(a[2]%400==0){
                    if(a[0]==29){
                        b1[0]=1;
                        b1[1]=a[1]+1;
                    }
                    else if(1<=a[0]<=28){
                        b1[0]=b1[0]+1;
                    }
                }
                else{
                    if(a[0]==28){
                        b1[0]=1;
                        b1[1]=a[1]+1;
                    }
                    else if(1<=a[0]<=27){
                        b1[0]=b1[0]+1;
                    }
                }
            }
            else{
                if(a[0]==29){
                    b1[0]=1;
                    b1[1]=a[1]+1;
                }
                else if(1<=a[0]<=28){
                    b1[0]=b1[0]+1;
                }
            }
        }
        else{
            if(a[0]==28){
                b1[0]=1;
                b1[1]=a[1]+1;
            }
            else if(1<=a[0]<=27){
                b1[0]=b1[0]+1;
            }
            
        }
    }
    
    
    
    
    //YESTERDAY'S DATE FOR FEB
    if(a[1]==2){
        if(a[2]%4==0){
            if(a[2]%100==0){
                if(a[2]%400==0){
                    if(a[0]==1){
                        c1[0]=31;
                        c1[1]=a[1]-1;
                    }
                }
                else{
                    if(a[0]==1){
                        c1[0]=31;
                        c1[1]=a[1]-1;
                    }
                    
                }
            }
            else{
                if(a[0]==1){
                    c1[0]=31;
                    c1[1]=a[1]-1;
                }
            }
        }
        else{
            if(a[0]==1){
                c1[0]=31;
                c1[1]=a[1]-1;
            }
            
        }
    }
    if(a[1]==3){
        if(a[2]%4==0){
            if(a[2]%100==0){
                if(a[2]%400==0){
                    if(a[0]==1){
                        c1[0]=31;
                        c1[1]=a[1]-1;
                    }
                }
                else{
                    if(a[0]==1){
                        c1[0]=31;
                        c1[1]=a[1]-1;
                    }
                    
                }
            }
            else{
                if(a[0]==1){
                    c1[0]=31;
                    c1[1]=a[1]-1;
                }
            }
        }
        else{
            if(a[0]==1){
                c1[0]=31;
                c1[1]=a[1]-1;
            }
            
        }
    }
    
    //march
    if(a[1]==3){
        if(a[2]%4==0){
            if(a[2]%100==0){
                if(a[2]%400==0){
                    if(a[0]==1){
                        c1[0]=29;
                        c1[1]=2;
                    }
                }
                else{
                    if(a[0]==1){
                        c1[0]=28;
                        c1[1]=2;
                    }
                }
            }
            else{
                if(a[0]==1){
                    c1[0]=29;
                    c1[1]=2;
                }
            }
        }
        else{
            if(a[0]==1){
                c1[0]=28;
                c1[1]=2;
            }
        }
    }
    
    //PRINTING STATEMENTS
    printf("INPUT DATE : %d.%d.%d\n",a[0],a[1],a[2]);
    printf("TOMORROW'S DATE : %d.%d.%d\n",b1[0],b1[1],b1[2]);
    printf("YESTERDAY'S DATE : %d.%d.%d\n",c1[0],c1[1],c1[2]);

    return 0;
}










