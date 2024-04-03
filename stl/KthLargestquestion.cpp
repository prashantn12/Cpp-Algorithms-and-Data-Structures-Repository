/*class KthLargest {
public:

    priority_queue<int, vector<int>, greater<int>> pq;
    int maxi;

    KthLargest(int k, vector<int>& nums) {

        maxi = k;

        for(auto &i: nums) {
            pq.push(i);
            if(pq.size() > k) {
                pq.pop();
            }
        }
   
    }
    
    int add(int val) {

        pq.push(val);
        
        if(pq.size() > maxi) 
            pq.pop();

        return pq.top();

    }
    
};*/