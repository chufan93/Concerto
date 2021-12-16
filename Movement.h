// Movement.h
// by Chufan Wu
// Dec. 2021    Create class definition

#ifndef __MOVEMENT_H__
#define __MOVEMENT_H__
#include <string>
#include "Track.h"

class Movement : Track {
public:
    Movement() : tempo(""), opus("") {};
    Movement(std::string &trackNamePrmt, std::string &trackArtistPrmt, double &trackPlaytimePrmt);
    Movement(std::string &trackNamePrmt, std::string &trackArtistPrmt, double &trackPlaytimePrmt, 
        std::string &tempo);
    Movement(std::string &trackNamePrmt, std::string &trackArtistPrmt, double &trackPlaytimePrmt, 
        std::string &tempo, std::string &opus);
    ~Movement();
    std::string getTempo () const;
    std::string getOpus () const;
    void setTempo();
    void setOpus();
private:
    int movementIndex;
    int movementCount;
    std::string movementName;
    std::string tempo;
    std::string opus;
};

#endif
