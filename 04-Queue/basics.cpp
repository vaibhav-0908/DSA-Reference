//declaration (FIFO) [O(1)]
queue<int> q;
q.push(1);
q.emplace(4);
q.back()+= 5; // adds 5 to last element i.e 4

//accessing
cout << q.back();//gives 9
cout << q.front();//gives 1
q.pop();//pops 1

//Priotity Queue (MAX PRIORITY)
priority_queue<int> pq; //stores values in descending order 
//(MIN PRIORITY)
priority_queue<int,vector<int>,greater<int>> pq; //stores in ascending order
//Time Complexity (push - logn);(top - O(1));(pop - logn)
