#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, temp =0,len;
    char arr[100];
    scanf("%[^\n]s",arr);
    len = strlen(arr);
     for(i=0,j=len-1; i<j; )
     {
         if(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o'  && arr[i] != 'u')
         {
             if(arr[j] != 'a' && arr[j] != 'e' && arr[j] != 'i' && arr[j] != 'o' &&  arr[j] != 'u')
             {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
                 i++;
                 j--;
             }
             else
             {
                 j--;
             }
         }
             else
             {
                 i++;
             }
         
     }
     printf("%s",arr);
}
