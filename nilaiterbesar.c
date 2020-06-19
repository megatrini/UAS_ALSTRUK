#include <stdio.h>;
#include <conio.h>;

int a, b, c, terbesar;

main(){
 terbesar=0;
 		printf("Nama : Mega Trini Oktaviani\n");
		printf("Kelas : B\n");
		printf("NPM : 197006009\n\n");
   printf("\t\tMENENTUKAN NILAI TERBESAR \n");
   printf("Masukan Nilai ke-satu: "); scanf("%i",&a);
   printf("\nMasukan Nilai Ke-Dua : "); scanf("%i",&b);
   printf("\nMasukan Nilai Ke-Tiga : "); scanf("%i",&c);

    if (a > b){
       terbesar = a;
      } else terbesar=b;

      if (terbesar > c){
       terbesar=terbesar;
      } else terbesar = c;


printf("\n Bilangan Terbesar : %i",terbesar);

getch();
}

