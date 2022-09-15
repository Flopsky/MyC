echo "-Compilation avec make------------------------------------------------------|"

cd src && make || exit 1

echo "---Compilation de l'argument passé à exec.sh--------------------------------|"

echo "$(cat $1)" | ./lang 

echo "------------ Exécution------------------------------------------------------|"

gcc -c PCode/PCode.c
echo "$(cat $1)" | ./lang > tmp.c
gcc -o execution tmp.c PCode/PCode.o
./execution
echo "compilation et exécution réussit--------------------------------------------|"
rm tmp.c
