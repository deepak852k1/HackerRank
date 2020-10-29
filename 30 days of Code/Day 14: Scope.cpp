

	// Add your code here
    Difference(vector<int> a )
{
elements = a;
}
void computeDifference(){
 short int i, max = 0, min = 101;
        for(i = 0; i < elements.size(); ++i)
            max = elements[i] > max ? elements[i] : max;
        for(i = 0; i < elements.size(); ++i)
            min = elements[i] < min ? elements[i] : min;
        maximumDifference = max - min;
}


