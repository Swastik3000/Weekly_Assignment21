//min cost sort
bool comparator(int &a, int &b){
	return a>b;
}
int solve(vector<int>& nums) {
    
	int s1=0,s2=0,c=0;
	vector<int> v;
	v=nums;
	sort(v.begin(),v.end());
	c=0;
	for(auto x:v){
		s1+= abs(nums[c]-v[c]);
		c++;
	}

	sort(v.begin(),v.end(),comparator);
	c=0;
	for(auto x:v){
		s2+= abs(nums[c]-v[c]);
		c++;
	}
	return min(s1,s2);

    }
