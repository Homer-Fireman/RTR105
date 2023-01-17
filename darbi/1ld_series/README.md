# Programma
Programma mēģina aprēķināt un parādīt cos(x^2) izmantojot divas metodes: built-in math library funkciju cos() un pielāgotu funkciju cossinus().

## Metodes apraksts
1. Pirmā metode ir izmantot built-in math library funkciju cos(), kas tiek nodrošināta C valodas standarta bibliotēkā un ir gatava lietošanai. Šī metode tiek izmantota kā pārbaudes metode, lai pārliecinātos, vai otrā metode strādā pareizi.
2. Otra metode ir izmantot pielāgotu funkciju cossinus(), kas aprēķina cos(x^2) izmantojot Teilora rindu paplašinājumu. Teilora rinda ir funkcijas atveidojums kā bezgalīgas summu virkne, kas tiek aprēķināta, izmantojot funkcijas vērtības un tās atvasinājumus noteiktā punktā. Tā sāk ar mainīgo 'a' inicializēšanu ar 1 un 'S' ar 0, pēc tam atkārtoti reizina 'a' ar -1*x*x*x*x/(4*k*k-2*k) un pievieno to 'S' katrā iterācijā. Programma izvada 'a' un 'S' vērtības k = N-1 un N.

## Teilora rindas paplašinājums
Teilora sērija ir funkcijas attēlojums kā bezgalīga terminu summa, ko aprēķina pēc funkcijas vērtībām un tās atvasinājumiem vienā punktā. Funkcijas f(x) Teilora sērijas izvērsums par punktu x = a tiek uzdots:  
f(x) = f(a) + f'(a)(x-a) + (f''(a))/(2!) (x-a)^2 + ...  

kur f'(a) ir f(x) pirmais atvasinājums, kas novērtēts pie x=a, f''(a) ir otrais f(x) atvasinājums, kas novērtēts pie x=a, un tā tālāk. Katrs sērijas termins apzīmē funkcijas tuvinājumu, un, iekļaujot vairāk terminu, tuvinājums kļūst precīzāks.

## Metodes plusi un mīnusi

## Metodes plusi un mīnusi

- Pirmā metode ir vienkārša un ērta lietošanā, jo tā ir gatava lietošanai un neprasa nekādus papildus aprēķinus. Tomēr tā var būt mazāk precīza, salīdzinot ar Teilora rindas paplašinājumu.
- Otrā metode ir precīzāka, jo tā izmanto Teilora rindas paplašinājumu, kur katrs termins ir funkcijas tuvējās vērtības aprēķins, un jo vairāk termiņu tiek iekļauti, jo precīzāks kļūst aprēķins. Tomēr tā prasa vairāk aprēķinu un var būt sarežģītāka izstrādē.
