#include <stdio.h>
#include <string.h>

int main()
{
    char name_str1[20] = "WILL";
    char name_str2[10] = "WHITE";
    char name_str3[20];

    printf("Length of the string is: %zu\n", strlen(name_str1));

 
    printf("The Original Name is: %s\n", name_str1);
    strcpy(name_str3, name_str1);
    printf("The Copied Name is: %s\n", name_str3);
  printf("The Original String is :%s\n",name_str1);
   strrev(name_str1);
   printf("The Reversed String is:%s\n",name_str1);
    if(strlen(name_str1) > strlen(name_str2)){
      printf("largest:%s\n",name_str1);
    }
  else{
    printf("largest:%s\n",name_str2);
  }
     strcat(name_str1, name_str2);
    printf("Joined String is: %s\n", name_str1);


    return 0;
}
