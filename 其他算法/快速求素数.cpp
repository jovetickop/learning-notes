int main()
{
	const int n = 1000;
	vector<bool> vec(n);
	for(int i = 0; i< vec.size(); ++i)
	{
		if(i%2)
			vec[i] = true;
		else
			vec[i] = false;
	}
	for(int i =3; i<sqrt((float)n); i+=2)
	{
		if(vec[i])
		{
			for(int j = 2*i; j<n; j+=i)
			{
				vec[j] = false;
			}
		}
	}
	for(int i = 0; i< n; ++i)
	{
		if(vec[i])
			cout<<i<<endl;
	}
}
//初级数论：一个数如果不能被其开方数以下的数整除，他就是素数。