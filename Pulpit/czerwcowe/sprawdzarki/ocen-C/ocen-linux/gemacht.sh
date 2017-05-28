rm -rf ./in/* ./out/*
for F in ./$1/*
do
	if [ -f "${F}" ]
	then
		prefix="./$1/"
		filename=${F#$prefix}
		prefix=$(echo $filename | egrep -o '^[^.]*\.')		
		directory=${filename#$prefix}		
		mv $F $directory
	fi
done

cd in
for F in *;
do
	if [ -f "${F}" ]
	then
		pom=$(echo $F | egrep -o '^[^.]*')
		pom=${pom#$1}
		testy="$testy$pom "
	fi
done
cd ..

echo $testy

> oi.conf
cat >oi.conf <<EOL
TASKS="$1"
TESTS_$1="$testy"
TIMELIMIT=60    # limit czasu wykonania (s)
MEMLIMIT=1000000   # limit wykorzysztania pamieci przez program oraz oitimetool (KiB)
SRCLIMIT=100     # limit na rozmiar pliku zrodlowego (KiB)
EXELIMIT=10240   # limit na rozmiar pliku wykonywalnego (KiB) = 10MB
EOL
