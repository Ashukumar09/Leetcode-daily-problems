class Solution {
public:
int ncr(int n,int r) {
        int res=1;
        for(int i=0;i<r;i++) {
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        for(int n=1;n<=numRows;n++) {
         vector<int> row;
          for(int c=1;c<=n;c++) {
         row.push_back(ncr(n-1,c-1));
        }
        triangle.push_back(row);
    }
    return triangle;
    }
};