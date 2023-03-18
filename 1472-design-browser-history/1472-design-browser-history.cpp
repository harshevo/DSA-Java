class BrowserHistory{
	vector<string> visitedurls;
	int currurl,lasturl;
public:
	BrowserHistory(string homepage){
		visitedurls.push_back(homepage);
		currurl=0;
		lasturl=0;
	}

	void visit(string url){
		currurl+=1;
		if(visitedurls.size()>currurl){
			visitedurls[currurl]=url;
		}
		else{
			visitedurls.push_back(url);
		}
		lasturl=currurl;
	}

	string back(int steps){
		currurl = max(0,currurl-steps);
		return visitedurls[currurl];
	}

	string forward(int steps){
		currurl = min(lasturl,currurl+steps);
		return visitedurls[currurl];
	}


};