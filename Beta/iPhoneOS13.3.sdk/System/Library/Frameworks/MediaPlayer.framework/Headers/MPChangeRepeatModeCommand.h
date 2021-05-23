/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand

{
    NSArray *_supportedRepeatTypes;
    long long _currentRepeatType;
}

@property (nonatomic) long long currentRepeatType;

- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedRepeatTypes:(id)arg1;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(_Bool)arg2;

@end
