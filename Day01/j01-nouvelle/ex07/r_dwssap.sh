#!/bin/sh
cat /etc/passwd | sed '/^#/ d' | awk 'NR%2==0' | awk -F':' '{print $1}' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | xargs | sed -e 's/ /, /g' | sed 's/$/./g' | tr -d '\n\r'
