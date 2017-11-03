#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

int main(int argc, char* argv[])
{
int i,j=0;
double n=1,x=0;
double chisla[argc];
char oper[argc];
    for( i=1; i <= argc; i+=2)
     {
        n=atof(argv[i]);
        if (i==argc)
        {
        chisla[j]=n;
        goto p1;
        }
        else
        {
                if ((argv[i+1]!="*") && (argv[i+1]!="/"))
                  oper[i/2]=atof(argv[i+1]);
                         if ((argv[i+1]=="+") || (argv[i+1]=="-"))
                                {
                                chisla[j]=n;
                                j++;
                                }
                        else
                        {
                        for( ; i <= argc; i+=2)
                                while((argv[i+1]!="+") && (argv[i+1]!="-"))
                                {
                                        if(argv[i+1]=="*")
                                                n = n * atof(argv[i+2]);
                                        if(argv[i+1]=="/")
                                                n = n / atof(argv[i+2]);
                                }
                        chisla[j]=n;
                         j++;
                }
        }
     }
p1:     for ( i=0; i < j; i++)
        {
         if (oper[i]=='+')
          x=x+chisla[i];
         if (oper[i]=='-')
          x=x-chisla[i];
        }
cout << x;
return 0;
}
