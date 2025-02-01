class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> studentsQ;
        queue<int> sandwichesQ;

        for(int i: students){
            studentsQ.push(i);
        }
        for(int i : sandwiches){
            sandwichesQ.push(i);
        }

        int rotation = 0;
        while(!studentsQ.empty() && rotation < studentsQ.size() ){
            if(studentsQ.front() == sandwichesQ.front()){
                studentsQ.pop();
                sandwichesQ.pop();
                rotation = 0;
            }
            else{
                studentsQ.push(studentsQ.front());
                studentsQ.pop();
                rotation++;
            }
        }
        return studentsQ.size();
    }
};