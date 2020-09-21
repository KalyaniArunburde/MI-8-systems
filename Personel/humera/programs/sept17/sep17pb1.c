/* cprogram to merge and sort elements of 2 different arrays
*/
#include <stdio.h>
void merge( int *,int,int,int);
void mergesort(int*array,int left,int right)
{
  int middle=(left+right)/2;
  if(left<right)
  {
    mergesort(array,left,middle);
    mergesort(array,middle+1,right);
    merge(array,left,middle,right);
  }
}
/*merge function merges the two sorted parts*/
void merge(int *array,int left,int middle,int right)
{
  /*to store sorted array*/
  int tmp[right-left+1];
  int pos=0,leftposition=left,rightposition=middle+1;
  while(leftposition<=middle&&rightposition<=right)
  {
    if(array[leftposition]<array[rightposition])
    {
      tmp[pos++]=array[leftposition++];
    }
    else
    {
      tmp[pos++]=array[rightposition++];
    }
  }
  while(leftposition<=middle)
    tmp[pos++]=array[leftposition++];
  while(rightposition<=right)
    tmp[pos++]=array[rightposition++];
  int i;
  for(i=0;i<pos;i++)
  {
    array[i+left]=tmp[i];
  }
  return;
}
int main()
{
  int size;
  printf("\n enter the size of an array:\n");
  scanf("%d",&size);
  int array[size];
  int i,j,k;
  printf("\n enter the array elements:\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&array[i]);
  }
  /*calling this functionsorts array*/
  mergesort(array,0,size-1);
  for(i=0;i<size;i++)
  {
    printf("\n%d\n",array[i]);
  }
  printf("\n");
  return 0;
}
