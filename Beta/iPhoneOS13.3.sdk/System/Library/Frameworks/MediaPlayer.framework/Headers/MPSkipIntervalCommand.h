/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand

{
    NSArray *_preferredIntervals;
}

@property (copy, nonatomic) NSArray *preferredIntervals;

- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithInterval:(double)arg1;

@end
