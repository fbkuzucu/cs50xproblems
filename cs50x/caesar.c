#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{   
   int new = 0;

   if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int a = atoi(argv[1]);

    string x = get_string("plaintext:");
    int y = strlen(x);
    
    for(int z=0;z<y;z++){
        if(x[z]>64 && x[z]<91){
            if(a>26){
                a = a%26;
            }
            new = (x[z] + a) ;
            if(new>90){
                x[z]=new-26;
            }
            else
                x[z] = new;
        }
        else if(x[z]>96 && x[z]<123){
            if(a>26){
                a = a%26;
            }
            new = (x[z] + a) ;
            if(new>122){
                x[z]=new-26;
            }
            else
                x[z] = new;
        }
        else{
            x[z]=x[z];
        }


    }
    printf("ciphertext:%s\n",x);


    

}