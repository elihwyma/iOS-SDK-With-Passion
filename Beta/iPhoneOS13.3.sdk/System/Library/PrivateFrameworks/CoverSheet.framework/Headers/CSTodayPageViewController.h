/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPageViewController.h>

@class CSAppearance, CSBehavior, CSLayoutStrategy, CSPresentation, CSTodayContentViewController, CSTodayViewController, NSArray, NSSet, NSString, SBViewControllerTransitionContext, UIColor, _UILegibilitySettings;

@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSTodayPageViewController : CSPageViewController

{
    CSLayoutStrategy *_layoutStrategy;
    CSTodayContentViewController *_contentViewController;
}

@property (retain, nonatomic) CSTodayContentViewController *contentViewController;
@property (nonatomic, readonly) CSTodayViewController *todayViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;
@property (nonatomic, readonly) long long backgroundStyle;
@property (copy, nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (weak, nonatomic) id <CSCoverSheetViewPresenting> presenter;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly) long long presentationAltitude;
@property (copy, nonatomic, readonly) CSAppearance *activeAppearance;
@property (copy, nonatomic, readonly) CSBehavior *activeBehavior;
@property (copy, nonatomic, readonly) CSPresentation *externalPresentation;
@property (weak, nonatomic) id <CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) _Bool authenticated;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (copy, nonatomic, readonly) NSString *pageRole;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;

+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_isPortrait;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (double)listInsetX;
- (double)customListWidth;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (_Bool)_listBelowDateTime;
- (unsigned long long)dateTimeLayout;
- (double)dateTimeInsetX;
- (double)minimumDateToListSpacing;
- (void)updateTransitionWhileRubberBandingInProgress:(_Bool)arg1;
- (id)displayLayoutElementIdentifier;
- (void)resetForSpotlightDismissalAnimated:(_Bool)arg1;
- (void)cleanupAfterSpotlightDismissal;
- (void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1;
- (id)spotlightHeaderAcquiringViewController;

@end
