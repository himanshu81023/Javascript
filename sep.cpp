#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		vector <int> v(n);
		vector <int> ans;
		for(int i=0;i<n;i++)
		{
			cin >> v.at(i);
		}
		int temp=-123,temp2=100;
		vector <short> bl(n);
		int count;
		for(int i=0;i<n;i++)
		{
			temp = v[i];
			temp2 = v[i];
			bl[i]=1;
			count=1;
			for(int j=0;j<n;j++)
			{
			  
			  if(j<i)
			   {if((v[j]>v[i])&&(!bl[j])&& (j!=i))
			   {
					count++;
					bl[j]=1;
					if(temp<v[j])
					{
						temp = v[j];
					}
					
			   }}
			  else
				  {
				if(v[j]<temp &&(!bl[j])&&(j!=i))
				  {
					  count++;
					  bl[j]=1;
					  if(temp2>v[j])
					  {
					      temp2 = v[j];
					  }
				  }}
			
			}
			for(int j=0;j<i;j++)
			{
			    if(v[j]>temp2 && (!bl[j]))
			    {
			        count++;
			    }
			}
			bl.assign(n,0);
			ans.push_back(count); 
			
		}
		
//		cout << "ans vector  \n";
//		for(auto it:ans)
//		{
//			cout << it << " ";
//		}
		sort(ans.begin(),ans.end());
		
		cout << ans[0] << " " << ans[n-1] <<endl;
	}
}
