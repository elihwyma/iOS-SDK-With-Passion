/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPUbiquitousPlaybackPositionEntity : NSObject

{
    _Bool _hasBeenPlayed;
    NSString *_ubiquitousIdentifier;
    double _bookmarkTimestamp;
    double _bookmarkTime;
    unsigned long long _userPlayCount;
}

@property (copy, nonatomic, readonly) NSString *ubiquitousIdentifier;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) unsigned long long userPlayCount;
@property (nonatomic) _Bool hasBeenPlayed;

+ (id)ubiquitousIdentifierWithStoreAdamID:(long long)arg1;

- (id)init;
- (id)initWithUbiquitousIdentifier:(id)arg1;
- (_Bool)hasBeenPlayedModified;
- (_Bool)userPlayCountModified;
- (_Bool)bookmarkTimeModified;
- (_Bool)bookmarkTimestampModified;

@end
