/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class AVPlayer, AVPlayerController, LPAVPlayerViewController, LPVideoView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface LPFullScreenVideoController : NSObject

{
    LPVideoView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismiss;
- (void)present;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (_Bool)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)arg1;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setUpFullScreenVideoViewControllerIfNeeded;

@end
