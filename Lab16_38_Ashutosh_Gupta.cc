#include <bits/stdc++.h>

using namespace std;
 
struct crewdata
{
	int height;
	int start;
	int end;
};
 
int main()
{
	int h,c,q,maxh;
	cin>>h>>c>>q;
 
	struct crewdata crew[c];
 
	for(int i=0;i<c;i++)
	{
		cin>>crew[i].height>>crew[i].start>>crew[i].end;
		maxh =( (maxh < crew[i].height) ? crew[i].height : maxh);
	}
	while(q--)
	{
		int flag=0;
		int height_person;
		int starttime_person;
 
		cin>>height_person>>starttime_person;
 
		if(height_person >  maxh)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			for(int i=0; i <c ;i++)
			{
				if(starttime_person >= crew[i].start && starttime_person <= crew[i].end)
				{
					if(height_person <= crew[i].height)
					{
						cout<<"NO"<<endl;
						flag = 1;
						break;
					}
				}
			}
			if(flag == 0)
			{
				cout<<"YES"<<endl;
			}
			
		}
 
	}
 
 
 
	return 0;
}