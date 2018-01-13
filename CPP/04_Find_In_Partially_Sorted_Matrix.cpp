/*
面试题4：二维数组中的查找
在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
1  2  8  9
2  4  9  12
4  7  10 13
6  8  11 15
*/

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool found = false;
        int rows = array.size();
        int cols = array[0].size();
        for(int i = 0,j=cols-1;i < rows && j >= 0;){  //每次寻找数组查找范围的右上角那个数
            if(array[i][j] == target){
                found = true;
                break;
            }else if(array[i][j] > target)
                --j;
            else
            	++i;
        }
        return found;
    }
};
