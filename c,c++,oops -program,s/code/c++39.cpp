#include<iostream>
using namespace std;
class CWH{
    protected:
string title;
float rating;
    public:CWH(string s,float r){
      title=s;
      rating =r; 
    }
    void virtual display(){};
};
class CWH_videos:public CWH{
float video_length;
public:
CWH_videos(string s,float r,float vl):CWH(s,r){
   video_length=vl; 
}
void display(){
    cout<<"this is an amazing video with title:"<<title<<endl;
    cout<<"rating:"<<rating<<"out of 5 star"<<endl;
        cout<<"length of this video is:"<<video_length<<endl;
}
};
class CWH_TEXT:public CWH{
    int words;
    public:
    CWH_TEXT(string s,float r,int wc):CWH(s,r){
   words=wc; 
}
void display(){
    cout<<"this is an amazing video with title:"<<title<<endl;
    cout<<"ratingof this text tutorial:"<<rating<<"out of 5 star"<<endl;
        cout<<"number of words in this tutorial is:"<<words<<endl;
}
};
int main(){
    string title;
    float rating,video_length;
    int words;
    // FOR CWH_VIDEOS
    title="DJANGO TUTORIAL";
    rating=4.58;
    video_length=5.21;
CWH_videos djvideo(title,rating ,video_length);
// djvideo .display();
// FOR CWH TEXT
title="DJANGO TUTORIAL TEXT";
words=422;
rating=4.22;
CWH_TEXT djtext(title,rating, words);
// djtext.display();
CWH *tuts[2];
tuts[0]=&djvideo;
tuts[1]=&djtext;
tuts[0]->display();
tuts[1]->display();
return 0;
}