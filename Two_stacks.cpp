class TwoStack {
    int *arr;
    int tp1;
    int tp2;
    int size;
public:
    TwoStack(int s) {
        this -> size = s;
        tp1 = -1;
        tp2 = s;
        arr = new int[s];
    }
    void push1(int num) {
        if(tp2 - tp1 > 1 ) {
            tp1++;
            arr[tp1] = num;
        } 
       
    }
    void push2(int num) {
         if(tp2 - tp1 > 1 ) {
            tp2--;
            arr[tp2] = num;
        } 
       
    }
    int pop1() {
        if( tp1 >= 0) {
            int ans = arr[tp1];
            tp1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2() {
        if( tp2 < size) {
            int ans = arr[tp2];
            tp2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

};