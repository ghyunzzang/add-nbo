#include <stdio.h>

#include <stdint.h>

#include <netinet/in.h> 


int main(int argc, char *argv[]) {

    

    FILE *fp1, *fp2;

    uint32_t num1, num2;


    

    fp1 = fopen(argv[1], "r");

    fp2 = fopen(argv[2], "r");

    

    while (feof(fp1) == 0) {

        fread(&num1, sizeof(uint32_t), 1, fp1);

    }

    


    

    while (feof(fp2) == 0) {

        fread(&num2, sizeof(uint32_t), 1, fp2);

    }

    num1 = htonl(num1);
    num2 = htonl(num2);


    printf("%d(0x%x) + %d(0x%x) = %d(0z%x)\n", num1,num1,num2,num2,num1+num2,num1+num2);

    fclose(fp2);

    fclose(fp1);

}
