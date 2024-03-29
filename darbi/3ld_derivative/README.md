# Skaitliskā diferencēšana

## Programmas apraksts
Šī programma aprēķina un parāda funkcijas f(x) = cos(x^2) vērtības x starp a un b, kā arī tās pirmā un otrā atvasinājuma vērtības x starp a un b. Programma pieprasa lietotājam a, b un precizitātes vērtības un saglabā rezultātus failā ar nosaukumu "derivative.dat".

Pirmo f(x) atvasinājumu aprēķina, izmantojot gan analītisko formulu, skaitlisko atvasinājumu metodi. Arī otro f(x) atvasinājumu aprēķina, izmantojot gan analītisko formulu, gan skaitlisko atvasinājumu metodi. Rezultāti tiek parādīti ekrānā un saglabāti failā "derivative.dat" šādā formātā: x, f(x), f'(x) (analītisks), f'(x) (skaitlisko atvasinājumu), f' "(x) (analītisks), f" (x) (skaitlisko atvasinājumu).

skaitlisko atvasinājumu metodi izmanto, lai tuvinātu funkcijas atvasinājumu noteiktā punktā, ņemot starpību starp funkcijas vērtību šajā punktā un funkcijas vērtību tuvējā punktā un dalot ar x vērtību starpību.

Kopumā programma ļauj viegli aprēķināt un salīdzināt analītisko un skaitlisko atvasinājumu metodes, lai atrastu funkcijas f(x) = cos(x^2) pirmo un otro atvasinājumu noteiktam x vērtību diapazonam ar norādītu. precizitāte.

## Formulas
Analītiskā formula, ko izmanto, lai aprēķinātu f(x) = cos(x^2) pirmo atvasinājumu, ir:

f'(x) = -2x*sin(x^2)

Analītiskā formula, ko izmanto, lai aprēķinātu f(x) = cos(x^2) otro atvasinājumu, ir:

f''(x) = -2sin(x^2) - 4x^2cos(x^2)

Skaitlisko atvasinājumu metode, ko izmanto, lai tuvinātu f(x) pirmo atvasinājumu, ir:

f'(x) ≈ (f(x+h) - f(x)) / h

kur h ir x vērtību starpība starp punktu, kurā tiek aprēķināts atvasinājums, un tuvējo punktu.

Skaitlisko atvasinājumu metode, ko izmanto, lai tuvinātu f(x) otro atvasinājumu, ir:

f''(x) ≈ (f'(x+h) - f'(x)) / h

kur h ir x vērtību starpība starp punktu, kurā tiek aprēķināts atvasinājums, un tuvējo punktu.

## Grafiki

![](https://github.com/Homer-Fireman/RTR105/blob/main/darbi/3ld_derivative/derivative_graph.png?raw=true)

## Izmantotā literatūra

[https://en.wikipedia.org/wiki/Numerical_differentiation](https://en.wikipedia.org/wiki/Numerical_differentiation)