/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPFeedbackCommandEvent : MPRemoteCommandEvent

{
    _Bool _negative;
}

@property (nonatomic, readonly, getter=isNegative) _Bool negative;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
