cat /etc/passwd | egrep -v "(^#.*|^$)" | sed g\;n | sort -r | cut -d: -f1 | rev | tr "\n" , | sed 's/,/, /g'
