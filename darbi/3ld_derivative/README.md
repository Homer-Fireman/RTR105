# Skaitliskā diferencēšana

## Programmas apraksts
Šī programma aprēķina un parāda funkcijas f(x) = cos(x^2) vērtības x starp a un b, kā arī tās pirmā un otrā atvasinājuma vērtības x starp a un b. Programma pieprasa lietotājam a, b un precizitātes vērtības un saglabā rezultātus failā ar nosaukumu "derivative.dat".

Pirmo f(x) atvasinājumu aprēķina, izmantojot gan analītisko formulu, gan nākotnes starpības metodi. Arī otro f(x) atvasinājumu aprēķina, izmantojot gan analītisko formulu, gan tiešās starpības metodi. Rezultāti tiek parādīti ekrānā un saglabāti failā "derivative.dat" šādā formātā: x, f(x), f'(x) (analītisks), f'(x) (forward atšķirība), f' "(x) (analītisks), f" (x) (uz priekšu starpība).

Forward starpības metodi izmanto, lai tuvinātu funkcijas atvasinājumu noteiktā punktā, ņemot starpību starp funkcijas vērtību šajā punktā un funkcijas vērtību tuvējā punktā un dalot ar x vērtību starpību.

Kopumā programma ļauj viegli aprēķināt un salīdzināt analītisko un tiešās starpības metodes, lai atrastu funkcijas f(x) = cos(x^2) pirmo un otro atvasinājumu noteiktam x vērtību diapazonam ar norādītu. precizitāte.

## Formulas
Analītiskā formula, ko izmanto, lai aprēķinātu f(x) = cos(x^2) pirmo atvasinājumu, ir:

f'(x) = -2x*sin(x^2)

Analītiskā formula, ko izmanto, lai aprēķinātu f(x) = cos(x^2) otro atvasinājumu, ir:

f''(x) = -2sin(x^2) - 4x^2cos(x^2)

Forward starpības metode, ko izmanto, lai tuvinātu f(x) pirmo atvasinājumu, ir:

f'(x) ≈ (f(x+h) - f(x)) / h

kur h ir x vērtību starpība starp punktu, kurā tiek aprēķināts atvasinājums, un tuvējo punktu.

Tiešās starpības metode, ko izmanto, lai tuvinātu f(x) otro atvasinājumu, ir:

f''(x) ≈ (f'(x+h) - f'(x)) / h

kur h ir x vērtību starpība starp punktu, kurā tiek aprēķināts atvasinājums, un tuvējo punktu.