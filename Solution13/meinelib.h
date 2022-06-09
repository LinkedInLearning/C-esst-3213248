

char a[] = "abc";
char b[] = "Abc";
char c[] = "abc";


void pruefe(){
  printf("%d\n\n",strcmp(a,b));
  printf("%d\n\n",strcmp(b,a));
  printf("%d\n\n",strcmp(a,c));

}
