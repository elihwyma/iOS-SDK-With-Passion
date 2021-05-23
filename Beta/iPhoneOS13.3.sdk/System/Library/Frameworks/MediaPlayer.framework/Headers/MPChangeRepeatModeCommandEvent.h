/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent

{
    _Bool _preservesRepeatMode;
    long long _repeatType;
}

@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) _Bool preservesRepeatMode;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
