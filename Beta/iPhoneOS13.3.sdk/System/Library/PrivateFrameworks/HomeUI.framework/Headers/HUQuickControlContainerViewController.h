/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HMHome, HUAnimationApplier, HUQuickControlContainerView, HUQuickControlViewController, HUQuickControlViewControllerCoordinator, NSString, UILayoutGuide, UIPanGestureRecognizer, UITapGestureRecognizer;

@protocol HUOpenURLHandling, HUPresentationDelegate, HUQuickControlContainerViewControllerDelegate, NSCopying;

@interface HUQuickControlContainerViewController : UIViewController <Swift>

{
    _Bool _presentedDetailView;
    id <HUPresentationDelegate> presentationDelegate;
    HFItem<NSCopying> *_item;
    HMHome *_home;
    HUQuickControlContainerView *_controlContainerView;
    id <HUQuickControlContainerViewControllerDelegate> _delegate;
    id <HUOpenURLHandling> _detailViewURLHandler;
    UILayoutGuide *_availableContentLayoutGuide;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    HUAnimationApplier *_presentationApplier;
    unsigned long long _presentationState;
    HUQuickControlViewControllerCoordinator *_viewControllerCoordinator;
    HUQuickControlViewController *_activeControlViewController;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) HUAnimationApplier *presentationApplier;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic) struct CGRect sourceRect;
@property (retain, nonatomic) HUQuickControlViewControllerCoordinator *viewControllerCoordinator;
@property (retain, nonatomic) HUQuickControlViewController *activeControlViewController;
@property (retain, nonatomic) HUQuickControlContainerView *controlContainerView;
@property (nonatomic) _Bool presentedDetailView;
@property (nonatomic, readonly) HFItem<NSCopying> *item;
@property (nonatomic, readonly) HMHome *home;
@property (weak, nonatomic) id <HUQuickControlContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) id <HUOpenURLHandling> detailViewURLHandler;
@property (retain, nonatomic) UILayoutGuide *availableContentLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

+ (id)_easeOutTimingFunction;
+ (id)_blurAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_controlScaleAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_controlAlphaAnimationSettingsForPresenting:(_Bool)arg1;
+ (id)_detailChromeAnimationSettings;
+ (id)_sourceViewTransitionAnimationSettingsForPresenting:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_backButtonPressed:(id)arg1;
- (id)viewForTouchContinuation;
- (void)quickControlContentDidUpdateDesiredVisbilityState:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)hu_prepareForDismissalAnimated:(_Bool)arg1;
- (void)detailsButtonPressedInContainerView:(id)arg1;
- (struct CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(_Bool)arg1;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(_Bool)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(_Bool)arg2;
- (id)dismissControlAnimated:(_Bool)arg1;
- (id)_prepareDetailViewController;
- (void)_updateUserInteractionEnabledForActiveControl;
- (_Bool)isControlPresentedOrPresenting;
- (id)presentDetailViewControllerAnimated:(_Bool)arg1;
- (void)_createControlContainerViewWithSourceRect:(struct CGRect)arg1;
- (void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(_Bool)arg2 initialProgress:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_dismissDetailsViewControllerAnimated:(_Bool)arg1 dismissControl:(_Bool)arg2;
- (void)_controlDidDismiss;
- (void)_updateActiveControlViewController;
- (void)_updateReachabilityStateForActiveControl;
- (void)quickControlContent:(id)arg1 requestDismissalOfType:(unsigned long long)arg2;
- (void)quickControlContent:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)hideAuxiliaryViewForQuickControlContent:(id)arg1;
- (id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3;
- (void)_settingsButtonPressed:(id)arg1;
- (void)presentControlFromSourceRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)isControlDismissedOrDismissing;
- (void)_dismissQuickControls;
- (void)beginReceivingTouchesWithGestureRecognizer:(id)arg1;

@end
