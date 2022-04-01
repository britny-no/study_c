#include <stdio.h>

void nrpira(){
    int x, y;

    for (y = 1; y <= 4; y++) {
        int count = 7-2*(y-1);
        int used = 0;

        for (x = 1; x <= 7; x += 1) {
            if((used ==0 && x == y) || (used !=0 && used < count)){
                printf("%i", y);
                used = used + 1;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}


void ex_2_11()
{
	int i, n;
	int prime[500];				/* �Ҽ��� �����ϴ� �迭 */
	int ptr = 0; 				/* �̹� ���� �Ҽ��� ���� */
	unsigned long counter = 0;	/* ������ �������� Ƚ�� */
	
	prime[ptr++] = 2; 			/* 2�� �Ҽ��Դϴ� */
	prime[ptr++] = 3; 			/* 3�� �Ҽ��Դϴ� */
	for (n = 5; n <= 1000; n += 2) {		/* Ȧ������ ������� �մϴ�. */
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if (n % prime[i] == 0) {	/* ����������� �Ҽ��� �ƴմϴ�. */
				flag = 1;
				break; 		/* �� �̻��� �ݺ��� �ʿ� �����ϴ�. */
			}
		}
	
		if (!flag) 		/* ���������� ����������� �ʾҽ��ϴ�. */
			prime[ptr++] = n; 	/* �迭�� ���� */
	}
	
	for (i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);
	
	printf("곱셈과 나눗셈을 실행한 횟수 : %lu\n", counter);
}

int main() {

    // nrpira();
ex_2_11();


    return 0;

}