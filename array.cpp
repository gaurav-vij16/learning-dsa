void merge(vector<int> &arr, int low, int mid, int high)
{
  int left = low;
  int right = mid + 1;
  vector<int> temp;
  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else if (arr[left] >= arr[right])
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  // transfer of elements from temp array to main array
  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void Ms(vector<int> &arr, int low, int high)
{
  if (low == high)
    return;
  int mid = (low + high) / 2;
  Ms(arr, low, mid);
  Ms(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

void mergeSort(vector<int> &arr, int n)
{
  // Write your code here.
  Ms(arr, 0, n - 1);
}

class Solution
{

  void f(int i, int target, vexctor<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
  {
    // base case
    if (i == arr.size())
    {
      if (target == 0)
        ans.push_back(ds);
    }
    return;
  }

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target)
  {
    vector<vector<int>> ans;
    vector<int> ds;
    f();
    return ans;
  };