import java.util.*
import kotlin.math.*

val sc=Scanner(System.`in`)

fun main(args: Array<String>)
{
	val t:Int
	t=1
	//t=readLine()!!.toInt()
	//t=sc.nextInt()
	for(t1 in 1..t)
	{
		Solutionfunc()
	}
}
fun Solutionfunc()
{
	var n=sc.nextInt()
	var lr=Array(n,{i->sc.nextInt()})
}


/*
c.toInt()	//gives ascii
var s=sc.next().toCharArray()
println(array.contentDeepToString())

input and construct array:
var lr=Array(n,{i->Pair(Pair(sc.nextInt(),sc.nextInt()),i)})

Ascending Sort:
lr.sort()
lr.sortBy(it.first)
lr.sortWith(compareBy({it.first.first},{it.first.second}))


Sorted By: Descending Order
lr.sortWith(compareByDescending<Pair<Pair<Int,Int>,Int>>{it.first.first}.thenByDescending{it.first.second})



MAP:

var mp=mutableMapOf<Int,String>()
	for(t1 in 1..n)
	{
		mp[sc.nextInt()]=sc.next();
	}
	for(i in 1..10)
		if(mp[i]!=null)
			println("$i ${mp[i]}")

*/