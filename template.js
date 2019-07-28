'use strict';
process.stdin.resume();
process.stdin.setEncoding('utf-8');
let inputString='';
let currentLine=0;
process.stdin.on('data',inputStdin=>{
	inputString+=inputStdin;
});
process.stdin.on('end',_=>{
	inputString=inputString.trim().split("\n").map(string=>{
		return string.trim();
	});
	main();
});
function readLine()
{
	return inputString[currentLine++]; 
}

// let ans=arr.join(' ');
// let s=n.toString(2);		//Convert to binary
function main()
{
	const t=parseInt(readLine());
	for(let t1=0;t1<t;t1++)
	{
		const [k,c]=readLine().trim().split(" ").map(x=>{return +(x);});
		let rem=k*k*k-c;
		let x=0
		for(let i=0;i<100;++i)
		{
			if(Number.isInteger(Math.cbrt(rem+i*k*k*k)))
			{
				console.log("YES");
				x=1;
				break;
			}
		}
		if(x==0)
			console.log("NO");
	}
	//const [n,m]=readLine().trim().split(" ").map(Number);
}