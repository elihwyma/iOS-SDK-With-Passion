/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSeekCommandEvent : MPRemoteCommandEvent

{
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
