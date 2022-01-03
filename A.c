#include <stdio.h>
#include <string.h>
//
// 0 1 2 3 4 5 6
// 1 candleTech <- berada di baris 1
// 2
// 3
// 4
// 5
// 6
int main(){
	//array string
	char a[100][100];
	//
	strcpy(a[0], "senjadev");
	strcpy(a[1], "candleTech");
	//variabel interger
    int belanja;
    printf("Masukan total belanjaan anda\n");
    scanf("%i", &belanja);
    //
    //output
    printf("total belanjaan anda %i\n", belanja);
    printf("Di beli oleh :");
    printf("%s\n", a[0] );
    printf("di buat oleh :");
    printf("%s\n", a[1] );
    //percabangan if else
    if (belanja > 50)
    {
    	printf("gg kamu naks");
    }
    else {
    	printf("hai nilai kamu kurang dari 50");
    }
    return 0;
}
