#include <stdio.h>;
#include <conio.h>;

int a, b, c, terbesar;

main(){
 terbesar=0;
   printf("MENENTUKAN NILAI TERBESAR \n");

   printf("\n\n");
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

