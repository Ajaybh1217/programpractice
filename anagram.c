
int isAnagram(char *str1, char* str2)
{
  int i=0,check;
  while(str1[i]!='\0')
  {
    i=i+1;
  }
  int sizestr1=i,j=0;
  while(str2[j])
  {
    j=j+1;
  }
  int sizestr2=j;
  if(sizestr1!=sizestr2)
  {
    return 0;
  }
  else
  {
    for(i=0;str1[i]!='\0';i++)
    {
       check=0;
     	for(j=0;str2[j]!='\0';j++)
        {
			if(str1[i]==str2[j])
            {
              str2[j]=' ';
              check=1;
              break;
            }

        }
      if(check!=1)
            return 0;
     }
     return 1;
   }
}
