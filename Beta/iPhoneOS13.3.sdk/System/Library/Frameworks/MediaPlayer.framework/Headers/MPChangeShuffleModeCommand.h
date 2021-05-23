/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand

{
    NSArray *_supportedShuffleTypes;
    long long _currentShuffleType;
}

@property (nonatomic) long long currentShuffleType;

- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithType:(long long)arg1;
- (void)setSupportedShuffleTypes:(id)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(_Bool)arg2;

@end
