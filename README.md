Md5 Cracker (Brute-Force)

=========================


Wordlisk kullanmadan, anlık olarak şifre oluşturup; girilen hash değeri ile karşılaştırıp sonucu size gösterir.
Farklı işletim sistemleri ve işlemcilerde yapılan testlerde saniyede ortalama 290.215 kontrol yapabilmektedir.

* md5cracker.exe normal kullanıcılar içindir. Uygulamayı çalıştırıp Md5 Hash'inizi girerek işlemi başlatabilirsiniz.
* md5.cpp ve md5.h dosyaları, RSA Data Security tarafından yayınlanan C++ md5 algoritma dosyalarıdır.
* main.cpp ana işlemlerin yapıldığı dosyadır.
* md5cracker.cbp dosyası, IDE olarak Code-Blocks kullananlar için hazır proje dosyasıdır.


v.1 - 11.05.2014
----------------
* Wordlist kullanımına gerek yoktur.
* Sadece rakam ve büyük-küçük harften oluşmuş hash'leri kırabilir.
* Min 1 max 14 karakterli şifreleri kırabilir.
* Yukarıda belirtilen şartlara uygun kıramayacağı hash yoktur. Sadece karakter sayısı arttıkça zaman artar.
* CPU'nun %35'ini kullanarak, 3.2 Ghz ile saniyede 232.949 kontrol (Intel Core i5-3230M)
