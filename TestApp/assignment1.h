#pragma once
class List
{
private:
    int array[10];
public:
    void setIndex(int num, int index);
    int getIndex(int index);

};

void List::setIndex(int num, int index)
{
    array[index] = num;
}

int List::getIndex(int index)
{
    return(array[index]);
}
