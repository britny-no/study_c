#include <iostream>
#include <string>

// #define CHAR_MAX 100
// #define FILTER_MAX 100


char* filterLength(char* tar, int max){
    int dif = max - (int)strlen(tar);
    char *str_p; 

    str_p = (char*)malloc(strlen(tar) +dif+ 1);
    strcpy(str_p, tar);
    for(int i =0; i<dif; i++){
        strcat(str_p, " ");
    }
    // printf("%s \n", str_p); 
    return str_p;
}


int main ()
{
    // using namespace std;
    // char a[4] = "!23";
    // printf("%s", filterLength(a, 4));
    
    int count = 0;
    int n,d;


    do{
        puts("양의 정수를 기입해주세요");
        scanf("%d", &n);
    }while(n <= 0);

    while(d>=1){
        d = n/10;
        count++;
    }

    printf("\n\n");

    //열
    for(int h =0; h<=n; h++){
        //행
        for(int y =0; y<=n; y++){
            int multi = h*y;
            //int -> char 변환
            char num_char[100 + sizeof(char)];
            std::sprintf(num_char, "%d", multi);
            char *s_ = filterLength(num_char, count+2);

            // 둘다 0일때
            // 둘중 하나만 0일때
            // 둘다 0이 아닐때
            if(h == 0 && y == 0){
                printf("    ");
            }else if(h == 0 || y == 0){
                if(y == 1){
                    printf(" | %s  ", s_);
                }else{
                    char tar_num = h != 0 ? h: y;
                    char num_char[100 + sizeof(char)];
                    std::sprintf(num_char, "%d", tar_num);
                    char *s_ = filterLength(num_char, count*count);
                    printf(" %s  ", s_);
                }
                // printf(" %s  ", s_);
            }else{
                y == 1 ? printf(" | %s  ", s_) :  printf(" %s  ", s_);
            }
        }
        printf("\n");

        if(h==0){
            for(int y =0; y<=n; y++){
                y != 1 ? printf("----") : printf("-+--");
            }
        }
        printf("\n");
    }

    return 1;

}



