#include <iostream> 
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){
	//base case 
	if(index >= str.length()){
		if(output.length() > 0){
			ans.push_back(output);
		}
		return;
	}

	//exclusion 
	solve(str, output, index+1, ans);

	//inclusion 
	char element = str[index];
	output.push_back(element);
	solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){
	
	string output = "";
	vector<string> ans;
	int index = 0;
	solve(str, output, index, ans);
	return ans;
	
}


int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<string> result = subsequences(input);

    cout << "Subsequences are:" << endl;
    for(const string &subseq : result) {
        cout << subseq << endl;
    }

    return 0;
}
