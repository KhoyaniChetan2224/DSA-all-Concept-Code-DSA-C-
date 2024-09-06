#include <iostream>
/*
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
*/
#include<map>
/*
#include<algorithm>
#include<vector>*/

using namespace std;

int main()
{
    /*
   
        int basic[3] = {1, 2, 3};

        array<int, 4> a = {1, 2, 3, 4};

        int size = a.size();

        for ( int i=0; i<size; i++){
            cout << a[i] << endl;
        }

        cout << " Element at 2nd Index-> " << a.at(2) << endl;
        cout << " Element or not-> " << a.empty() << endl;

        cout << " First Element-> " << a.front() << endl;
        cout << " Last Element-> " << a.back() << endl;
   






        vector <int> v;
        vector <int> a(5, 1);

        vector <int> last(a);


        cout << " print a " << endl;
        for (int i:a){
            cout << i << " ";
        }

        cout << " Size-> " << v.capacity() << endl;

        v.push_back(1);
        cout << " Size-> " << v.capacity() << endl;

        v.push_back(2);
        cout << " Size-> " << v.capacity() << endl;

        v.push_back(3);
        cout << " Size-> " << v.capacity() << endl;
        cout << "Size->" << v.size() << endl;

        cout << " Element at 2nd Index " << v.at(2) << endl;

        cout << "front " << v.front() << endl;
        cout << "back" << v.back() << endl;

        cout << " before pop " << endl;
        for (int i:v){
            cout << i << " ";
        }
        cout << endl;

        v.pop_back();

        cout << " After pop " << endl;
        for (int i:v){
            cout << i << " ";
        }

        cout << " befor clear size " << v.size() << endl;
        v.clear();
        cout << " After  clear size " << v.size() << endl;

 




        deque<int> d;

        d.push_back(1);
        d.push_front(2);

        //d.pop_front();
        cout << endl;

        cout << " Print First Index Element-> " << d.at(1) << endl;

        cout << " Front " << d.front() << endl;
        cout << " Back " << d.back() << endl;
        d.erase(d.begin(),d.begin()+1);
        cout << " Empty or not " << d.empty() << endl;

        for (int i:d) {
            cout << i << endl;
        }
   
     





        list <int> l;

        l.push_back(1);
        l.push_front(2);

        for (int i:l){
            cout << i << " ";
        }

        cout << endl;
        l.erase(l.begin());
        cout << "after erase" << endl;
        for (int i:l){
            cout << i << " ";
        }
        cout  << " size of list " << l.size() << endl;
    
   */





        stack <string> s;

        s.push("Khoyani");
        s.push("Chetan");
        s.push("Ashokbhai");

        cout << "top element->" << s.top() << endl;
        s.pop();
        cout << "top element->" << s.top() << endl;

        cout << " size of stack " << s.size() << endl;

        cout << " Empty or not " << s.empty() << endl;
   




 
     /*
        queue<string> q;

        q.push("Khoyani");
        q.push("Chetan");
        q.push("Ashokbhai");

        cout << " size before pop " << q.size() << endl;
        cout << " First Element " << q.front() << endl;
        q.pop();
        cout << " First Element " << q.front() << endl;

        cout << " size after pop " << q.size() << endl;
     






        priority_queue<int>maxi;

        priority_queue<int, vector<int> , greater<int> > mini;

        maxi.push(1);
        maxi.push(3);
        maxi.push(2);
        maxi.push(0);

        cout << " Size-> " << maxi.size() << endl;
        int n= maxi.size();

        for (int i=0; i<n; i++){
            cout<<maxi.top() << " ";
            maxi.pop();
        }
        cout << endl;
   







        set <int> s;

        s.insert(5);       
        s.insert(5);
        s.insert(5);
        s.insert(1);
        s.insert(6);       
        s.insert(6);
        s.insert(0);
        s.insert(0);
        s.insert(0);

        for (auto i:s){
            cout << i << endl;
        }        

        set <int> :: iterator it = s.begin();
        it++;

        s.erase(it);

        for(auto i:s){
            cout << i << endl;
        }
        cout << endl;
        cout << "-5 is present or not ->" << s.count(-5) << endl;

        set <int> :: iterator itr = s.find(5);

        cout << " Valu preset at itr -> " << *it << endl;

        for (auto it = itr; it!=s.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
   







   
        map<int, string> m;

        m[1] = "Khoyani";
        m[13] = "Chetan";
        m[2] = "Ashokbhai";

        m.insert({5, "bheem"});

        cout << " before erase " << endl;

        for (auto i:m){
            cout << i.first << " " << i.second << endl;
        }
        
        cout << "finding -13->" << m.count(-13) << endl;

        m.erase(13);
        cout << " after erase " << endl;

        for (auto i:m){
            cout << i.first << " " << i.second << endl;
        }

        auto it = m.find(5);

        for (auto i=it; i!=m.end(); i++){
            cout << (*i).first << endl;
        }
     




        vector <int> v;

        v.push_back(1);
        v.push_back(3);
        v.push_back(6);
        v.push_back(7);
        
        cout << " Finding 6-> " <<binary_search(v.begin(),v.end(),6) << endl;

        cout << " lower bound-> " << lower_bound(v.begin(),v.end(),6)-v.begin() << endl;
        cout << " upper bound-> " << upper_bound(v.begin(),v.end(),4)-v.begin() << endl;

        int a = 3;
        int b = 5;

        cout << " mac -> " << max(a, b);
        cout << " min -> " << min(a, b);

        swap(a, b);
        cout << endl << " a-> " << a << endl; 

        string abcd = "abcd";
        reverse(abcd.begin(),abcd.end());
        cout << " string -> " << abcd << endl;

        rotate(v.begin(), v.begin()+1, v.end());
        cout << " after rotate " << endl;
        for (int i:v){
            cout << i << " ";
        } 
    */
}