/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangePlaybackRateCommand : MPRemoteCommand

{
    float _preferredRate;
    NSArray *_supportedPlaybackRates;
}

@property (copy, nonatomic) NSArray *supportedPlaybackRates;

- (float)preferredRate;
- (void)setPreferredRate:(float)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPlaybackRate:(float)arg1;

@end
