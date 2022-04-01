#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

#define ARR_MAX 100


int bin_search(const int a[], int n, int key)
{
	int pl = 0; 				
	int pr = n - 1; 			
	int pc; 					

	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key) 		
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;	 				
}

int generate_random(void)
{
	int x;
    int max = 1000;

    do {
        x = (rand()%max)+1;
    } while(x > 1000);

	return x;
}

int compare(const void *a, const void *b)    
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 < num2)    
        return -1;      
    
    if (num1 > num2)    
        return 1;       
    
    return 0;   
}


int main(){
    int arr[ARR_MAX] = {};
    int find_target;
    char result_comment[30];

    // 대상값 입력
    scanf("%d", &find_target);
    
    // time은 1초 단위로 출력하기에, 한번만 실행해에 동일한 값을 출력하지 않습니다.
    srand(time(NULL));
    for(int i = 0; i<ARR_MAX; i++){
        arr[i] = generate_random();
    }

    //정렬
    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
    bin_search(arr, ARR_MAX, find_target) == -1 ? strcpy(result_comment, "은 배열에 있지 않습니다\n") : strcpy(result_comment, "은 배열에 있습니다\n");
    printf("입력값: %d \n", find_target);
    printf("%d%s", find_target, result_comment);

    return 1;
}