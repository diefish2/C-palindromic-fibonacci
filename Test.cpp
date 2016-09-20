#include<iostream>
#include<math.h>
using namespace std;
/*fibonacci*/
/* 
int main()
{
  int a[92]; 
  float c[]={1,1,2,3,5,8,13}; 
  int b; //Insert Data
  int i;
  cin>>b;
 if (b==0){
        b=0;
      cout<<b<<endl;
  }
  else if(b==1){
      cout<<c[b-1]<<endl;
     
  }
else if(b==2){
      cout<<c[b-2]<<endl;
      cout<<c[b-1]<<endl;
     
  }
  else if(b>3)
   {    
      cout<<c[0]<<endl;
      cout<<c[1]<<endl;
      cout<<c[2]<<endl;
       for(i=3;i<b;i++)
         {
            c[i]=c[i-1]+c[i-2];
            cout<<c[i]<<endl;
            

   }
   }
         else 
         {
             cout<<"ReEnter"<<endl;
             return main();
         }
  
  return 0;
  }
*/

/*palindromic*/
int main(){
  char a[100];
  int b;
  int i;
  int remove;
  int j;
  int factorial = 1;
  int counter;
  cout<<"Insert Number of array"<<endl;
  cin>>b;
  cout<<"Value of a"<<endl;
  for(i=0;i<b;i++){
      cin>>a[i];
  }
  cout<<"Duplicate Value"<<endl;

  for(i=0; i<b; i++)
  {
      for(j=i+1;j<b;j++)
      {
          if(a[i]==a[j] && a[i]!=' ')
          {
              a[i]=a[j]=' ';
              cout<<a[i]<<endl;
              counter +=1;
          }
      }

  }
  cout<<"counter Value"<<endl;
  cout<<counter<<endl;

  for(int a=1; a<=counter; a++)
  {
      factorial=factorial*a;
  }
  cout<<"The number of sym     "<<factorial<<endl;

  if(b%2==0)
  {
     remove=b-counter*2;
     cout<<"remove number"<<remove<<endl;
  }
  else{
           remove=b-counter*2-1;
           cout<<"remove numer"<<remove<<endl;
      }


    return 0;
}