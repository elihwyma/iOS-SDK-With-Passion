/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSPageViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSSet, NSString, SBDashBoardDelegatingScreenEdgePanGestureRecognizer, SBDashBoardHostedAppViewController, SBFFluidBehaviorSettings, SBHomeGestureParticipant, UIView, UIViewFloatAnimatableProperty;

@interface SBDashBoardCameraPageViewController : CSPageViewController <Swift>

{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    _Bool _orientationLockAcquired;
    _Bool _interactiveDismissalInProgress;
    _Bool _hasWarmedCameraForThisPresentation;
    _Bool _cameraPrewarmSucceeded;
    long long _cameraPresentLargestPercent;
    SBDashBoardDelegatingScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    UIViewFloatAnimatableProperty *_scaleProperty;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_scaleSettings;
    SBFFluidBehaviorSettings *_alphaSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

@property (retain, nonatomic) SBDashBoardDelegatingScreenEdgePanGestureRecognizer *bottomEdgeRecognizer;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *alphaSettings;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;

- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)_createProperties;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (long long)presentationAltitude;
- (id)pageRole;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)willTransitionToVisible:(_Bool)arg1;
- (void)didTransitionToVisible:(_Bool)arg1;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)handlesRotationIndependentOfCoverSheet;
- (long long)requestedDismissalType;
- (id)requestedDismissalSettings;
- (void)_updateForPropertyChanged;
- (_Bool)_shouldCancelInteractiveDismissGesture;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (void)_noteUserLaunchEventTime;
- (void)_prewarmCamera;
- (void)_makeApplicationStatic;
- (void)_resetAfterInteractiveGestureToCameraVisible:(_Bool)arg1;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(_Bool)arg3;
- (void)_setSceneGrabberHidden:(_Bool)arg1;
- (void)_bailIfFaceTimeCallComesIn;
- (void)_coolCameraIfNecessary;
- (void)_takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_requestHomeGestureOwnership;
- (void)_prepareForInteractiveGestureToCameraVisible:(_Bool)arg1;
- (struct CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint)arg1;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2;
- (void)_updateCameraScale:(double)arg1 interactive:(_Bool)arg2;
- (void)_updateDimmingAlpha:(double)arg1 interactive:(_Bool)arg2;
- (_Bool)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (long long)touchGestureInterfaceOrientation;

@end
