/*! \file main.c
\brief En büyük çarpımı bulan program.
9^15 =‭205.891.132.094.649‬ değeri 48 bit olduğundan sonuç 64 bit değişken seçilmiştir.
\author Salih Palamut
\version 0.1.0
\date 2020
\pre Yok.
\bug Yok.
\warning İşlemler sabittir.Her derlemede değiştirimeli veya klavyeden giriş için düzenlenmelidir.
\copyright GNU Public License.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
///RAM Bellekten yer kaplamamak için const olarak tut.
const uint8_t buffer[1000]=
{
    6,4,0,7,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,9,6,9,8,3,5,2,0,3,1,2,7,
    7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,
    0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,
    9,5,2,2,7,4,4,3,0,4,3,5,5,7,6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,
    1,3,6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,3,0,3,5,8,9,0,7,2,9,
    6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,
    8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,
    1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,
    5,3,9,7,5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,8,3,9,7,2,2,4,1,
    3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,3,9,8,9,0,
    0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,
    8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,
    6,9,0,0,4,2,2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,0,7,1,9,8,4,
    0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,
    3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,
    8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,
    5,2,9,6,3,4,5,0
};
/*! \typedef solution_t
\brief Bu yapı işlem sonuç bilgilerini barındırır.*/
typedef struct
{
    uint64_t calc;/*!< Hesaplanan değer */
    uint16_t pos;/*!< İşlemin başlangıç indisi */
    uint8_t slice;/*!< ardışık sayı adeti */
} solution_t;

/*! \fn find_max_mult(uint8_t* array,uint16_t length,uint8_t slice)
\brief Dizinin en büyük çarpımınını döndüren fonksiyon.
\param array İşlenecek dizi.
\param length Dizi Uzunluğu.
\param slice Parça uzunluğu.
\return solution_t işlem sonucu.
*/
solution_t find_max_mult(uint8_t* array,uint16_t length,uint8_t slice);

int main()
{
    solution_t sol;
    /**Algoritma doğrulama işlemi için verilen bilgiler karşılaştırılır.
    Aşağıdaki dizide çarpımları en büyük sonucu veren 4 ardışık rakam:
    9x9x8x7 = 4536 dir. Bu 4 rakamın dizi içindeki konumu 365. elemandan başlamaktadır.
    */
    sol=find_max_mult(buffer,1000,4);
    printf("%d ardisik carpim sonucu = %llu elemanlar baslangic %d'dan %d. elemana kadar.\n",sol.slice,sol.calc,sol.pos+1,sol.pos+sol.slice+1);
    for(uint8_t i=0; i<4; i++)
    {
        printf("%d ",buffer[sol.pos+i]);
    }
    printf("\n");
    for(uint8_t i=10; i<16; i++)
    {
        sol=find_max_mult(buffer,1000,i);
        printf("%d ardisik carpim sonucu = %llu elemanlar baslangic %d'dan %d. elemana kadar.\n",sol.slice,sol.calc,sol.pos+1,sol.pos+sol.slice+1);
    }
    return 0;
}

solution_t find_max_mult(uint8_t* array,uint16_t length,uint8_t slice)
{
    // printf("%p %d %d %d\n",array,array[0],length,slice);
    solution_t ret;
    ret.calc=0;
    ret.slice=slice;

    uint64_t product=1;
    ///Dizinin sonuna kadar işlem yap
    for (int i = 0; i <= length - slice; i++)
    {
        product = 1;
        ///Parça uzunluğu kadar çarpım yap.
        for (int j = 0; j < slice; j++)
        {
            ///0 değerlerini atla ve diziye 0 rı atlayarak devam et
            if(array[i+j]==0)
            {
                i+=j;
                product=1;
                //    printf("0 \n");
                break;
            }
            product *= array[i+j];
            //  printf("%d ",array[i+j]);
        }
        //  printf("\n");
        ///En büyük değeri ve indisini geri dönüş değeri olarak tut.
        if (product > ret.calc)
        {
            ret.calc = product;
            ret.pos=i;
        }
    }
    return ret;
}
/*! \mainpage Ön Gereksinimler
\section intro_sec Code::Blocks
\li Bu program Code::Blocks 17.12 IDE aracıyla C dilinde Yazılmıştır.
\li gcc v5.1.0 ile derlenmiştir.
\section compile_sec IDE olmadan Derleme
\subsection Linux Linux ortamında derleme
\li Terminal açın ctrl+alt+t
\li dosya yoluna gidin cd \<proje yolu\>/
\li main dosyasını derleyin gcc -o \<derlenmiş dosya adı\> main.c
\li dosyayı çalıştırın ./\<derlenmiş dosya adı\>
\subsection Windows Windows ortamında derleme
\li Terminal açın win+R sonra cmd yazın.
\li derleyici yoluna gidin cd \<derleyici yolu\>\\
\li main dosyasını derleyin mingw32-g++.exe –o \<dosya yolu\>\\\<derlenmiş dosya adı\>.exe \<dosya yolu\>\\main.c
\li dosyayı çalıştırın \<derlenmiş dosya adı\>.exe
*/
