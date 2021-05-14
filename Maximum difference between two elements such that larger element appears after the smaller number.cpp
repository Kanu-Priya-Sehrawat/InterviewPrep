int maxDiff(int arr[], int arr_size)
{
  int min_ele_so_far = arr[0];
  int max_diff = arr[1] - arr[0];
  int cur_diff = arr[1] - arr[0];
  for(int i=1; i<arr_size; i++){
    min_ele_so_far = min(min_ele_so_far, arr[i]);
    cur_diff = arr[i] - min_ele_so_far;
    max_diff = max(max_diff, cur_diff);
  }
  return max_diff;
}
