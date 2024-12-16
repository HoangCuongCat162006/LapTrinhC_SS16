#include<stdio.h>
void DeleteElement(int *arr,int index){
	int Length = 5;
	for (int i = index - 1;i < Length;i++){
		arr[i] = arr[i + 1];
	}
	Length--;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int Length = sizeof(arr) / sizeof(arr[0]);
    int index;
    printf("Hay nhap vi tri can xoa: ");
    scanf("%d",&index);
    if(index < 1 || index > Length){
		printf("Vi tri can xoa khong ton tai\n");
	}
	else{
		DeleteElement(arr,index);
        Length--;
        printf("Mang sau khi xoa: ");
        for (int i = 0;i < Length;i++){
    	    printf("%d ",arr[i]);
	    }
	}
    
	return 0;
}

