#!/bin/sh
cat /etc/passwd | grep -v "#" | awk '(NR%2)' | rev | sed 's/.*\*://' | awk -v en1=$FT_LINE1 -v en2=$FT_LINE2 '(NR >= en1) && (NR <= en2)' | tr '\n' ' ' | sed 's/ /, /g' | rev | sed 's/ ,/./' | rev
