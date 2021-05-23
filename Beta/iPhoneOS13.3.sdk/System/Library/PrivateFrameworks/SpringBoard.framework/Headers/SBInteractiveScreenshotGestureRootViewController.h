/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class FBScene, NSMutableArray, NSObject, NSString, SBFFluidBehaviorSettings, SBInteractiveScreenshotGestureCropsView, SBInteractiveScreenshotSettings, SBOrientationTransformWrapperView, SSChromePlaceholderViewController, SSFlashView, UIImageView, UIStatusBar, UIView, UIViewFloatAnimatableProperty, _SBInteractiveScreenshotGestureBackdropView, _SBInteractiveScreenshotGestureReplicatorView;

@protocol OS_dispatch_queue, SBInteractiveScreenshotGestureRootViewControllerDelegate, UIScenePresentation, UIScenePresenter;

@interface SBInteractiveScreenshotGestureRootViewController : UIViewController

{
    _SBInteractiveScreenshotGestureBackdropView *_contentCapturingView;
    SSChromePlaceholderViewController *_chromePlaceholderViewController;
    SBOrientationTransformWrapperView *_chromePlaceholderOrientationWrapperView;
    UIStatusBar *_chromePlaceholderStatusBar;
    _SBInteractiveScreenshotGestureBackdropView *_contentBackdropView;
    SBInteractiveScreenshotGestureCropsView *_cropsView;
    SSFlashView *_flashView;
    struct CGPoint _gesturePortraitAnchorPoint;
    _Bool _hasCrossedCommitThreshold;
    _Bool _hasPreparedInitialLayout;
    UIView *_materialView;
    UIViewFloatAnimatableProperty *_cancellationCommitProgressAnimatableProperty;
    NSMutableArray *_cropLinesAlphaMultiPartAnimations;
    UIViewFloatAnimatableProperty *_cropsTrackingDiscreteAnimationProgressAnimatableProperty;
    UIViewFloatAnimatableProperty *_cropsProgressPresentationValueAnimatableProperty;
    UIViewFloatAnimatableProperty *_cropsProgressSeparatedValuesAnimatableProperty;
    UIViewFloatAnimatableProperty *_transformProgressAnimatableProperty;
    UIViewFloatAnimatableProperty *_translationXAnimatableProperty;
    UIViewFloatAnimatableProperty *_translationYAnimatableProperty;
    _SBInteractiveScreenshotGestureReplicatorView *_replicatorView;
    UIImageView *_screenshotImageView;
    UIView *_screenshotContainerView;
    SBInteractiveScreenshotSettings *_settings;
    FBScene *_sourceScene;
    UIView<UIScenePresentation> *_sourceScenePresentationView;
    id <UIScenePresenter> _sourceScenePresenter;
    UIView *_topContentContainerView;
    SBFFluidBehaviorSettings *_trackingCropsAnimationSettings;
    NSMutableArray *_gestureCommitProgressUpdates;
    NSMutableArray *_gestureCommitProgressUpdateTimestamps;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _queue_cropsCornerContentPadding;
    double _queue_cropsCornerLineWidth;
    double _queue_displayCornerRadius;
    double _queue_displayScale;
    long long _queue_gestureStyle;
    long long _queue_gestureTouchInterfaceOrientation;
    _Bool _queue_hasCommittedScreenshot;
    struct CGRect _queue_portraitBounds;
    struct CGRect _queue_screenshotContentFrame;
    id <SBInteractiveScreenshotGestureRootViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBInteractiveScreenshotGestureRootViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned int flashViewLayerContextID;
@property (nonatomic, readonly) unsigned long long flashViewLayerRenderID;
@property (nonatomic) long long gestureStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)handlePanGestureRecognizerAction:(id)arg1;
- (id)_createMaterialViewWithFrame:(struct CGRect)arg1 groupName:(id)arg2 isCaptureOnly:(_Bool)arg3;
- (id)_createFlashViewWithFrame:(struct CGRect)arg1;
- (void)_updateContentTransformUsingPresentationValues:(_Bool)arg1;
- (void)_updateCropLinesMultiPartAnimationForCropsProgress;
- (double)_currentCommitProgressVelocity;
- (void)_injectCommitProgressVelocity:(double)arg1;
- (_Bool)_isGestureStyleReducedMotion:(long long)arg1;
- (void)_updateWithUpdateMode:(long long)arg1 contentAnimationSettings:(id)arg2 commitProgress:(double)arg3 additionalContentTranslation:(struct CGPoint)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_prepareViewHierarchyForCommittedScreenshot:(_Bool)arg1 gestureStyle:(long long)arg2;
- (double)_gestureCommitProgressUpdateVelocityOverTimeInterval:(double)arg1;
- (void)_updateWithUpdateMode:(long long)arg1 commitProgress:(double)arg2 additionalContentTranslation:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getDistanceTraveled:(double *)arg1 fullDistance:(double *)arg2 commitProgress:(double *)arg3 forTranslationFromCorner:(struct CGPoint)arg4 bounds:(struct CGRect)arg5;
- (void)_addGestureUpdateWithCommitProgress:(double)arg1 timestamp:(double)arg2;
- (_Bool)_isGestureStyleDisabled:(long long)arg1;
- (void)_getContentTranslation:(struct CGPoint *)arg1 scale:(struct CGPoint *)arg2 forCommitProgress:(double)arg3 contentInsets:(struct UIEdgeInsets)arg4 additionalContentTranslation:(struct CGPoint)arg5;
- (void)_cancellationCommitProgressAnimatablePropertyPresentationValueDidChange;
- (id)_createScreenshotImageViewWithFrame:(struct CGRect)arg1;
- (struct CATransform3D)_contentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets)arg2 additionalContentTranslation:(struct CGPoint)arg3;
- (struct CATransform3D)_inverseContentTransformForCommitProgress:(double)arg1 contentInsets:(struct UIEdgeInsets)arg2 additionalContentTranslation:(struct CGPoint)arg3;
- (struct CATransform3D)_anchoredTransformForAnchorPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3 transform:(struct CATransform3D)arg4;
- (id)initWithSourceScene:(id)arg1;
- (void)cancelInteractionWithStyle:(long long)arg1 settlingCompletionHandler:(CDUnknownBlockType)arg2;
- (void)captureScreenshotWithInterfaceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commitInteractionWithScreenshotImage:(id)arg1 screenshotInterfaceOrientation:(long long)arg2 settlingCompletionHandler:(CDUnknownBlockType)arg3 flashCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removePlaceholderChrome;

@end
