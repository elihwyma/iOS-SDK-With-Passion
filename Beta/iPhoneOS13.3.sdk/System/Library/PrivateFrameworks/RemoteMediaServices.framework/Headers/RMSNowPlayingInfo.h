/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RMSNowPlayingInfo : NSObject

{
    _Bool _canSkipNext;
    _Bool _canSkipPrevious;
    _Bool _canWishlist;
    _Bool _hasChapterData;
    _Bool _likeable;
    int _revisionNumber;
    unsigned long long _itemID;
    unsigned long long _databaseID;
    NSString *_trackName;
    NSString *_artistName;
    NSString *_albumName;
    double _timestamp;
    double _timeRemaining;
    double _totalDuration;
    long long _mediaKind;
    long long _playbackState;
    long long _likedState;
    long long _scrubbableState;
}

@property (nonatomic) unsigned long long itemID;
@property (nonatomic) unsigned long long databaseID;
@property (retain, nonatomic) NSString *trackName;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) double timestamp;
@property (nonatomic) double timeRemaining;
@property (nonatomic) double totalDuration;
@property (nonatomic) int revisionNumber;
@property (nonatomic) long long mediaKind;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long likedState;
@property (nonatomic) long long scrubbableState;
@property (nonatomic) _Bool canSkipNext;
@property (nonatomic) _Bool canSkipPrevious;
@property (nonatomic) _Bool canWishlist;
@property (nonatomic) _Bool hasChapterData;
@property (nonatomic, getter=isLikeable) _Bool likeable;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) NSString *artworkIdentifier;

- (id)description;
- (id)protobuf;
- (id)initWithProtobuf:(id)arg1;

@end
