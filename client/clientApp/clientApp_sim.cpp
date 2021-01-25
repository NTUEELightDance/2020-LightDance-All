// this c++ script is for testing use
// To test time sync with your laptop, you can use omxplayer to play audio
// By listening music from both devices, you can easily judge how well the time synchronization is.
// useful advice from RA
#include <iostream>

using namespace ::std;

int main()
{
    cout<<"run"<<endl;
    string ss;
    while(cin>>ss)
    {
        if(ss=="run")
        {
            system("omxplayer ../../music/eenight.wav");
        }
    }

}