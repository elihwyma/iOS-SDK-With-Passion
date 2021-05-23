/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPPlayButtonControl.h>

@class LPStreamingAudioPlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl

{
    LPStreamingAudioPlayer *_player;
}

- (void)dealloc;
- (void)buttonPressed:(id)arg1;
- (void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2;
- (void)streamingAudioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)streamingAudioPlayerDidFailToPlay:(id)arg1;
- (id)initWithAudio:(id)arg1 style:(id)arg2;

@end
