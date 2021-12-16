// Track.h
// by Chufan Wu
// Dec. 2021    Create class definition

#ifndef __TRACK_H__
#define __TRACK_H__
#include <string>

class Track {
public:
    Track() : trackName(""), trackArtist(""), albumArtist(""), 
        trackPlaytime(0.0), trackPlayCount(0), discNumber(0), discCount(0), 
        trackEvaluation(0), isFavourite(false), recordingInfo(""), comment("") {};
    Track(std::string &trackNamePrmt, double &trackPlaytimePrmt);
    Track(std::string &trackNamePrmt, std::string &trackArtistPrmt, std::string &albumArtistPrmt, 
        double &trackPlaytimePrmt, int &trackNumberPrmt, int &trackCountPrmt, int &discNumberPrmt, 
        int &discCountPrmt, int &trackPlayCountPrmt, int &trackEvaluationPrmt, bool &isFavouritePrmt, 
        std::string &recordingInfoPrmt, std::string &commentPrmt);
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
    std::string albumArtist;
    double trackPlaytime;
    int trackNumber;
    int trackCount;
    int discNumber;
    int discCount;
    int trackPlayCount;
    int trackEvaluation;
    bool isFavourite;
    std::string recordingInfo;
    std::string comment;
};

#endif
