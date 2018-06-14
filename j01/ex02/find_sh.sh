find . -name "*.sh" -type f | rev | cut -c4- | cut -d '/' -f 1 | rev
