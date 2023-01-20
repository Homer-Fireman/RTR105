# Dihotomijas metode
## Programmas mērķis
Šī programma izmanto Dihotomijas metodi, lai aprēķinātu x vērtību, kas atbilst f(x)=c vienādojumam, un atbilst robežām a un b, izmantojot cos(x^2) kā f(x) funkciju.

## Metodes darbības princips [1]

Bisection metode ir skaitliska metode, lai atrastu reālu funkcijas f(x) = 0 sakni, kur sakne ir x vērtība, kurā f(x) = 0. Metode sastāv no tā, ka intervālu, kurā atrodas sakne, tiek vēlreiz un vēlreiz sadalīts pa vidu un tiek izvēlēts apakšintervāls, kurā sakne jāatrod, balstoties uz funkcijas zīmi intervāla viduspunktā. Šis process tiek atkārtots apakšintervālā, līdz sakne tiek noteikta vēlamā precizitātes pakāpē.

Lai to panāktu, tiek veikti sekojoši soļi:

1. Izvēlas sākuma intervālu, kurā tiek uzskatīts, ka sakne ir atrodama, un noteikt tā robežas, kā arī novērtēt funkcijas vērtību tās sākumpunktā un beigu punktā.
2. Aprēķina intervāla viduspunktu un novērtēt funkcijas vērtību šajā punktā.
3. Salīdzina funkcijas vērtību intervāla sākumpunktā un viduspunktā, izvēlēties apakšintervālu, kurā sakne jāatrod un atkārtot soļus 2 un 3 apakšintervālā, līdz sakne tiek noteikta vēlamā precizitātes pakāpē.  
  
Lai precizētu sakni, var izmantot citas metodes, kā piemēram, Newtons metodi vai Secant metodi.

## Metodes plusi un mīnusi
Dihotomijas metode ir vienkārša un efektīva metode, lai meklētu saknes, un tā ir piemērota plašam argumentu diapazonam.
 Viens no šīs metodes trūkumiem ir tas, ka tā var ilgt ilgu laiku, lai atrastu precīzu sakņu vērtību, jo tā ir iteratīva metode, un nevar garantēt, ka tā atradīs sakni. Kā arī Dihometrijas metode nav domāta pāra sakņu atrašanai.

## Programmas izvads
   
![](https://github.com/Homer-Fireman/RTR105/blob/main/darbi/2ld_roots/Screenshot%202023-01-20%20at%2015.48.48.png?raw=true)  

## cos(x*x)=0.36 no 0 līdz 2
   
![](https://github.com/Homer-Fireman/RTR105/blob/main/darbi/2ld_roots/Screenshot%202023-01-20%20at%2015.50.26.png?raw=true)  

## References
1. [Dihotomijas metode](https://en.wikipedia.org/wiki/Bisection_method)    
