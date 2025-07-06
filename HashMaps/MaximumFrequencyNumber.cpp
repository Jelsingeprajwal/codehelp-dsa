// Lecture 74 codestudio

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int> count;
    int maxFrequency = 0;
    int maxAns = 0;

    for(int i = 0; i<arr.size();i++){
        count[arr[i]]++;
        maxFrequency = max(maxFrequency,count[arr[i]]);
    }

    for(int i = 0; i<arr.size();i++){
        if(maxFrequency == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}