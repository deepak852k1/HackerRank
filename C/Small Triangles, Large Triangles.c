
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
        float area[n],tempd;

int i,j; 

int temp;

float a,b,c;

float s;

for(i=0;i<n;i++)

{   

    s=(float)(tr[i].a+tr[i].b+tr[i].c)/2.0;

    a=s-tr[i].a;

    b=s-tr[i].b;

    c=s-tr[i].c;

    area[i]=sqrt(s*(a)*(b)*(c));

}

    for(j=0;j<n;j++)

    {

    for(i=0;i<n-1-j;i++)

    {    if(area[i+1]<area[i])

    {

    temp=tr[i+1].a;

    tr[i+1].a=tr[i].a;

    tr[i].a=temp;



temp=tr[i+1].b;

tr[i+1].b=tr[i].b;

tr[i].b=temp;


temp=tr[i+1].c;

tr[i+1].c=tr[i].c;

tr[i].c=temp;



tempd=area[i+1];

area[i+1]=area[i];

area[i]=tempd;

        }
    }
}
}


