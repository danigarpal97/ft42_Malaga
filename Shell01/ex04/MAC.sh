ip -o link | awk '{print $(NF-2)}'
