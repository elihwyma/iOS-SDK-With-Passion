/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand

{
    _Bool _canBeControlledByScrubbing;
}

@property (nonatomic) _Bool canBeControlledByScrubbing;

- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPositionTime:(double)arg1;

@end
