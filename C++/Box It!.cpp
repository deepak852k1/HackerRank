
class Box{
    private:
    int l, b, h;
    public:
    // returns length
    int getLength(){
        return l;
    } 
    // returns breadth
    int getBreadth (){
        return b;
    } 
    // returns height
    int getHeight (){
        return h;
    }  
    // returns volume
    long long CalculateVolume(){
        return (long long) l*b*h;
    } 
    // overload <
    bool operator<(Box& box){
        if(l < box.getLength())
            return true;
        if(b < box.getBreadth() && l == box.getLength())
            return true;
        if(h < box.getHeight() && b == box.getBreadth() && l == box.getLength())
            return true;
        return false;
    }
    // empty constructor
    Box(){
        l=0, b=0, h=0;
    }
    // paramatirezed constructor
    Box(int x,int y,int z){
        l=x, b=y, h=z;
    }
    // copy constructor
    Box(Box &box){
        l=box.getLength(), b=box.getBreadth(), h=box.getHeight();
    }
    
};

// overload <<
ostream& operator<<(ostream& out, Box& B){
        out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();
        return out;
}


