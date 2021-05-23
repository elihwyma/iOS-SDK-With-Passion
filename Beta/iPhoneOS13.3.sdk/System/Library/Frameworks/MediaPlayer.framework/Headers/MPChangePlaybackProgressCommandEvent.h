/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangePlaybackProgressCommandEvent : MPRemoteCommandEvent

{
    float _playbackProgress;
}

@property (nonatomic, readonly) float playbackProgress;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
