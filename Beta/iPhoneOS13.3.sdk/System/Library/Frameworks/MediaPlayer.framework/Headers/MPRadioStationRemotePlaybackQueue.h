/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

{
    long long _stationID;
    NSString *_stationStringID;
}

@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly) NSString *stationStringID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
- (_Bool)verifyWithError:(id *)arg1;

@end
