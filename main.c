#include "libft.h"
#include <stdio.h>
#include <string.h>

void test_one(char c)
{
	if (ft_isalpha(c))
		printf("El carácter %c es alpha \n", c);
	else if (ft_isdigit (c))
		printf("El carácter %c es digito \n", c);
}

void test_two(char c)
{
	if (ft_isalnum(c))
		printf("El carácter %c es alphanum \n", c);
	else if (ft_isascii(c))
		printf("El carácter %c es ascii \n", c);
	
}

void test_three(char c)
{
	if (ft_isprint(c))
		printf("El carácter %c es printable \n", c);
	else
		printf("El carácter %c no es printable \n", c);
}

void test_four(char *c)
{
	printf("El string [ %s ] mide: %d \n", c, ft_strlen(c));
}

void test_toupper()
{
	char c = 'a';
	char b = 'X';
	char d = 'n';

	printf("Char %c to upper %c \n", c, ft_toupper(c));
	printf("Char %c to upper %c \n", b, ft_toupper(b));
	printf("Char %c to upper %c \n", d, ft_toupper(d));
}

void test_tolower()
{
	char c = 'a';
	char b = 'X';
	char d = 'n';

	printf("Char %c to lower %c \n", c, ft_tolower(c));
	printf("Char %c to lower %c \n", b, ft_tolower(b));
	printf("Char %c to lower %c \n", d, ft_tolower(d));
}

void test_strchr()
{
	char str[] = "42Barcelona.es.la.respuesta";
	char ch = '.';
	char *ret;

	ret = ft_strchr(str, ch);

	printf("String despues | %c | es - | %s |\n", ch, ret);
}
void test_strrchr()
{
	char str[] = "42Barcelona.es.la.respuesta";
	char ch = '.';
	char *ret;

	ret = ft_strrchr(str, ch);

	printf("String desues de la ultima | %c | es - | %s |\n", ch, ret);
}
void test_strncmp()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "ABCDEF");
	strcpy(str2, "ABCDef");

	ret = ft_strncmp(str1, str2, 4);

	if(ret < 0) {
		printf("str1 is less than str2");
	} else if(ret > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}
   
	printf("\nValue returned by strncmp() is: %d \n" , ret);
}
void test_memset()
{
	char str[50] = "42Barcelona es la respuesta a toda pregunta Geek";
    printf("Antes memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    //ft_memset(str + 13, '.', 51*sizeof(char));
  
    //printf("Después memset():  %s \n", str);

    bzero(str, 10);

     printf("Después bzero():  %s \n", str);

}
void test_memchr()
{
   char cadena[] = "Erase una vez...";
   char *puntero; 
 
   puntero = (char *)ft_memchr( cadena, '.', 10 );
   printf( "%s\n", cadena); 
   printf( "%s\n", puntero ); 	
}
void test_memcpy()
{
	char src[50] = "42Barcelona es la respuesta";
	char dest[50];
	strcpy(dest,"Heloooo, how are you!!");
	printf("Antes memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 50);
	printf("Despues memcpy dest = %s\n", dest);
}
void test_memcmp()
{
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "abcdef", 6);
   ft_memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) 
      printf("str2 is less than str1: %d \n", ret);
   else if(ret < 0) 
      printf("str1 is less than str2: %d \n", ret);
   else 
      printf("str1 is equal to str2: %d \n", ret);
  }

int main()
{
	/*printf("Test de ft_isalpha \n");

	char c[] = "asdf23 25 -* / 14aser $%& \1";
	int i = 0;

	while (c[i] != '\0')
	{	
		
		test_one(c[i]);
		test_two(c[i]);
		test_three(c[i]);
		test_four(c);
		
		i++;
	}
	test_toupper();
	test_tolower(); 
	test_strchr();
	test_strrchr();*/
	//test_memset();
	//test_strncmp();
	//test_memchr();
	//test_memcpy();
	test_memcmp();
}

