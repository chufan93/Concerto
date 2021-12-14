// album.h
// by Chufan Wu
// Dec. 2021    Create class definition

#ifndef __ALBUM_H__
#define __ALBUM_H__
#include <string>
#include "Date.h"

class Album {
public:
    Album();
private: 
    std::string albumLabel;
    std::string albumIndex;
    std::string albumName;
    std::string artist;
    Date releaseDate;
};

#endif
