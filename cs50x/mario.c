#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    int height,c,d,e;
    do{
    height = get_int("Height:");
    }while(height<1 || height>8);
    for(c=height;c>0;c--){
        for(d=1;d<=c;d++){
            if(d==c){
                e=d;
                while(e<=height){
                    printf("#");
                    e++;
                }
            }    
            else{
                printf(" ");
            }
        }
       
        
    
    printf("\n");
}
}