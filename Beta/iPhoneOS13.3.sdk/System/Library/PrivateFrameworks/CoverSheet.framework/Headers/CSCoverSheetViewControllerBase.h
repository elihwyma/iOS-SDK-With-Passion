/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIViewController.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSAppearance, CSBehavior, CSPresentation, FBDisplayLayoutElement, NSArray, NSHashTable, NSSet, NSString, UIColor, _UILegibilitySettings;

@protocol CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSCoverSheetViewControllerBase : UIViewController <Swift>

{
    CSAppearance *_appearance;
    CSBehavior *_behavior;
    CSPresentation *_presentation;
    _UILegibilitySettings *_legibilitySettings;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_regionProviders;
    _Bool _forcingLayoutForPresentation;
    _Bool _isBeingPresented;
    id <CSCoverSheetViewPresenting> _presenter;
}

@property (nonatomic, readonly, getter=isPresentation) _Bool presentation;
@property (nonatomic, readonly, getter=isDisappeared) _Bool disappeared;
@property (nonatomic, readonly) _Bool presentationCancelsTouches;
@property (nonatomic, readonly) UIViewController *kitPresentedViewController;
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

+ (Class)viewClass;
+ (id)coverSheetIdentifier;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)loadView;
- (id)_presenter;
- (void)dismiss;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)handleAction:(id)arg1 fromSender:(id)arg2;
- (void)registerView:(id)arg1 forRole:(long long)arg2;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)updateAppearanceForController:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)updateBehaviorForController:(id)arg1;
- (void)rebuildBehavior;
- (void)rebuildAppearance;
- (void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_conformsToCSCoverSheetViewPresenting;
- (void)setDisplayLayoutElementActive:(_Bool)arg1;
- (void)rebuildEverythingForReason:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterAllViews;
- (void)registerView:(id)arg1 forRole:(long long)arg2 options:(unsigned long long)arg3;
- (struct CGSize)effectiveContentSizeForScrollView:(id)arg1;
- (void)aggregatePresentation:(id)arg1;
- (_Bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id *)arg2;
- (void)willTransitionToPresented:(_Bool)arg1;
- (void)didTransitionToPresented:(_Bool)arg1;
- (void)updateAppearance:(CDUnknownBlockType)arg1;
- (void)updateBehavior:(CDUnknownBlockType)arg1;
- (void)_rebuildDisposition;
- (void)setDisplayLayoutElementActive:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)configureDisplayLayoutElement:(id)arg1;
- (_Bool)_presentationParticipant;
- (void)updateAppearance:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_rebuildPresentation;
- (id)_regionsForView:(id)arg1;
- (_Bool)_rebuildAppearance;
- (void)_layoutIfNeededForPresentation;
- (_Bool)_rebuildBehavior;
- (_Bool)handleAction:(id)arg1 fromController:(id)arg2;
- (void)unregisterView:(id)arg1;

@end
