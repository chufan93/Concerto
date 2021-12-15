// Track.cpp
// by Chufan Wu
// Dec. 2021

#include <string>
#include "Track.h"

Track::Track(std::string &trackNamePrmt, std::string &trackArtistPrmt, double &trackPlaytimePrmt) {
    this -> trackName = trackNamePrmt;
    this -> trackArtist = trackArtistPrmt;
    this -> trackPlaytime = trackPlaytimePrmt;
}

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
