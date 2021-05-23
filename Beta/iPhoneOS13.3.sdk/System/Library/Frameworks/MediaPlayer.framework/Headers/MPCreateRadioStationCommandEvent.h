/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSNumber, NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent

{
    _Bool _requestingPlaybackInitialization;
    NSURL *_stationURL;
    NSNumber *_privateListeningOverride;
}

@property (nonatomic, readonly) NSURL *stationURL;
@property (nonatomic, readonly, getter=isRequestingPlaybackInitialization) _Bool requestingPlaybackInitialization;
@property (nonatomic, readonly) NSNumber *privateListeningOverride;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
