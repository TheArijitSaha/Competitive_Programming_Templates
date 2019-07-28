import sys
try:
	cin=open("in.txt","r")
	cout=open("out.txt","w")
except:
	cin=sys.stdin
	cout=sys.stdout

MOD=1000000007


n=int(cin.readline())
a=map(int,cin.readline().split())
s=""
for v in a:
	s+=str(v)+' '
cout.write(s)



cin.close()
cout.close()
