/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent

{
    _Bool _requestingDefermentToPlaybackQueuePosition;
}

@property (nonatomic, readonly, getter=isRequestingDefermentToPlaybackQueuePosition) _Bool requestingDefermentToPlaybackQueuePosition;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
