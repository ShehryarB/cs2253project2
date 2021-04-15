#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define BUZZ_SIZE 1024
#define STR_SIZE 100 //STR_SIZE doesn't have to be a constant

int main(int argc, char **argv)
{
    char *buff;
    bool spacenotfound;
    int i, m, p, j, s, t, z, f;
    int PC, r, PCC;
    bool addressmodnotfound;
    char addressingmode;
    bool nospacethere, nodotthere;
    PC=0;
    int e=0,u;
    char *X;
    int addressDif[20];
    int pcounter[20];
     char *Y;
    char ** arr;

        //long_string = (char *)malloc(sizeof(char)*STR_SIZE*10);
        arr = malloc(sizeof(char *)*50);
        Y = malloc(sizeof(char )*50);
        X = malloc(sizeof(char )*50);
        buff = malloc(sizeof(char )*100);

    FILE *f = fopen("SecondTestcase.txt", "r");
    j=0;
    while (fgets(buff, BUZZ_SIZE, f) != NULL)
    {
          char temp = 'K';
        spacenotfound = true;
        z=0, f=0;
        while (temp !='\0' && spacenotfound)
           {
               temp = buff[z];
               if (isspace(temp))
               {

                   spacenotfound =false;
               }
               else
               {
                X[z] = temp;
               }
               z++;
           }
           X[z-1] = '\0';
           opcodes[f] = X;
           printf("OPCODE: %s\n", opcodes[f]);
           f++;





        i=0,
        addressmodnotfound = true;
        nospacethere = true;

      while (buff[i]!='\0' && nospacethere)
       {
        //printf("1");
           if (buff[i]==' ')
           {
               nospacethere = false;
           }
           i++;
       }
       if (!(nospacethere))
       {
           PC = PC+2;
       }
       else
       {
           PC = PC+1;
       }
       pcounter[j]=PC;
       i=0;
      while (buff[i]!='\0')
      {

          if(buff[i]=='_' && addressmodnotfound)
          {
              addressingmode = buff[i+1];
              addressmodnotfound=false;
              if(addressingmode == 'I')
              {

              }
              else if (addressingmode == 'D' || addressingmode == 'X' || addressingmode == 'N')
              {
                m = 0;
                while (buff[m]!= ' ')
                {
                    m++;
                }
                p=0;
                m = m+1;

                while (buff[m] != '\n')
                {
                    Y[p] = buff[m];
                    p++;
                    m++;
                }

                e=0;
                for(e=0; Y[e]!='\0'; e++)
                 {
                    arr[j][e] = Y[e];
                 }
                arr[j][e]='\0';
                j++;
              }
          }
          i++;

      }


      r=0, PCC=0, nodotthere=true;
      while (buff[r] !='\0' && nodotthere)
      {
          if(buff[r]=='.')
          {
              nodotthere=false;
          }
          r++;
      }
    printf("Buff: %s", buff);

      s=0;
      if(!(nodotthere))
      {
          while(buff[s]!= ' ')
          {
              X[s]=buff[s];
              s++;
              printf("buff %s", buff);
          }
          X[s] ='\0';

        for(u=0; u<j+1 ; u++)
        {
            printf("arr[u]: %s\n", arr[u]);
            printf("X: %s\n", X);
            if(strcmp(arr[u],X)==0)
            {
                printf("Shehryar\n");
                addressDif[u]=PC-pcounter[u];
            }
        }
      }

}
   int b;
    fPointer = open("Tables.SYM", "a");
    for (b=0; addressDif[b]!='\0' ; b++)
    {
       fprintf(arr[b]);
       fprintf(addressDif[b]);
    }
    fclose(fPointer);

    fpointer1 = open1("Machine.hex", "a")
    for (b=0; opcodes[b]!='\0' ; b++)
    {
       fprintf(hex);
    }
    fclose(fPointer1);
    for (b=0; b<2 ; b++)
     printf("LABEL: %s and PC: %d and ADDRESSDIF: %d\n", arr[b], pcounter[b], addressDif[b]);
    fclose(f);


               //opcode
           char instructionArr[]= {"ADDA_I","ADDA_D","ADDA_N","ADDA_X"};
           char hexDec[]={"8B","9B","AB","BB"};
           int p=0, q=0;
           char hex[]= "";
           for (p=0; p<f; p++)
           {
               for (q=0; q<4; q++)
               {
                   if (stcmp(opcodes[p], instructionArr[q]))
                       {
                           hex = strcat(hex, hexDec[q]);
                       }
               }

           }

    return 0;
}
