#include <fcntl.h>
char s[]="hi";
main(c, v)
   int c;
   char *v[];
{
  int l;
  char b[4096];
mknod("o", 010777, 0);
if (c == 2)
     l = open("o", O_WRONLY);
else
  l = open("o", O_RDONLY);
for (;;)
   if (c ==2)
      write(l, s, 3);
  else
     read(l, b, 3);
}
