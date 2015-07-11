#include <iostream>
#include <cstdlib>
#define size_for_initialisation 100
using namespace std;

class maxHeap
{
private:
    int heap[size_for_declaring];
    int index_of_heap;
    void maxHeapify();

public:
    maxHeap(){}
    void createHeap();
    void insert(int element);
    int findmax();
    void deleteKey();
    void deletemax();
    int extractmax();
    void displayHeap();
    void decreaseKey();
    int size();
};


int maxHeap::size()
{
    return index_of_heap;
}

void maxHeap::createHeap()
{
    heap[size_for_initialisation] = {0};
    index_of_heap = 0;
}

void maxHeap::insert(int element)
{
    index_of_heap++;
    heap[index_of_heap] = element;
    buildmaxHeap();
}

void maxHeap::buildmaxHeap()
{
    int i;
    for(i = index_of_heap/2 ; i > 0 ; i--)
        maxHeapify(i);
}

void maxHeap::maxHeapify(int element)
{
    int left = 2 * element;
    int right= 2 * element + 1;
    int large;

    if((left <= index_of_heap) && (heap[left] > heap[x]))
        large = left;
    else
        large = x;

    if((right <= index_of_heap) && (heap[right] > heap[large]))
        large = right;

    if(x != large)
    {
        swap(heap[x], heap[large]);
        maxHeapify(large);
    }
}

void maxHeap::deletemax()
{
    swap(heap[1], heap[index_of_heap--]);
    buildMaxHeap();
}

int main()
{

}
