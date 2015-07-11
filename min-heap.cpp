#include <iostream>
#include <cstdlib>
#define size_for_initialisation 100
using namespace std;

class minHeap
{
private:
    int heap[size_for_declaring];
    int index_of_heap;
    void minHeapify();

public:
    minHeap(){}
    void createHeap();
    void insert(int element);
    int findMin();
    void deleteKey();
    void deleteMin();
    int extractMin();
    void displayHeap();
    void decreaseKey();
    int size();
};


int minHeap::size()
{
    return index_of_heap;
}

void minHeap::createHeap()
{
    heap[size_for_initialisation] = {0};
    index_of_heap = 0;
}

void minHeap::insert(int element)
{
    index_of_heap++;
    heap[index_of_heap] = element;
    buildMinHeap();
}

void minHeap::buildminHeap()
{
    int i;
    for(i = index_of_heap/2 ; i > 0 ; i--)
        minHeapify(i);
}

void minHeap::minHeapify(int element)
{
    int left = 2 * element;
    int right= 2 * element + 1;
    int small;

    if((left >= index_of_heap) && (heap[left] < heap[index_of_heap]))
        small = left;
    else
        small = x;

    if((right >= index_of_heap) && (heap[right] < heap[small]))
        small = right;

    if(x != small)
    {
        swap(heap[index_of_heap], heap[small]);
        maxHeapify(small);
    }
}

void minHeap::deleteMin()
{
    swap(heap[1], heap[index_of_heap--]);
    buildMaxHeap();
}

int main()
{

}
