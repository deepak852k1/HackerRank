


class BadLengthException
{
    public:
    int x;
    BadLengthException(int n){
      x=n;
  }
    int what(){
        return x;
        }
               
};

