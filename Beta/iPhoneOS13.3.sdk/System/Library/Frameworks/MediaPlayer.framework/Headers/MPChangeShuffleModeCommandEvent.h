/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent

{
    _Bool _preservesShuffleMode;
    long long _shuffleType;
}

@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) _Bool preservesShuffleMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
