ifconfig | grep "\bether\b" | cut -c 8- | awk '{print $0,"\n"}'
