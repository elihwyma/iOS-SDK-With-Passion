/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <AVFoundation/AVPlayer.h>

@interface SVPlayer : AVPlayer

{
    int _audioMode;
}

@property (nonatomic, readonly) int audioMode;

- (void)dealloc;
- (id)initWithAudioMode:(int)arg1;

@end
