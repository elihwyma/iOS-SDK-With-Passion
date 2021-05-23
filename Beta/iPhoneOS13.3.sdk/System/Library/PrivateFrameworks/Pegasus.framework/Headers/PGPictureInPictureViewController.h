/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIViewController.h>

@class NSArray, NSString, PGHostedWindowHostingHandle, PGLayerHostView, PGLoadingIndicatorView, PGPictureInPictureApplication, PGPictureInPictureControlsViewController, PGPlaybackProgress, PGStashedView, UIView;

@protocol PGPictureInPictureViewControllerContentContainer, PGPictureInPictureViewControllerDelegate;

@interface PGPictureInPictureViewController : UIViewController

{
    long long _stashState;
    PGHostedWindowHostingHandle *_hostedWindowHostingHandle;
    struct CGAffineTransform _layerHostTransform;
    _Bool _showsAlternateActionButtonImage;
    _Bool _showsLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    UIView *_styleViewBelow;
    UIView *_containerView;
    PGLayerHostView *_contentView;
    PGLoadingIndicatorView *_loadingIndicatorView;
    PGStashedView *_stashedView;
    UIView *_styleViewAbove;
    PGPictureInPictureControlsViewController *_controlsViewController;
    _Bool _initialLayerFrameIsNull;
    id <PGPictureInPictureViewControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureViewController_updateHostedWindowSize_animationType_initialSpringVelocity:1;
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeBegan:1;
        unsigned int pictureInPictureViewControllerHostedWindowSizeChangeEnded:1;
        unsigned int pictureInPictureViewControllerStopButtonTapped:1;
        unsigned int pictureInPictureViewControllerActionButtonTapped:1;
        unsigned int pictureInPictureViewControllerCancelButtonTapped:1;
    } _delegateRespondsTo;
    id <PGPictureInPictureViewControllerContentContainer> _contentContainer;
    struct {
        unsigned int prepareStopAnimationWithCompletionHandler:1;
        unsigned int acquireInterfaceOrientationLock:1;
        unsigned int relinquishInterfaceOrientationLock:1;
        unsigned int handleTapGesture:1;
        unsigned int handleDoubleTapGesture:1;
        unsigned int performRotateAnimationWithRotation:1;
    } _contentContainerRespondsTo;
    struct CGSize _preferredContentSize;
    _Bool _canStartShowingChrome;
    PGPictureInPictureApplication *_application;
    CDUnknownBlockType _waitForUIFinalizationCompletionBlock;
    long long _controlsStyle;
}

@property (copy, nonatomic) CDUnknownBlockType waitForUIFinalizationCompletionBlock;
@property (nonatomic) long long controlsStyle;
@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic) _Bool showsAlternateActionButtonImage;
@property (nonatomic) _Bool showsLoadingIndicator;
@property (retain, nonatomic) PGPlaybackProgress *playbackProgress;
@property (retain, nonatomic) NSArray *loadedTimeRanges;
@property (weak, nonatomic) id <PGPictureInPictureViewControllerDelegate> delegate;
@property (weak, nonatomic, readonly) PGPictureInPictureApplication *application;
@property (weak, nonatomic) id <PGPictureInPictureViewControllerContentContainer> contentContainer;
@property (nonatomic) _Bool canStartShowingChrome;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (nonatomic) long long stashState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)contentViewCornerRadius;
+ (void)animateViewWithAnimationType:(long long)arg1 initialSpringVelocity:(double)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)setControlsStyle:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hostedWindowSizeChangeBegan;
- (void)hostedWindowSizeChangeEnded;
- (void)performSuspendAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performResumeAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performStopAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithApplication:(id)arg1 controlsStyle:(long long)arg2;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performStartAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setStashState:(long long)arg1 animated:(_Bool)arg2;
- (void)acquireInterfaceOrientationLock;
- (void)relinquishInterfaceOrientationLock;
- (void)showChrome:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stopShowingControlsAnimated:(_Bool)arg1;
- (void)pictureInPictureControlsViewControllerStopButtonTapped:(id)arg1;
- (void)pictureInPictureControlsViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureControlsViewControllerCancelButtonTapped:(id)arg1;
- (_Bool)pictureInPictureControlsViewControllerShouldHandleTapGesture:(id)arg1;
- (_Bool)pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:(id)arg1;
- (void)updateHostedWindowSize:(struct CGSize)arg1;
- (void)updateLayerHostTransform:(struct CGAffineTransform)arg1;

@end
