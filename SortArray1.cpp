#include <iostream>
using namespace std;

int merge_arrays(int* arr1,int* arr2,int size1,int size2)
{
int arr3[size1+size2];
if(arr1[size1-1]>arr2[size2-1])
{
int size=0;
int j=0;
  for(int i=0;i<size1;)
    {if(j==size2)
      {arr3[size]=arr1[i];
       i++;
      }
    for(;j<size2;)
    {
      if(arr1[i]<arr2[j])
       {
        arr3[size++]=arr1[i];
        i++;
        break;
       }
      else
       {
        arr3[size++]=arr2[j];
        j++;
       }

     }
    }
}
else
{
int size=0;
int j=0;
  for(int i=0;i<size2;)
     {if(j==size1)
       {arr3[size]=arr2[i];
        i++;
       }
     for(;j<size1;)
      {
        if(arr2[i]<arr1[j])
          {
           arr3[size++]=arr2[i];
           i++;
           break;
          }
         else
        {
         arr3[size++]=arr1[j];
         j++;
        }
      }
     }
}

 for(int i=0;i<(size1+size2);i++)
     {cout<<arr3[i]<<endl;}




}
int main(){

int arr1[]={1,5,6,7,10,13,18};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={4,11,12,16,19};
int size2=sizeof(arr2)/sizeof(arr2[0]);
merge_arrays(arr1,arr2,size1,size2);
}
