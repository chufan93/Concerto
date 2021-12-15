// Album.h
// by Chufan Wu
// Dec. 2021    Create class definition

#ifndef __ALBUM_H__
#define __ALBUM_H__
#include <string>
#include "Date.h"

class Album {
public:
    Album();
    Album(std::string &albumLabelPrmt, std::string &albumIndexPrmt, 
        std::string &albumNamePrmt, std::string &albumArtistPrmt);
    Album(std::string &albumLabelPrmt, std::string &albumIndexPrmt, 
        std::string &albumNamePrmt, std::string &albumArtistPrmt, Date &releaseDatePrmt);
    ~Album();
private: 
    std::string albumLabel; // label
    std::string albumIndex; // index
    std::string albumName; // name
    std::string albumGenre; // genre
    std::string albumArtist; // album artist
    std::string albumMedium; // CD or Vinyl
    std::string series; // album series
    std::string recordingTech; // analog or digital
    Date releaseDate; // release date
    int discNum; // number of discs
    int discIndex;
    double playTime;
    bool isKlassikAlbum;
    bool isComposerAlbum;
    bool isCompilationAlbum;
    bool isSeries;
    bool isVariousArtists;
};

#endif
