#include <iostream>
#include <queue>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;
    Heap(/* args */)
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int partent = index / 2;
            if (arr[partent] < arr[index])
            {
                swap(arr[partent], arr[index]);
                index = partent;
            }
            else
            {
                return;
            }
        }
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete!" << endl;
            return;
        }
        // step1 put last element into index
        arr[1] = arr[size];

        // step 2 remove last element
        size--;

        // step 3 take root node to correct position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= size && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= size && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int n)
{

    int size = n;

    while (size > 1)
    {
        // step 1: swap first and last elements
        swap(arr[1], arr[size]);
        size--;
        // step 2 heapify remaining array
        heapify(arr, size, 1);
    }
}
int main()
{

    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.deleteFromHeap();

    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};

    int n = 5;

    // heap creation
    for (int i = n / 2; i > 0; i--)
    {

        heapify(arr, n, i);
    }
    cout << "print the array:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // heap sort
    heapSort(arr, n);
    cout << "print the array after heapsort:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Priority Queue

    cout<<"Heap using Priority queue"<<endl;

    // Max heap by default
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(1);

    cout<<"element at top:" << pq.top() << endl;
    return 0;
}