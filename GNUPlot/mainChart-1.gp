color_lin="0x80FF0000"
color_log="0x800000FF"
color_text="0x00808080"
color_fone="0xC0C0A0"
set title "AlphaSpecter. Pulses: 17645 (17255), Time: 142825 sec, CPS: 0.123543" textcolor rgb color_text
set xlabel "Channels" textcolor rgb color_text
set ylabel "Counts" textcolor rgb color_text
set mxtics 10
set grid lc rgb color_text nomxtics xtics ytics mytics
set border 3 lc rgb color_text
set xtics nomirror
set ytics nomirror
set term wxt background rgb color_fone
set xrange [0:4098]
set yrange [0:121]
set y2range [0:4.795791]
plot 'alpha-4.dat' using 1:2 with lines lc rgb color_lin notitle, 'alpha-4.dat' using 1:($2==0 ? 0 : log($2)) axes x1y2 with lines lc rgb color_log notitle
