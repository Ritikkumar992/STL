#include <bits/stdc++.h>
using namespace std;

namespace ritik
{
    int val = 341;
    int getVal()
    {
        return val * 200;  
    }
}
struct node
{
    string str;
    int i;
    double d;
    char c;

    // node(string, num_, double, ch1){
    //     string = str;
    //     i = num_;
    //     c = ch1;
};
array<int, 3> arr; // {0,0,0}

// comparator.
bool comp(int el1, int el2)
{
    if (el1 <= el2)
    {
        return true;
    }
    return false;
}

bool comp(pair<int, int> ele1, pair<int, int> ele2)
{
    if (ele1 < ele2)
    {
        return true;
    }
    if (ele1 == ele2)
    {
        if (ele1.first == ele2.first)
        {
            if (ele1.second > ele2.second)
            {
                return true;
            }
        }
        return false;
    }
}

//sort(arr, arr+3, comp);

// sort in ascending to first if first is equal then sorts according to second 
// in ascending.

//sort(arr, arr+3);
//array
//pair<int,int> arr[] = {{1,4}{5,2},{5,9}};
// sorted::  arr[] = {{1,4}{5,9},{5,2}};
//I want you to sort this in such a way.
// that the element who have first element is pair smaller
// apperars first, and if first is equal then sort according
// to second and keep the larger second.

int main()
{
    double val = 10.2;
    cout << val << endl; // prints 10.2

    cout << ritik::val << endl; // prints 34.

    cout << ritik::getVal() << endl; // prints 34*20.

    //Create a data type where we store differnt type of data.
    //node *ritik = new node("Ritik", 12, 12.1, 'd');

    /*********************CONTAIERS IN C++********************/
    /************ 1. ARRAYS IN C++***************/

    int arr[1001];
    array<int, 190> arr;
    array<int, 3> arr; // {?,?,?}

    array<int, 5> arr = {1, 2, 3}; // --> {1,2,3,0,0};
    array<int, 5> arr = {1, 2};    // --> {1,2,0,0,0};
    array<int, 5> arr = {0};       // --> {0,,0,0,0};

    int arr[100] = {0}; // --> {0,0,0,0,...}

    array<int, 4> arr;
    // arr.fill(10);// {10,10,10,10,10;
    // arr.at(index);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr.at(i) << " ";
    // }

    /************* 2.Iterator in c++ stl;**********************/
    //begin()--> indicates the first index of an array.
    //rbegin()--> indicates the last index of an array.
    //end()--> indicates the right after the last index of an array.
    //rend()--> indicates the right before the first  index of an array.

    int arr[5];
    array<int, 5> arr;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }

    array<int, 5> arr1 = {1, 2, 3, 4, 5};
    for (auto it = arr1.begin(); it != arr1.end(); it++)
    {
        cout << *it << " " << endl; //1,2,3,4,5.
    }

    array<int, 5> arr1 = {5 2, 3, 4, 5};

    for (auto it = arr1.rbegin(); it > arr1.rend(); it++)
    {
        cout << *it << " " << endl; //5,4,3,2,1`.
    }

    array<int, 5> arr1 = {1, 2, 3, 4, 5};

    for (auto it = arr1.end() - 1; it >= arr1.begin(); it--)
    {
        cout << *it << " " << endl; //5,4,3,2,1`.
    }

    //for each loop.
    for (auto it : arr)
    {
        cout << it << " " << endl; //1,2,3,4,5.
    }

    string s = "afhafha";
    for (auto c : s)
    {
        cout << c << " " << endl; //a f h a f h a.
    }
    cout << arr1.size();
    cout << arr1.front();
    cout << arr1.back();

    //max size of an array is 10^6 when we declare inside inside our main.
    //max size of an array is 10^7 when we declare globally.

    /**************** 2. VECTOR IN C++.*****************/

    //SEGMENTATION FAULT means you have push_back 10^7 element.

    vector<int> v;            //---> {}
    cout << v.size() << endl; // print 0.
    v.push_back(0);           //---> {0}
    v.push_back(2);           //---> {0,2}
    cout << v.size() << endl; //print 2.
    v.pop_back();
    cout << v.size() << endl; //print {0},

    v.clear(); // erase all elements at once.

    vector<int> vec1(4, 0);  // {0,0,0,0};
    vector<int> vec2(4, 10); // {10,10,10,10};

    //copy the entire vec2 into vec3.
    vector<int> vec3(vec2.begin(), vec2.end()); // [}
    vector<int> vec3(vec2);

    vector<int> ritik;
    ritik.push_back(1);
    ritik.emplace_back(11); // similar to push_back but takes less time.
    ritik.push_back(112);
    ritik.push_back(113);
    ritik.push_back(114);

    vector<int> ritik1(ritik.begin(), ritik.begin() + 2); //{1,12}
    for (auto it : ritik)
    {
        cout << it << " ";
    }
    //lower bound, upper bound.
    // swap : swap(v1,v2);
    // begin(), end(), rbegin(),r.end().

    //to define a 2d vector.
    vector<int> ritik1;
    ritik1.push_back(12);
    ritik1.emplace_back(12); // similar to push_back but takes less time.
    ritik1.push_back(122);
    ritik1.push_back(213);
    ritik1.push_back(124);

    vector<int> ritik2;
    ritik2.push_back(13);
    ritik2.emplace_back(131); // similar to push_back but takes less time.
    ritik2.push_back(312);
    ritik2.push_back(313);
    ritik2.push_back(134);

    vector<vector<int>> vec;
    vec.push_back(ritik);
    vec.push_back(ritik1);
    vec.push_back(ritik2);

    //for each loop
    for (auto vct : vec)
    {
        for (auto it : vct)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    //traditional method.
    // for(int i = 0;i<vec.size();i++){
    //     for(int j = 0;j<vec[i].size();j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // define 10 x 20 .
    vector<vector<int>> vec(10, vector<int>(20, 0));
    vec.push_back(vector<int>(20, 0));
    vec[2].push_back(1);
    cout << vec.size() << endl;

    //array of vector
    vector<int> arr[14];
    //   arr[1].push_back(1);

    //define a 3d vector 10x20x30.-->arr[10][20][30]
    //vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20,vector<int> (30,0));)

    /**************3.Sets --->stores unique element in an orderd fasion.*/
    //given element , tell us the number of unique elements.
    int arr[] = {2, 3, 4, 1, 1, 2, 5};
    set<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //     int x;
        //     cin >> x;
        st.insert(arr[i]); //1,2,3,4,5 ===> we can't access set as st[1]......
    }
    //erase functionality.
    //log n
    st.erase(st.begin()); // st.erase(iterator) ---> st-->(2,3,4,5).

    //log n.
    st.erase(st.begin(), st.end()); // [)

    st.erase(5); // st.erase(key) ---> delete the 5.

    set<int> str = {1, 5, 7, 8};
    auto it = st.find(7); // log n--> it will be iterator to 7
    auto it = st.find(9); // it  = st.end()--> in this case element is not found.

    set<int> set1(st.begin(), st.end());

    st.emplace(5); //st.insert().

    cout << st.size() << endl;

    set<int> st;
    st.insert(12);
    st.insert(113);

    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }

    for (auto it : st)
    {
        cout << it << " ";
    }

    //delete entire set.
    st.erase(st.begin(), st.end()); //--->delete entire set.

    /********************4.Unordered_set*******************/
    // Avg time is constant in nature.
    // worst case is linear in natur.
    //TLE ----> which to set.
    unordered_set<int> st;
    st.insert(11);
    st.insert(2);
    st.insert(3);
    st.count(2);

    /********************5.Multiset*************/
    //stores all the elements in a sorted fasion,-->stores duplicates also.
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3); // ms.emplace(3);
    // Op: {1,1,2,2,3}.
    //log n;..

    ms.erase(2);

    auto it = ms.find(2);
    ms.clear();
    ms.erase(ms.begin(), ms.end());
    // ms.erase(ms.find(2), ms.find(2)+2);

    /*   Key value pair ---> ***************** map **************/
    // stores key in lexographically order.
    // ALways sorted according to the keys.

    // ritk -> 12.
    // raj -> 13.
    // rohan -> 14.

    map<string, int> mpp;
    mpp["ritk"] = 12;
    mpp["raj"] = 13;
    mpp["rohan"] = 14;
    mpp["ritk"] = 15; //prits 15 it overrides the value.

    mpp.emplace("ritk", 34);

    mpp.erase("ritk");
    mpp.clear();                  //entier map is cleared.
    auto it = mpp.find("simira"); // it points to end bcz it doesn't exit.

    mpp.erase(mpp.begin());
    //  mpp.erase(mpp.begin(), mpp.begin()+2);--> cleans up to a given range.

    mpp.erase(mpp.begin(), mpp.end());
    auto it = mpp.find("ritk"); // points to where ritk lies.

    if (mpp.empty())
    {
        cout << "Yes it is empty " << endl;
    }

    mpp.count("ritk"); // always stores 1 as it stores only1 1.
    // instance of ritk---------> Time complexity : log n;

    // printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}

	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}

    /******************6.pair**************/
    pair<int, int> pr;
    pr.first = 1;
    pr.first = 10;

    /*********************7.printing map***************/
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl; // 1 10.
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    /*********************8.Unordered_map***************/
    unordered_map<int, int> mpp;
    // unordered_map<pair<int, int>, int>  mpp;----?xxxxxxx wrong.
    //O(1) in  almost every case.
    //O(n) in the worst case, where n is the container size.
    //doesn't store in any order.

    /************9.Pair class**********/
    pair<int, int> pr = {1, 2};
    pair<pair<int, int>, int> pr = {{1, 2}, 2}; //nested pair.
    cout << pr.first << " " << pr.second << endl;

    pair<pair<int, int>, pair<int, int>> pr = {{1, 2}, {2, 4}};
    // cout<<pr.first.first -->1.
    // cout<<pr.second.second -->4;

    vector<pair<int, int>> vec;
    set<pair<int, int>> st;
    map<pair<int, int>, int> mpp;

    multimap<string, int> mpp;
    //sorted and multiple keys.
    mpp["raj"] = 2;
    mpp["raj"] = 4;
    mpp.emplace("ritik", 3);
    mpp.emplace("ritik", 34);

    /****************10.stack and Queue**************/
    stack<int> st; // last in first out.
    st.insert(1);
    st.insert(2);
    st.insert(3);
    // pop,push,  top, size, empty.
    // st.push(1);
    // st.push(2);
    // st.push(3);

    // cout<<st.top();
    // st.pop();
    // cout<<st.top();

    bool flag = st.empty();
    while (!st.empty())
    {
        // st.pop();
    }
    cout << st.size() << endl;

    stack<int> st;
    if (!st.empty())
    {
        //cout<<st.top()<<endl; // ---> throws an error.
    }

    /****************11. Queue....---->> fifo operation.***********/
    // Time complexity is : O(1).
    //push, front, pop, empty
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front(); //2--> opp to stack.
    q.pop();
    cout << q.front(); //3
    // Time complexity is : O(n).
    while (!q.empty())
    {
        q.pop();
    }
    queue<int> q;
    for (int i = 0; i < 10; q.push(i))
        ;

    /********************12.priority_queue*****************/
    //stores all in sorted order in log(n).
    //push, size, top, pop, empty.

    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    //arrange in descending order. ===> 6, 5,2,1.

    cout << pq.top() << endl; // prints 6.
    pq.pop();
    cout << pq.top() << endl; // prints 5.

    priority_queue<pair<int, int>> pqq;
    // pqq.push(1,5);
    // pqq.push(1,6);
    // pqq.push(1,7);
    // prints ---> (1,7), (1,6), (1,5).

    priority_queue<int> pq;
    pq.push(-1);
    pq.push(-5);
    pq.push(-2);
    pq.push(-6);
    cout << -1 * pq.top() << endl; // prints 1.
    //arrange in descending order. ===> 6, 5,2,1.

    /************13. Minimum Priority_queue.***********/
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(6);
    cout << pq.top() << endl; // prints 1.

    //minimum priority queeue of pairs.
    //priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>> pq;

    /******************14.dequeue*************/
    deque<int> dq;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end , rbegin, rend,
    // size
    // clear
    // empty
    // at

    /***************15.list*****/
    list<int> ls;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin, end , rbegin, rend,
    // size
    // clear
    // empty
    // remove--> O(1)

    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);
    ls.remove(2); // O(1) operation.

    //QS Given N elements , print the elements that occurs maximum no of times.
    //I/p:
    //5
    // 1 3 3 3 2

    //Output: 3

    // int n;cin>>n;
    // unordered_map<int,int> mpp;
    // //map<int,int> mpp;
    // int maxi = 0;

    // for(int i = 0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     mpp[x]++;
    //     if(mpp[x]> mpp[maxi]){
    //         maxi = x;
    //     }
    // }
    // cout<<maxi<<endl;

    //QS Given N elements , print  all elements in sorted order.
    //I/p:
    //6
    // 6 6 3 2 3 5

    //Output:
    // 2 3 3 5 6 6

    // Time complexity is : nlogn.
    int n;
    cin >> n;

    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ms.insert(x);
    }
    for (auto it : ms)
    {
        cout << it << endl;
    }

    /****************************DAY 3********************/

    /************************16.Bitset*********************/
    //int-> 16bits
    // char => 8 bits

    int a[100];
    char a[100];

    bitset<5> bt; // stores 1 or 0 only
    cin >> bt;    // 10010101.

    // all
    // true--> when all bit is set , returns true.
    // false--> when any bit is unset , returns false.
    cout << bt.all(); // return true or false;

    // any
    // true--> when any bit is set , returns true.
    // false--> when non bit is set , returns false.
    cout << bt.any(); // return true or false;

    //count
    // bt-> 1010111.
    // prints-> 5.
    cout << bt.count(); // prints the number of set bit.

    //flip
    //bt--> 101010

    bt.flip(); // flip all bits.

    bt.flip(2); // bt-> 100010

    //none
    //if none is set , then return true,else return false;
    // bt->100000.
    cout << bt.none(); // false;

    //bt-> 000000.
    cout << bt.none(); // true;

    // set
    bt.set(); // 111111.

    bt.set(2); // set the second position with 1

    bt.set(2, 0); // set the second position with 0

    // reset
    bt.reset(); // turn all indixes to 0.

    bt.reset(2); // turn all 2nd indix  to 0.

    // size
    cout << bt.size(); //return size of se.

    // test
    cout << bt.test(1); // check if the bit is set or not at index 1.

    /**************************ALGORITHMS************************/
    /***************1. sorting*************/
    // Array
    // Vector

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // trake n log n time.
    sort(arr, arr + n); // in increasing order.

    // sort from 1 to 3.
    sort(arr + 1, arr + 3);

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // [)

    // v-> {1,6,2,7,4};
    //      0,1,2,3,4,
    // sort it so that only index from 1 to 3.
    // final vector ==> {1,2,3,7,4}
    sort(v.begin() + 1, v.begin() + 4);

    /****************2.reverse************/
    // if wann reverse
    // reverse(startIterator, endIterator) ----> [)

    reverse(arr, arr + n);

    reverse(arr + 1, arr + 4);

    reverse(v.begin(), v.end());

    reverse(v.begin() + 1, v.begin() + 4);

    //If i want to find the max elements in any index ranges

    // i to j give me the maximum
    int i, j;
    int maxi = INT_MIN;
    for (int k = i; k <= j; k++)
    {
        if (a[k] > maxi)
        {
            maxi = a[k];
        }
    }

    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    // I give you a range and I want to find the sum in that range.
    // i-j, tell me the sum in that range i to j.
    int sum = 0;
    for (int k = i; k <= j; k++)
    {
        sum += arr[k];
    }

    // accumulate(startIterator, endIterator , initialsum);
    int sum = accumulate(arr, arr + n, 0); // here 0 is initial sum.

    int sum = accumulate(v.begin(), v.end(), 0);

    // arr[] = { 1,2,3,2,1,1,1,3,5}
    // x = 1;
    // tell me how many time the element x appear in the array.

    int cnt = 0, x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    // count[firstIterator, lastIterator, x]

    int cnt = count(arr, arr + n, 1); // here 1 is the element x whom we need cnt.
    int cnt = count(v.begin(), v.end(), 1);

    //arr[] = {1,2,3,5,1,2,4,2};
    // find the first occurence of 2.
    // it is in the index 1.

    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ind = i;
            break;
        }
    }
    cout << ind << endl;

    //arr[] = {1,2,3,5,1,2,4,2};
    auto it = find(arr, arr + n, 2); //return an iterator
    //pointing to the first instance of it, or else it
    // return pointing to the end() if it is not there.
    // int index= it-arr;

    auto it = find(v.begin(), v.end(), 2);
    // int id = it - v.begin();

    // cout<<it-(arr.begin())<<endl;// it give you the index using iterator.

    // arr[] = {1,5,6,2,3,5,6};
    // x = 4;
    auto it = find(v.begin(), v.end(), 4);
    // if(it == v.end()){
    //     cout<<"Element is not found"<<endl;
    // }
    // else{
    //     cout<<"Element is first present at: "<<it-v.begin()<<endl;
    //}

    /******************13.BINARY SEARCH ****************/
    // this stl only works on sorted arrays.
    //works in log n
    // arr[] = {1,5,7,8,,9,10};
    // x = 9
    // ture--> 9 exist in array.
    // x = 8
    // false--> 8 doesn't exist.

    // binary_search(firstIterator, lastIterator, x);
    // returns a true or returns a false;

    bool res = binary_search(arr, arr + n, 8);
    bool res = binary_search(v.begin(), v.end(), 8);

    // ******************14. lower_bound function***************/
    // works in sorted array.
    // works in log n/
    //return an iterator pointing to the first element which is not
    // less than x.
    // arr[] = {1,2,3,4,5,7,10,10,11,12};
    //x = 10-->10
    //x = 6--7
    //x = 13--> points to end().

    auto it = lower_bound(arr, arr + n, x);
    // int id = it- arr;

    auto it = lower_bound(v.begin(), v.end(), x);
    // int index = it-v.begin();

    int index = lower_bound(v.begin(), v.end(), x) - v.begin();

    // ******************14. lower_bound function***************/
    // works in sorted array.
    // works in log n
    //return an iterator pointing to the first element which is just
    // greater than x.
    // arr[] = {1,2,3,4,5,7,10,10,11,12};
    //x = 10-->11
    //x = 6-->7
    //x = 13--> points to end().
    //x = 15--> points to end().

    auto it = upper_bound(arr, arr + n, x);
    // int id = it- arr;

    auto it = upper_bound(v.begin(), v.end(), x);
    // int index = it-v.begin();

    int index = upper_bound(v.begin(), v.end(), x) - v.begin();

    //Qs1. find me the first index where the element x lies.
    // find function can be used but that takes O(N) time .
    // and the array is sorted.

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    // arr[] = {1,2,3,4,5,7,10,10,11,12};
    // find x = 6.

    // There are two ways to do it.
    //1st way
    if (binary_search(arr, arr + n, x) == true)
    {
        cout << lower_bound(arr, arr + n, x) - arr;
    }
    else
    {
        cout << "Does not exist" << endl;
    }

    // 2nd way
    int index = lower_bound(arr, arr + n, x) - arr;
    if (index != n && arr[index] == x)
    {
        cout << "Found" << index << endl;
    }
    else
    {
        cout << "Not found " << endl;
    }

    //Qs2. Find the last occurence of x in an array.
    // arr[] = {1,2,3,4,5,7,10,10,11,12};
    // index    0,1,2,3,4,5,6,7,8,9,10.

    //last occurence of x = 10, ans = 7th index
    //last occurence of x = 6, ans = does not exists.
    //last occurence of x = 0,
    //last occurence of x = 13.

    int index = upper_bound(arr, arr + n, x) - arr;
    index -= 1;

    if (index >= 0 && arr[index] == x)
    {
        cout << "Last occurence " << endl;
    }
    else
    {
        cout << "Does not exists " << endl;
    }

    //Qs3. Tell me the no  of times the x appear in array.
    // arr[] = {1,2,3,4,5,7,10,10,11,12};
    // index    0,1,2,3,4,5,6,7,8,9,10.

    // x= 10, ans = 3;
    // x = 7, ans = 2.

    int ind1 = upper_bound(arr, arr + n, x) - arr;
    int ind2 = lower_bound(arr, arr + n, x) - arr;

    cout << "X appears :" << ind1 - ind2 << "times" << endl;

    /****************15.Next Permutation*************/
    // sorted in dictionary order.
    // abc
    // acb
    // bac
    // bca
    // cab
    // cba
    string s;

    //  string  s= " bca"
    bool res = next_permutation(s.begin(), s.end()); // return true;

    //s = "cba"
    bool res = next_permutation(s.begin(), s.end()); // returns false;

    // if I give you any random string s = "bca".
    // and u need to print all the premutations.

    string s = "bca";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int arr[] = {1, 8, 6};
    int n = 3;
    sort(arr, arr + n);
    do
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    } while (next_permutation(arr, arr + n));

    /****************16.Previous Permutation*************/
    // sorted in dictionary order.
    // abc
    // acb
    // bac
    // bca
    // cab
    // cba
    bool res = prev_permutation(s.begin(), s.end()); // return true;

    /*************** 17. COMPARATOR *****************/
    sort(arr, arr + n);
    //   sort(arr, arr+n, comp);

    //descending
    //  sort(arr, arr+n, comp);
    //greater<int> is an inbuild comparator.



    return 0;
}
// add one more
// C++ program to illustrate the
// function of vector in C++
#include <iostream>

// Header file for vector if
// <bits/stdc++.h> not included
#include <vector>
using namespace std;

// Function to print the vector
void print(vector<int> vec)
{

	// vec.size() gives the size
	// of the vector
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	cout << endl;
}

// Driver Code
int main()
{
	// Defining a vector
	vector<int> vec;

	// Put all natural numbers
	// from 1 to 10 in vector
	for (int i = 1; i <= 10; i++) {
		vec.push_back(i);
	}

	cout << "Initial vector: ";

	// print the vector
	print(vec);

	// Size of vector
	cout << "Vector size: " << vec.size() << "\n";

	// Check of vector is empty
	if (vec.empty() == false)
		cout << "Is vector is"
			<< " empty: False\n";

	// Popping out 10 form the vector
	vec.pop_back();
	cout << "Vector after popping: ";
	print(vec);

	// Deleting the first element
	// from the vector using erase()
	vec.erase(vec.begin());
	cout << "Vector after erase"
		<< " first element: ";
	print(vec);

	// Clear the vector
	vec.clear();
	cout << "Vector after "
		<< "clearing: None ";
	print(vec);

	// Check if vector is empty
	if (vec.empty() == true)
		cout << "Is vector is"
			<< " empty: True\n";
}

