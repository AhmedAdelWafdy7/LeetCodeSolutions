class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int sum{0};
        for (const string& it : operations) {
            if(it == \D\){
                record.push( (record.top() ) * 2 );
            }
            else if(it == \C\){
                record.pop();
            }
            else if( it == \+\ ){
                if (record.size() >= 2) {
                    int top1 = record.top(); record.pop();
                    int top2 = record.top();
                    record.push(top1);
                    record.push(top1 + top2);
                }
            } 
            else{
                record.push(stoi(it));
            }
        }
        
        while(! record.empty()){
            sum += record.top();
            record.pop();
        }
        return sum;
    }
};