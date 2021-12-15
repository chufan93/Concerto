// Track.h
// by Chufan Wu
// Dec. 2021    Create class definition

#ifndef __TRACK_H__
#define __TRACK_H__
#include <string>

class Track {
public:
    Track() : trackName(""), trackArtist(""), trackPlaytime(0.0) {};
    Track(std::string &trackNamePrmt, std::string &trackArtistPrmt, double &trackPlaytimePrmt);
    ~Track();
    std::string getTrackName () const;
    std::string getTrackArtist () const;
    double getTrackPlaytime () const;
    void setTrackName(std::string &trackNamePrmt);
    void setTrackArtist(std::string &trackArtistPrmt);
    void setTrackPlaytime(double &trackPlaytimePrmt);
private:
    std::string trackName;
    std::string trackArtist;
    double trackPlaytime;
};

#endif
