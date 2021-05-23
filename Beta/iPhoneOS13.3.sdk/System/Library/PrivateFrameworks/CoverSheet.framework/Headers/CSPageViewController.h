/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPresentationViewController.h>

@class CSAppearance, CSBehavior, CSLayoutStrategy, CSPresentation, NSArray, NSSet, NSString, UIColor, _UILegibilitySettings;

@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSPageViewController : CSPresentationViewController

{
    id <CSCoverSheetViewControllerProtocol> _coverSheetViewController;
    _Bool _transitioning;
    _Bool _authenticated;
    CSLayoutStrategy *_layoutStrategy;
}

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

+ (Class)viewClass;
+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;

- (id)view;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)pageView;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)updateTransitionWhileRubberBandingInProgress:(_Bool)arg1;
- (void)willTransitionToVisible:(_Bool)arg1;
- (void)didTransitionToVisible:(_Bool)arg1;
- (long long)requestedDismissalType;
- (id)requestedDismissalSettings;

@end
