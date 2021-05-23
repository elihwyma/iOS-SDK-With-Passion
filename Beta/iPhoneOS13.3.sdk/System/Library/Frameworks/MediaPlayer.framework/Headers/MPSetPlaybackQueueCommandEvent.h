/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSNumber;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent

{
    MPRemotePlaybackQueue *_playbackQueue;
    NSNumber *_privateListeningOverride;
}

@property (nonatomic, readonly) MPRemotePlaybackQueue *playbackQueue;
@property (nonatomic, readonly) NSNumber *privateListeningOverride;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2;

@end
