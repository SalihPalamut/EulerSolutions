# EulerSolutions 8
[Largest product in a series](https://projecteuler.net/problem=8)

En büyük çarpımı bulan program.
9^15 =‭205.891.132.094.649‬ değeri 48 bit olduğundan sonuç 64 bit değişken seçilmiştir.

İşlemler sabittir.Her derlemede değiştirimeli veya klavyeden giriş için düzenlenmelidir.

## Ön Gereksinimler
### Code::Blocks
- Bu program Code::Blocks 17.12 IDE aracıyla C dilinde Yazılmıştır.
- gcc v5.1.0 ile derlenmiştir.
### IDE olmadan Derleme
#### Linux ortamında derleme
- Terminal açın ctrl+alt+t
- dosya yoluna gidin cd \<proje yolu\>/
- main dosyasını derleyin 
- gcc -o \<derlenmiş dosya adı\> main.c
- dosyayı çalıştırın ./\<derlenmiş dosya adı\>
     ```sh 
    $ cd EulerSolutions/Solution8
    $ gcc -o solution8 main.c
    $ ./solution8
    ```
#### Windows ortamında derleme
- Terminal açın win+R sonra cmd yazın.
- derleyici yoluna gidin cd \<derleyici yolu\>\\
- main dosyasını derleyin 
- mingw32-g++.exe –o \<dosya yolu\>\\\<derlenmiş dosya adı\>.exe \<dosya yolu\>\\main.c
- dosyayı çalıştırın
- \<derlenmiş dosya adı\>.exe
     ```sh 
    $ cd C:\MinGW\bin
    $ mingw32-g++.exe -o D:\EulerSolutions\Solution8\solution8.exe D:\EulerSolutions\Solution8\main.c
    $ solution8.exe
    ```