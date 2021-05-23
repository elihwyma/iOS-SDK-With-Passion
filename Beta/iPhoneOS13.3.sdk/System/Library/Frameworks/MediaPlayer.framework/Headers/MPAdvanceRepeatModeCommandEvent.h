/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent

{
    _Bool _preservesRepeatMode;
}

@property (nonatomic, readonly) _Bool preservesRepeatMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
