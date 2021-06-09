#pragma once
class ary
{
private:
    int array[10];
public:
    void setIndex(int num, int index);
    int getIndex(int index);

};

void ary::setIndex(int num, int index)
{
    array[index] = num;
}

int ary::getIndex(int index)
{
    return(array[index]);
}
