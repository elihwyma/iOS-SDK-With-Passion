/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, HUAnimationApplier, HUQuickControlContainerViewController, HUQuickControlSummaryNavigationBarTitleView, HUQuickControlViewControllerCoordinator, NSMutableArray, NSString, UIButton, UIColor, UIImpactFeedbackGenerator, UILayoutGuide, UIPanGestureRecognizer, UIScrollView;

@protocol HUCardViewControllerDelegate;

@interface HUCardViewController : UIViewController <Swift>

{
    _Bool _hideControls;
    _Bool _hideSettings;
    _Bool _disablePullToUnlockSettings;
    _Bool _settingsUnlocked;
    _Bool _reachable;
    HUQuickControlContainerViewController *_quickControlViewController;
    UIViewController *_settingsViewController;
    HFItem *_sourceItem;
    id <HUCardViewControllerDelegate> _delegate;
    UIColor *_backgroundColor;
    UIScrollView *_scrollView;
    HUQuickControlSummaryNavigationBarTitleView *_navigationBarTitleView;
    HUQuickControlViewControllerCoordinator *_viewControllerCoordinator;
    UIButton *_closeButton;
    NSMutableArray *_constraints;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILayoutGuide *_quickControlLayoutGuide;
    HUAnimationApplier *_animationApplier;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (retain, nonatomic) HUQuickControlViewControllerCoordinator *viewControllerCoordinator;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILayoutGuide *quickControlLayoutGuide;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) _Bool reachable;
@property (nonatomic) _Bool settingsUnlocked;
@property (retain, nonatomic) HUAnimationApplier *animationApplier;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic, readonly) HUQuickControlContainerViewController *quickControlViewController;
@property (nonatomic, readonly) UIViewController *settingsViewController;
@property (nonatomic, readonly) HFItem *sourceItem;
@property (weak, nonatomic) id <HUCardViewControllerDelegate> delegate;
@property (nonatomic) _Bool hideControls;
@property (nonatomic) _Bool hideSettings;
@property (nonatomic) _Bool disablePullToUnlockSettings;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)_handlePanGesture:(id)arg1;
- (id)keyCommands;
- (void)_escapeKeyPressed;
- (void)setUpConstraints;
- (void)_unlockSettings;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)hu_prepareForDismissalAnimated:(_Bool)arg1;
- (void)_prepareForTapticFeedback;
- (void)_closeButtonPressed:(id)arg1;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(_Bool)arg1;
- (id)requestDismissal;
- (void)_actuateTapticFeedback;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(_Bool)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(_Bool)arg2;
- (double)_hostViewHeight;
- (double)_quickControlSectionHeight;
- (void)_endUsingTapticFeedback;
- (double)_quickControlScrollOffsetBoundary;
- (void)_nudgeScrollViewToPoint:(struct CGPoint)arg1;
- (void)_scrollToSettings;
- (id)_springAnimationSettings;
- (void)_updateReachabilityState;
- (id)initWithQuickControlViewController:(id)arg1 settingsViewController:(id)arg2 sourceItem:(id)arg3 controlItems:(id)arg4 home:(id)arg5;
- (void)dismissCardAnimated:(_Bool)arg1;
- (void)scrollToDetailsViewAnimated:(_Bool)arg1;
- (struct CGSize)overridingContentSizeForPresentedViewController:(id)arg1;

@end
