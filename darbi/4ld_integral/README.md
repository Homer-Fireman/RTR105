# Skaitliskā integrēšana

Šī programma mēģina aprēķināt dažādu metožu (tālāk minētu) izmantošanas rezultātā iegūto reģiona (kuru robežas ir "a" un "b") laukumu, kur funkcija ir "cos(x^2)". Programma izmanto 3 metodes: taisnstūra metodi, trapecveida metodi un Simpson metodi.

## Taisnstūra metode:
Programma aprēķina taisnstūra laukumu, kuru augstums ir funkcijas vērtība x punktā.
Tas tiek darīts, izmantojot ciklu un pārrēķinot funkcijas vērtību katram x punktam, kas ir intervāla "a" un "b" robežās, un pēc tam reizinot ar platumu, lai aprēķinātu katru taisnstūra laukumu.
Plusi: Šī metode ir vienkārša un ātra.
Mīnusi: Tā var būt neprecīza, jo tā pārāk vienkārši aprēķina funkcijas vērtību un neņem vērā funkcijas izmaiņas starp x punktiem.

## Trapecveida metode:
Programma aprēķina trapecveida laukumu, kur augstumi ir funkcijas vērtības x un (x+width) punktos.
Tas tiek darīts, izmantojot ciklu un pārrēķinot funkcijas vērtību katram x punktam, kas ir intervāla "a" un "b" robežās, un pēc tam reizinot ar platumu un parbaudot funkcijas vērtību x+width punktā.
Plusi: Šī metode ir precīzāka nekā taisnstūra metode, jo tā ņem vērā funkcijas izmaiņas starp x punktiem.
Mīnusi: Tā var būt laikietilpīgāka un sarežģītāka nekā taisnstūra metode.

## Simpson metode:
Programma aprēķina Simpson metodes rezultātu, kur augstumi ir funkcijas vērtības x, (x+width/2) un (x+width) punktos.
Tas tiek darīts, izmantojot ciklu un pārrēķinot funkcijas vērtību katram x punktam, kas ir intervāla "a" un "b" robežās, un pēc tam reizinot ar platumu un parbaudot funkcijas vērtību (x+width/2) un (x+width) punktos, un aprēķinot kopsumma.

Plusi: Šī metode ir vēl precīzāka nekā trapecveida metode, jo tā ņem vērā vēl vairāk funkcijas izmaiņas starp x punktiem.
Mīnusi: Tā var būt sarežģītāka un laikietilpīgāka nekā trapecveida metode un prasa vēl vairāk aprēķinu un parbaudi.
Galvenais mīnuss abām metodēm ir tāds, ka tās ir aprēķinu un parbaužu intensīvas un var būt neprecīzas, ja funkcijas izmaiņas ir pārāk lielas starp x punktiem.

## Atsauces





