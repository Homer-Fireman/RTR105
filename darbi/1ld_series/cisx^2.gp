f(x)=sin(x*x)
s0(x) = 0     + (1*1)/
s1(x) = s0(x) + (-1*x*x*x*x)/(2*1)
s2(x) = s1(x) + (1*x*x*x*x*x*x*x*x)/(4*3*2*1)
s3(x) = s2(x) + (-1*x*x*x*x*x*x*x*x*x*x*x*x)/(6*5*4*3*2*1)
s4(x) = s3(x) + (1*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/(8*7*6*5*4*3*2*1)

set grid
set xrange [-2:2]
set yrange [-2:2]
plot f(x) title 'sin (x^2)' lw 2 lt rgb "red"
replot s0(x) title 's0' lt rgb "blue"
replot s1(x) title 's1' lt rgb "green"
replot s2(x) title 's2' lt rgb "yellow"
replot s3(x) title 's3' lt rgb "orange"
replot s4(x) title 's4' lt rgb "purple"