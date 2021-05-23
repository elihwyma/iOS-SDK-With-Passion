/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPVideoView.h>

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView : LPVideoView

{
    LPYouTubePlayerView *_platformYouTubeView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)volume;
- (void)setVolume:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setPlaying:(_Bool)arg1;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5;
- (_Bool)usesSharedAudioSession;
- (_Bool)shouldShowMuteButton;
- (_Bool)usesCustomFullScreenImplementation;
- (id)createVideoPlayerView;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(_Bool)arg2;
- (void)enterCustomFullScreen;

@end
