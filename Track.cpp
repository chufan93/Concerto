// Track.cpp
// by Chufan Wu
// Dec. 2021

#include <string>
#include "Track.h"

// Constructor
Track::Track(std::string &trackNamePrmt, double &trackPlaytimePrmt) {
    this -> trackName = trackNamePrmt;
    this -> trackPlaytime = trackPlaytimePrmt;
}

Track::Track(std::string &trackNamePrmt, std::string &trackArtistPrmt, std::string &albumArtistPrmt, 
        double &trackPlaytimePrmt, int &trackNumberPrmt, int &trackCountPrmt, int &discNumberPrmt, 
        int &discCountPrmt, int &trackPlayCountPrmt, int &trackEvaluationPrmt, bool &isFavouritePrmt, 
        std::string &recordingInfoPrmt, std::string &commentPrmt) {
    this -> trackName = trackNamePrmt;
    this -> trackArtist = trackArtistPrmt;
    this -> albumArtist = albumArtistPrmt;
    this -> trackPlaytime = trackPlaytimePrmt;
    this -> trackNumber = trackNumberPrmt;
    this -> trackCount = trackCountPrmt;
    this -> discNumber = discNumberPrmt;
    this -> discCount = discCountPrmt;
    this -> trackPlayCount = trackPlayCountPrmt;
    this -> trackEvaluation = trackEvaluationPrmt;
    this -> isFavourite = isFavouritePrmt;
    this -> recordingInfo = recordingInfoPrmt;
    this -> comment = commentPrmt;
}

// Destructor
Track::~Track() {
    this -> trackName = "";
    this -> trackArtist = "";
    this -> trackPlaytime = 0.0;
}

std::string Track::getTrackName() const {
    return this -> trackName;
}

std::string Track::getTrackArtist() const {
    return this -> trackArtist;
}

double Track::getTrackPlaytime() const {
    return this -> trackPlaytime;
}

void Track::setTrackName(std::string &trackNamePrmt) {
    this -> trackName = trackNamePrmt;
}

void Track::setTrackArtist(std::string &trackArtistPrmt) {
    this -> trackArtist = trackArtistPrmt;
}

void Track::setTrackPlaytime(double &trackPlaytimePrmt) {
    this -> trackPlaytime = trackPlaytimePrmt;
}
