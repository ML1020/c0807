#include <stdio.h>
#include <stdlib.h>

void Search(int k, int arr[]){
	for (int i = 0; i < 8; i++){
		for (int j = 7; j > i; j--)
		{
			if (arr[i] + arr[j] == k){
				printf("%d %d\n", i, j);
			}
		}
	}

}

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 7, 7, 8 };
	Search(10, arr);
	
	system("pause");
	return 0;
}
