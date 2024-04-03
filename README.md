# Elektronska_Kljucavnica_1
Projekt_UPN-p  <br>
  <br>
Navodila:  <br>
Na voljo imate 9 tipk (številke 1 do 9 na tipkovnici 3x4 "keypad"). <br>
S pravilno kombinacijo 4 številk (npr. 6789) odpremo ključavnico (zelena LED). <br>
Vsaka napaka vrne krmilje v izhodiščni položaj. <br>
Vpis kombinacije je mogoč samo, če je vklopljeno stikalo na pozicijo 1.  <br>
  <br>
  <br>
  <br>
KOSOVNICA:  <br>
   - Keypad(3*4)  1x  <br>
   - Arduino Uno  1x  <br>
   - LED Dioda    1x  <br>
   - Stikalo      1x  <br>
   - Upor(220Ω)   2x  <br>
<br>
<br>
<br>
<br>
<br>

VHODI:

| Oznaka v načrtu | Naslov operanda | Vrsta kontakta | Pomen |
| --------------- | --------------- | -------------- | ----- |
| U1 | Keypad 3x4 | Keypad | Za vnos številk in potrditev kode |
| SW1 | Stikalo      | menjalno stikalo | Za omogočanje delovanja keypad-a |


<br>
<br>
IZHODI:

| Oznaka v načrtu | Naslov operanda | Aktiven pin | Pomen |
| --------------- | --------------- | ------ | ----- |
| LED1 | LED | 9 | Potrjuje pravilno vneseno kodo |
<br>
<br>
<br>
<br>
<br>
<br>
<br>


![Alt text](https://github.com/kl3msy/Elektronska_Kljucavnica_1/blob/main/slika_vezja_1.png?raw=true)

<br>
<br>
<br>

![Alt text](https://github.com/kl3msy/Elektronska_Kljucavnica_1/blob/main/slika_vezja_2.png?raw=true)

<br>
<br>
<br>

![Alt text](https://github.com/kl3msy/Elektronska_Kljucavnica_1/blob/main/slika_vezalne_sheme.png?raw=true)

<br>
<br>
<br>

<video src="https://github.com/kl3msy/Elektronska_Kljucavnica_1/raw/main/video_delovanja_vezave.mp4"  width="200" height="100" controls></video>

<br>
<br>
<br>
<br>
<br>
<br>

KOMENTAR: <br>
Najen komentar za delovanje je, da je tipkovnica malo zastarela, zato je potrebno počasnejše vnašanje števil, če ne jih ne zazna. <br>
Za izboljšavo projekta pa meniva, da bi bilo primerno dodati rdečo LED diodo, ki se prižge ob napačnem vnosu kode, ter zaslon, ki izpisuje vnesena števila. <br>
Če za izpisovanje števil nemoremo uporabiti zaslona, bi lahko uporabilio tudi serial.print, ki je vgrajen v arduino aplikacijo. <br>
