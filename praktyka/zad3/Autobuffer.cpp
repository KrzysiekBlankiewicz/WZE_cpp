#include "Autobuffer.h"
#include <utility>

AutoBuffer::AutoBuffer(int len)
{
    buffer = new char[len];
    length = len;
}

AutoBuffer::~AutoBuffer()
{
    if(buffer != nullptr)
       delete buffer;
}

AutoBuffer::AutoBuffer(AutoBuffer &otherBuffer)
{
    length = otherBuffer.getLength();
    buffer = new char[length];
    *buffer = *(otherBuffer.data());
}

AutoBuffer::AutoBuffer(AutoBuffer &&otherBuffer)
{
    buffer = otherBuffer.buffer;
    length = otherBuffer.getLength();
    
    otherBuffer.buffer = nullptr;
    otherBuffer.length = 0;
}

char* AutoBuffer::data()
{
    return buffer;
}

int AutoBuffer::getLength()
{
    return length;
}
