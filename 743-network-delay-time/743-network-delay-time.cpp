class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // Have to make adj list first:
        vector<pair<int,int>> adj[n+1]; //{v,wt}
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        // now Dijkstra's Algo:
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 
        //We're using min priority queue-> {distance,node}
        pq.push({0,k});
        vector<int> dis(n+1,INT_MAX);
        dis[k]=0;
        while(!pq.empty()){
            int u=pq.top().second;
            pq.pop();
            for(auto it: adj[u]){
                if(dis[u]+it.second<dis[it.first]){
                    dis[it.first]=dis[u]+it.second;
                    pq.push({dis[it.first],it.first});
                }
            }
        }
        dis[0]=0;
        int res=*max_element(dis.begin(),dis.end());
        return 
            res<INT_MAX ? res : -1;
    }
};