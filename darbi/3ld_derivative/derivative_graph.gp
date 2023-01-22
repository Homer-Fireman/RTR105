set terminal png

# f(x) graph
set output "f_x.png"
set xlabel "x"
set ylabel "f(x)"
plot "derivative.dat" using 1:2 with lines

# f'(x) (analytical) graph
set output "f_dx_analytical.png"
set xlabel "x"
set ylabel "f'(x) (analytical)"
plot "derivative.dat" using 1:3 with lines

# f''(x) (analytical) graph
set output "f_d2x_analytical.png"
set xlabel "x"
set ylabel "f''(x) (analytical)"
plot "derivative.dat" using 1:5 with lines

# f''(x) (forward difference) graph
set output "f_d2x_fd.png"
set xlabel "x"
set ylabel "f''(x) (forward difference)"
plot "derivative.dat" using 1:6 with lines
