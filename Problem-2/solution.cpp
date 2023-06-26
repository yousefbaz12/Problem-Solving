class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i =0; i<operations.size(); i++){
            if(operations[i]=="+")
            {
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                int sum = val1+val2;
                st.push(sum);


            }else if (operations[i]== "D"){
                int v = st.top();
                st.push(v*2);

            }else if (operations[i]== "C"){
                st.pop();

            }else {
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();

        }
        return sum;
    }
};