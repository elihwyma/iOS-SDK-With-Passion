/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <AVKit/AVPlayerViewController.h>

@class NSMutableArray, NSString, UIView;

@protocol SVVideoViewControllerControlsVisibilityDelegate, SVVideoViewControllerFullscreenPresentationDelegate, SVVideoVisibilityManager;

@interface SVVideoViewController : AVPlayerViewController

{
    id <SVVideoViewControllerFullscreenPresentationDelegate> _fullscreenPresentationDelegate;
    id <SVVideoViewControllerControlsVisibilityDelegate> _controlsVisibilityDelegate;
    id <SVVideoVisibilityManager> _visibilityManager;
    NSMutableArray *_appearanceObservers;
    UIView *_sourceViewForPresentation;
    UIView *_targetViewForDismissal;
}

@property (nonatomic, readonly) id <SVVideoVisibilityManager> visibilityManager;
@property (nonatomic, readonly) NSMutableArray *appearanceObservers;
@property (weak, nonatomic) UIView *sourceViewForPresentation;
@property (weak, nonatomic) UIView *targetViewForDismissal;
@property (weak, nonatomic) id <SVVideoViewControllerFullscreenPresentationDelegate> fullscreenPresentationDelegate;
@property (weak, nonatomic) id <SVVideoViewControllerControlsVisibilityDelegate> controlsVisibilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (id)playerViewController:(id)arg1 targetViewForDismissalAnimationWithProposedTargetView:(id)arg2;
- (id)initWithVisiblityManager:(id)arg1;
- (void)addAppearanceObserver:(id)arg1;
- (void)presentFromSourceView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissToTargetView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAppearanceObserver:(id)arg1;

@end
