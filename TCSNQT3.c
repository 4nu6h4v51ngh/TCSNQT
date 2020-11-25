#include <stdio.h>
int main() 
{
    
    char line[150];
    int vowels,a,e,i,o,u,j;

    vowels = 0;
    a=e=i=o=u=0;

    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'A')
            ++a;
        else if (line[i] == 'e' || line[i] == 'E')
            ++e;
        else if (line[i] == 'i' || line[i] == 'I')
            ++i;
        else if (line[i] == 'o' || line[i] == 'O')
            ++o;
        else if (line[i] == 'u' || line[i] == 'U')
            ++u;
        if(j=1; j<line[i]; j++)
        line[j]=line[j+1];
        
    }
    printf("a:%d\n e:%d\n i:%d o:%d u:%d",a,e,i,o,u);
    printf("%s",line);
    
}
