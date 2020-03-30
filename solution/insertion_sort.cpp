//Introduction to Algorithms
//2.1插入排序
//INSERTION-SORT(A)
//插入排序算法，实现插入排序，按照从小到大的顺序进行排序生成

#include<iostream>
using namespace std;

void display(int *a){
    for(int i=0;i<sizeof(a);i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;

}

void insertion_sort(int *a){
    int i,j,key;
    
    for(j=1;j<sizeof(a);j++){
        key =a[j];
        i=j-1;
        //cout<<i<<' '<<a[i]<<' '<<key<<endl;
        while(i>=0&&a[i]>key){
            // cout<<i<<endl;
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
        
    }

}

int main(){
    int b[8]={12,56,2,4,72,49,22,37};
    insertion_sort(b);
    display(b);
    


    return 0;
}