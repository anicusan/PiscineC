# script for mkdir and mv all files
# in separate directories

for ((i = 3; i < 33; i++)); do
	x="`sed -n "$i p" < files`"
	mv "$x" "x$x"
	mkdir "$x"
	mv "x$x" "$x"
	mv "./$x/x$x" "./$x/$x"
done
