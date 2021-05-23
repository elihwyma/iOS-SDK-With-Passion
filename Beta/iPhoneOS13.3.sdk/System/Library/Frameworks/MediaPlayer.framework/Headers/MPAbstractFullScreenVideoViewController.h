/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPVideoViewController.h>

@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController

{
    unsigned int _requestExitAfterHidingControls:1;
    unsigned int _rotateAfterHidingControls:1;
    unsigned int _showControlsAfterRotate:1;
    unsigned int _autoHidingForItemChange:1;
    unsigned int _scheduledAutoHide:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setItem:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3;
- (void)swipableViewHadActivity:(id)arg1;
- (_Bool)canHideOverlay:(_Bool)arg1;
- (void)setControlsOverlayVisible:(_Bool)arg1 animate:(_Bool)arg2 force:(_Bool)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (_Bool)canShowControlsOverlay;
- (void)setCanShowControlsOverlay:(_Bool)arg1;
- (_Bool)controlsOverlayVisible;
- (void)setDisableControlsAutohide:(_Bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)displayVideoViewOnScreen;
- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (_Bool)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (_Bool)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)showOverlayAnimated:(_Bool)arg1;
- (void)showOverlayIfNecessary;
- (_Bool)inhibitOverlay;
- (void)setInhibitOverlay:(_Bool)arg1;
- (_Bool)forceScaleToFitInPortrait;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)hideOverlayAnimated:(_Bool)arg1;
- (void)cancelControlsOverlayAutohide;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(_Bool)arg1;
- (void)_hideOverlayWithAnimation:(_Bool)arg1 shouldUpdateAutohideFlag:(_Bool)arg2;
- (long long)_validInterfaceOrientation;

@end
