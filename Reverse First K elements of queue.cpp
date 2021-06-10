queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    queue<int> res;
    stack<int> temp;
    int i=0;
    while(i<k && !q.empty()){
        temp.push(q.front());
        q.pop();
        i++;
    }
    while(!temp.empty()){
        res.push(temp.top());
        temp.pop();
        
        }
    while(!q.empty()){
        res.push(q.front());
        q.pop();
    }
    return res;
}
