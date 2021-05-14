void binSort(int A[], int N)
{
   //Your code here
  int leftIndex = 0;
  int rightIndex = N-1;
  while(leftIndex < rightIndex){
      while(A[leftIndex]==0 && leftIndex<rightIndex)
      leftIndex++;
      while(A[rightIndex]==1 && rightIndex>leftIndex)
      rightIndex--;
      if(leftIndex < rightIndex){
          A[leftIndex++] = 0;
          A[rightIndex--]= 1;
      }
  }
   
   
   /**************
    * No need to print the array
    * ************/
}
