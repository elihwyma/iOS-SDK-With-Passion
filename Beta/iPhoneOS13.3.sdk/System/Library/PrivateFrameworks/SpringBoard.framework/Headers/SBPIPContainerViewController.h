/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutElement, NSHashTable, NSLayoutConstraint, NSMutableArray, NSString, PGPictureInPictureViewController, UIView;

@interface SBPIPContainerViewController : UIViewController <Swift>

{
    NSHashTable *_observerHashTable;
    _Bool _interfaceOrientationLockAcquired;
    UIView *_contentView;
    struct CGSize _preferredContentSize;
    long long _contentViewPosition;
    struct CGSize _contentViewSize;
    struct UIEdgeInsets _contentViewPadding;
    unsigned int _addContentViewLayoutConstraints:1;
    unsigned int _stashContentView:1;
    unsigned int _updateContentViewLayoutSettingsAndLayoutIfNeeded:1;
    unsigned int _panGestureHandled:1;
    unsigned int _rotationGestureHandled:1;
    unsigned int _pinchGestureHandled:1;
    double _previousRotation;
    double _initialGestureScale;
    struct CGPoint _panGestureVelocity;
    double _pinchGestureScaleFactor;
    unsigned int _handlePanRotationPinchGestureEndedState:1;
    NSMutableArray *_layoutConstraints;
    NSLayoutConstraint *_contentViewGestureCenterXLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureCenterYLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureWidthLayoutConstraint;
    NSLayoutConstraint *_contentViewGestureHeightLayoutConstraint;
    long long _layoutConstraintStyle;
    FBDisplayLayoutElement *_displayLayoutElement;
    double _displayLayoutElementLevel;
    _Bool _animateSafeAreaInsetsChanges;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    long long _requiredInterfaceOrientation;
}

@property (nonatomic, readonly) PGPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic, readonly) long long requiredInterfaceOrientation;
@property (nonatomic) double displayLayoutElementLevel;
@property (nonatomic) _Bool animateSafeAreaInsetsChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)acquireInterfaceOrientationLock;
- (void)relinquishInterfaceOrientationLock;
- (_Bool)handleTapGesture;
- (_Bool)handleDoubleTapGesture;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)performStartAnimationWithAnimationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 animationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithPictureInPictureViewController:(id)arg1;
- (void)_actuallyUpdateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_actuallyHandlePanRotationPinchGestureEndedState;
- (void)_updateContentViewLayoutConstraintsWithContentViewSize;
- (struct CGRect)_contentViewFrameInDisplayReferenceSpace;
- (void)_updateDisplayLayoutElementReferenceFrame;
- (void)_requireInterfaceOrientation:(long long)arg1;
- (struct CGRect)_contentViewFrameFromInterfaceOrientation:(long long)arg1 frameInFixedCoordinateSpace:(struct CGRect)arg2;
- (void)_updateContentViewLayoutConstraintsWithFrame:(struct CGRect)arg1;
- (void)_acquireInterfaceOrientationLock;
- (void)_relinquishInterfaceOrientationLock;
- (void)_updateContentViewLayoutSettingsAndLayoutIfNeeded;
- (void)_handlePanRotationPinchGestureBeganState;
- (struct CGPoint)_contentViewCenter;
- (_Bool)_stashContentViewWithContentViewCenter:(struct CGPoint)arg1;
- (void)_handlePanRotationPinchGestureEndedState;
- (void)_adjustContentViewAnchorPointForGestureRecognizer:(id)arg1;
- (struct CGSize)_constrainContentViewSize:(struct CGSize)arg1;
- (void)contentViewLayoutSettingsDidChange;
- (void)setContentViewPadding:(struct UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3;
- (double)SB_accessibilityContentViewScale;
- (void)SB_accessibilitySetContentViewScale:(double)arg1;

@end
