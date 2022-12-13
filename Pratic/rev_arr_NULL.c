/* WAP to print elements of array in reverse order if found element is null 
  For ex: 
   INPUT : Array = {3, 4, 5, 7, 0, 8, 1, 9}; 
    Find out the element is NuLL and print the ouput 
   OUTPUT : 0, 7, 5, 4, 3 */





#include<stdio.h>
int main()
{
	int i,j,cnt=0,size;
	printf("Enter the size of Array: ");
	scanf("%d",&size);
	int arr[size];
	
	
	printf("Enter the  Array elements are\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	
	
	printf("The Array elements are : ");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	
	
	for(i=0;i<size;i++)  //Finding the NULL element in an Array
	{
		cnt++;
		if(arr[i]==0)
			break;
	}
	
	
	for(i=0,j=cnt-1;i<j;i++,j--)  //Reversing the array elements from NULL
		arr[i]^=arr[j]^=arr[i]^=arr[j];
	

	printf("\nAfter the Rev The Array elements are : ");
	for(i=0;i<cnt;i++)
		printf("%d ",arr[i]);
	
	printf("\n");
	
	
	printf("All elements in an Array : ");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
