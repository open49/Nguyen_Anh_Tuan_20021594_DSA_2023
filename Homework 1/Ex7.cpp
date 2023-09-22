/*
-Cho một dãy các kí tự đại diện cho các công việc mà máy tính phải làm ( các kí tự này là các chữ cái in hoa từ A đến Z).
-Các chữ cái khác nhau đại diện cho các công việc khác nhau, các công việc có thể được hoàn thành dưới bất kì thứ tự nào. 
-Mỗi giây, máy tính có thể hoàn thành xong một công việc. 
-Hai công việc giống nhau phải được thực hiện tại 2 thời điểm cách nhau ít nhất là n.
-Tính thời gian ít nhất để máy tính có thể hoàn thành hết các công việc.
Ví dụ: Có 4 công việc ('A','A','B',B') và n=3. Máy tính cần 5 giây để hoàn thành công việc này : A−>B−>nghỉ−>A−>B.
Đầu vào
Đầu vào từ bàn phím gốm 2 dòng. 
-Dòng đầu tiên chứa 2 số nguyên m,n. 
-Dòng thứ hai chứa m kí tự đại diện cho m công việc. (m≤105,n≤100).
Đầu ra
-In ra màn hình thời gian ít nhất để máy tính hoàn thành hết các công việc.
For example:
Input
4 3
AABB
RESULT:
5
*/
// #include <iostream>
// #include <map>
// #include <algorithm>

// using namespace std;

// int minimum_completion_time(int m, int n, string jobs) {
//     map<char, int> job_count;
//     for (char job : jobs) {
//         if (job_count.find(job) != job_count.end()) {
//             job_count[job]++;
//         } else {
//             job_count[job] = 1;
//         }
//     }

//     int max_job_count = 0;
//     for (const auto& kv : job_count) {
//         max_job_count = max(max_job_count, kv.second);
//     }

//     int idle_time = (max_job_count - 1) * n;

//     int total_time = 0;
//     for (const auto& kv : job_count) {
//         total_time += kv.second;
//         if (kv.second == max_job_count) {
//             total_time--;
//         }
//     }

//     return total_time + idle_time;
// }

// int main() {
//     int m, n;
//     cin >> m >> n;
//     string jobs;
//     cin >> jobs;

//     int result = minimum_completion_time(m, n, jobs);
//     cout << result << endl;

//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<char> tasks(m);
    for(int i =0 ; i<n; i++){
        char c;
        cin>>c;
        tasks.push_back(c);
    }
    vector<int> freq(26,0);

    for(auto ch: tasks) freq[ch - 'A']++;

    int max_count = *max_element(freq.begin(),freq.end());
//    cout<<max_count<<endl;

    int result = (max_count - 1)*n;
//    cout<<result<<endl;

    for (auto f : freq){
//        cout<<f<<endl;
        if (f == max_count){result++;}
        
    }

    cout<< max(result,(int)tasks.size());
    return 0;
}
