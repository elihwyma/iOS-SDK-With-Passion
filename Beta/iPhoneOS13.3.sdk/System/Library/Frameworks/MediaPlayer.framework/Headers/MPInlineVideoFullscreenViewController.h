/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPAVItem, MPInlineVideoController, MPSwipableView, MPVideoPlaybackOverlayView, MPVolumeController, MPWeakTimer, NSString, UIActivityIndicatorView, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface MPInlineVideoFullscreenViewController : UIViewController

{
    _Bool _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    _Bool _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    _Bool _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _activeOverlayUserEvents;
    _Bool _statusBarWasHidden;
    MPVolumeController *_volumeController;
}

@property (weak, nonatomic) MPInlineVideoController *masterController;
@property (retain, nonatomic) MPAVItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)swipableViewHadActivity:(id)arg1;
- (void)showAlternateTracks;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)_hideOverlayAnimated:(_Bool)arg1;
- (void)_hideOverlayDidEnd;
- (void)_viewWasTapped:(id)arg1;
- (void)_viewWasPinched:(id)arg1;
- (void)cancelOverlayIdleTimer;
- (void)hideLoadingIndicator;
- (void)prepareForTransitionFromFullscreen;
- (void)resetOverlayIdleTimer;
- (void)showLoadingIndicator;
- (void)showOverlayAnimated:(_Bool)arg1;
- (void)updateOverlayView;
- (void)_overlayIdleTimerFired;
- (void)_showOverlayDidEnd;

@end
