# Dihotomijas metode
## Programmas mērķis
Šī programma izmanto Dihotomijas metodi, lai aprēķinātu x vērtību, kas atbilst f(x)=c vienādojumam, un atbilst robežām a un b, izmantojot cos(x^2) kā f(x) funkciju.

## Metodes darbības princips [1]

- Dihotomijas metode ir iteratīva metode, kas darbojas, sadalot intervālu a un b vērtības vidū un pārbauda, kur ir sakne.
- Ja f(x) vērtība intervāla vidū ir lielāka par c, tad sakne ir intervāla kreisajā daļā un b vērtība tiek nomainīta ar intervāla vidējo vērtību. Ja f(x) vērtība intervāla vidū ir mazāka par c, tad sakne ir intervāla labajā daļā un a vērtība tiek nomainīta ar intervāla vidējo vērtību.
- Šis process tiek atkārtots, līdz sakne tiek atrasta ar uzdoto precizitāti.
- Programma izmanto matemātikas bibliotēkas funkciju cos(x^2) kā f(x) funkciju.
- Programma izmanto lietotāja ievadīto precizitāti, lai noteiktu nepieciešamo iterāciju skaitu, lai aprēķinātu x ar uzdoto precizitāti.
- Programma izdrukā aprēķināto x un f(x) vērtības un nepieciešamo iterāciju skaitu.

## Metodes plusi un mīnusi
Dihotomijas metode ir vienkārša un efektīva metode, lai meklētu saknes, un tā ir piemērota plašam argumentu diapazonam.
 Viens no šīs metodes trūkumiem ir tas, ka tā var ilgt ilgu laiku, lai atrastu precīzu sakņu vērtību, jo tā ir iteratīva metode, un nevar garantēt, ka tā atradīs sakni. Kā arī Dihometrijas metode nav domāta pāra sakņu atrašanai.

## References
1. [Dihotomijas metode](https://en.wikipedia.org/wiki/Bisection_method)    


## Programmas izvads
   
![](https://github.com/Homer-Fireman/RTR105/blob/main/darbi/2ld_roots/Screenshot%202023-01-20%20at%2015.48.48.png?raw=true)  

## cos(x*x)=0.36 no 0 līdz 2
   
![](https://github.com/Homer-Fireman/RTR105/blob/main/darbi/2ld_roots/Screenshot%202023-01-20%20at%2015.50.26.png?raw=true)