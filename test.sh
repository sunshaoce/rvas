set -e

./rvas

diff a.o Bytes.o

echo "$0 SUCCESS!"
