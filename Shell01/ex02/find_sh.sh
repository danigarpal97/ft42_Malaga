find . -type f -name "*.sh" -printf "%f\n" | tr -d ".sh"
