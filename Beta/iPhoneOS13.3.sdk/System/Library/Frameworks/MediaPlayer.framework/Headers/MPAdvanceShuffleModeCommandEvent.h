/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPAdvanceShuffleModeCommandEvent : MPRemoteCommandEvent

{
    _Bool _preservesShuffleMode;
}

@property (nonatomic, readonly) _Bool preservesShuffleMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
