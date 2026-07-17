                right = mid;
            else
                left = mid + 1;
        }

        if (a.empty() || a[left] != tar)
            return -1;

        return left;
    }

    int last(vector<int>& a, int tar) {
        int left = 0;
        int right = a.size() - 1;

        while (left < right) {
            int mid = left + (right - left + 1) / 2;

            if (a[mid] <= tar)
                left = mid;
            else
                right = mid - 1;
        }

        if (a.empty() || a[left] != tar)
            return -1;

        return left;
    }

    vector<int> find(vector<int>& arr, int x) {
        return {first(arr, x), last(arr, x)};
    }
};