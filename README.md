# RTR105
![](https://leverageedublog.s3.ap-south-1.amazonaws.com/blog/wp-content/uploads/2020/06/22210327/BE-Computer-Science.png)
 # 6. septembris

termināļa komandas:
- whoami 
- uname -> OS name
- echo $0 -> shell paveids
- pwd - kur atrodas directoria  
- ls - kas ir pieejams directorija
- ls -alt -> a-paslēptie objekti; l- more in depht; t- skaārto pēc nesen rediģētā  
- ar pirmais burts + TAB = komandas, kuras sākas uz šo burtu  
- man + komanda = manuālis  
- ar . paslēpj lietas
- -komanda pēctam atslēga, piemērams al ->= -al  
- cd - change directori  ; ar cd .. -> pārvietoties vienu līmeni zemāk
-  ~ = tilde = home directory  
- mkdir -> uztaisa directory  
- nano - texta editors
- cat -> izlasa failu  
- rm -> dzēst failu vai ar rmdir -> tukšu directory
- histry -> aplūkot terminālī rakstīto vēsturi

  
  git clone https://github.com/Homer-Fireman/RTR105/ .kur gribu
  
  
 # 13. septembris
  
 - ps aux - palaistie procesi
 - ps -aux | grep -> meklēt procesu
 - ar & startē lietas atsevišķi
 - history > history_12092022a.txt  -> novirza vēsturi un saglaba to jaunā failā
 - mv -> pārvietot failu(arī tā pati pārvietošana)
 - rm -rf -> del dir ar saturu

  # 20. septembris
  
 - (-) -> norāda uz failu
 - cd .. -> pacelties līmeni augstāk
 - l -> links aka shortcut
 - chmod -> maina faila tiesības
 - chmod 764 -> pieškir tiesības izpildīt fialu
 - grep -> filtrs, kurš meklē paternu
 - nenorādod adresi, tiek pārskatītas komandas, kas ir $PATH (ls ir bin mapē)
 - lai palaistu failu ir vai nu jānorāda pilnā adrese (vai arī ./ ,kas norāda meklēt pašreizējā dir), vai jāpapildina $PATH

  # 27. septembris
 
 - gcc -> C valodas compiler; -o -> var nosaukt failu ka velas
 - main(){} -> c valodas sākums
 - c valodas kodu pabeidz ar return 0, pa vidu var ielikt return 1 utt, lai pēc tam pārbaudītu, līdz kurienei kods strādā, bet funkcija strādā līdz pirmam    return
 - echo $? -> ipriekšējas komandas/faila izpildes rezultāts
 - hexdump -> izmet hex vērtības


  # 27. septembris
  
 - oktālie skaitļi ir ar lieku 0 sākumā, bet hexa ar 0x
 - gcc -save teps saglabā ar starprezultātiem
 - Datu porcijas -> 1char ir viens burts, kas aizņem 1Byt, jeb 8bit, kas ir int0-255
 - \n -> Newline
 - \t -> Horizontal Tab
 - \v -> Vertical Tab
 - \b -> Backspace (vienu vietu atpakaļ kursoru)
 - \a -> Alert (Beep, Bell)
 - \r -> kursors uz rindas sākumu
 https://en.wikipedia.org/wiki/Escape_sequences_in_C




  # 11. oktobris
  
 - lai attēlotu "";\ u %, pirms tā jāliek \
 
 
  # 18. oktobris
   
 Operācijas:
 - matemātiskās -> *;-:+;/;%(c nedrīkst lietot reāliem skaitļiem)
 - attiecības operācijas -> <;<=;>;>=;==;!=
 - loģiskās -> &&; || ; !
 - loģiskās pa bitiem -> &;|;^;~ 
 - bitu nobīde -> >>;<< (tā pārveido mainīgo par int)  
operācijā piedaloties dažādiem datu tipiem, gala rezultātā būs lieākais, un to izpildes secību ietekmē operātors, iekavas
  
 - else if in C -> 
