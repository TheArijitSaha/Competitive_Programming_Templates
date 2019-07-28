/*
    This File Contains the non-recursive implementation of BFS and DFS.

    On any confusion in the datatype names or macros, refer to "template.cpp".
*/

/*BREADTH FIRST TRAVERSAL*/

bool vis[n]={false};
forz(i,n)
{
	if(vis[i])
		continue;
	queue<ll> q;
	q.push(i);
	while(!q.empty())
	{
		s=q.front();
		q.pop();
		if(vis[s])
			continue;
		vis[s]=true;
		cout<<s<<endl;
		//process on s
		for(auto const&x:adj[s])
		{
			if(vis[x])
				continue;
			q.push(x);
		}
	}
}

/*DEPTH FIRST TRAVERSAL*/

bool vis[n]={false};
forz(i,n)
{
	if(vis[i])
		continue;
	stack<ll> st;
	st.push(i);
	while(!st.empty())
	{
		s=st.top();
		st.pop();
		if(vis[s])
			continue;
		vis[s]=true;
		cout<<s<<endl;
		//process on s
		for(auto const&x:adj[s])
		{
			if(vis[x])
				continue;
			st.push(x);
		}
	}
}
