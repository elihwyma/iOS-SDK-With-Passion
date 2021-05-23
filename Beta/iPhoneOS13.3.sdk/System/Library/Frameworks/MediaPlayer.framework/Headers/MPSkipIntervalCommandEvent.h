/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent

{
    double _interval;
}

@property (nonatomic, readonly) double interval;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end
