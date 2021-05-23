/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSNowPlayingInfoMessage : PBCodable

{
    unsigned long long _databaseID;
    unsigned long long _itemID;
    double _timeRemaining;
    double _timestamp;
    double _totalDuration;
    NSString *_albumName;
    NSString *_artistName;
    int _likedState;
    int _mediaKind;
    int _playbackState;
    unsigned int _revisionNumber;
    int _scrubbableState;
    NSString *_trackName;
    _Bool _canSkipNext;
    _Bool _canSkipPrevious;
    _Bool _canWishlist;
    _Bool _hasChapterData;
    _Bool _likeable;
    struct {
        unsigned int databaseID:1;
        unsigned int itemID:1;
        unsigned int timeRemaining:1;
        unsigned int timestamp:1;
        unsigned int totalDuration:1;
        unsigned int likedState:1;
        unsigned int mediaKind:1;
        unsigned int playbackState:1;
        unsigned int revisionNumber:1;
        unsigned int scrubbableState:1;
        unsigned int canSkipNext:1;
        unsigned int canSkipPrevious:1;
        unsigned int canWishlist:1;
        unsigned int hasChapterData:1;
        unsigned int likeable:1;
    } _has;
}

@property (nonatomic) _Bool hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) _Bool hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic, readonly) _Bool hasTrackName;
@property (retain, nonatomic) NSString *trackName;
@property (nonatomic, readonly) _Bool hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (nonatomic, readonly) _Bool hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasTimeRemaining;
@property (nonatomic) double timeRemaining;
@property (nonatomic) _Bool hasTotalDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) _Bool hasRevisionNumber;
@property (nonatomic) unsigned int revisionNumber;
@property (nonatomic) _Bool hasMediaKind;
@property (nonatomic) int mediaKind;
@property (nonatomic) _Bool hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) _Bool hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) _Bool hasScrubbableState;
@property (nonatomic) int scrubbableState;
@property (nonatomic) _Bool hasCanSkipNext;
@property (nonatomic) _Bool canSkipNext;
@property (nonatomic) _Bool hasCanSkipPrevious;
@property (nonatomic) _Bool canSkipPrevious;
@property (nonatomic) _Bool hasLikeable;
@property (nonatomic) _Bool likeable;
@property (nonatomic) _Bool hasCanWishlist;
@property (nonatomic) _Bool canWishlist;
@property (nonatomic) _Bool hasHasChapterData;
@property (nonatomic) _Bool hasChapterData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
