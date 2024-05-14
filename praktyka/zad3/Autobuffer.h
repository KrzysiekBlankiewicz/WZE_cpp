
class AutoBuffer
{
    char* buffer;
    int length;

    public:
        AutoBuffer(int size);
        ~AutoBuffer();
        AutoBuffer(AutoBuffer& otherBuffer);
        AutoBuffer(AutoBuffer&& otherBuffer);
        char* data();
        int getLength();
};