
//Q5   
void ReOrder(int newarr[], int arr[],int size){
     std::stack<int> positive;
     std:std::queue<int> negative;
     for(int i=0; i<size; i++){
        if(arr[i]<0) negative.enqueue(arr[i]);
        if(arr[i]>0) positive.push(arr[i]);
     }
     int j=0
     while(!negative.isEmpty()){
        newarr[j++]=negative.front();
        negative.dequeue();
     }
     while(!positive.isEmpty()){
         newarr[j++]=positive.top();
         positive.pop();
     }
}
// When using a singly linked list to implement a stack, 
// is it better for insertions to occur at the front or 
// back of the list (or does it matter)? Why?
I think it is better to insert at the front of the ilst
Because for the pop and push operation of singly list,
push_front() is O(1), push_back() is O(1), pop_front() O(1), pop_back() is O(n)
since after delete the last node, we need to set the back_ to pointer to the previous 
node, so need to go through all the nodes in order to get to the previous one
If we insert at the front, when pop, we can avoid call pop_back function.
  
  
