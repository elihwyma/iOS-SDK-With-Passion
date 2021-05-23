/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UILayoutContainerView, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, UIVisualEffectView, _UIPanelInternalState;

@protocol UIPanelControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject

{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForInitializingAnimation:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int viewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
        unsigned int borderViewsObservingViewBackgroundColor:1;
        unsigned int updateLayoutRequested:1;
    } _panelControllerFlags;
    NSMutableArray *_wrapperBlocksForNextUpdate;
    _Bool __hasUpdatedForTraitCollection;
    _Bool __needsFirstTimeUpdateForTraitCollection;
    _Bool __changingViewControllerParentage;
    UIViewController *_owningViewController;
    UIView *_dimmingView;
    UILayoutContainerView *_view;
    _UIPanelInternalState *__internalState;
    _UIPanelInternalState *__previousInternalState;
    UISlidingBarState *__lastComputedPublicState;
    NSArray *__lastPossiblePublicStates;
    UIView *__contentView;
    UIView *__leadingBorderView;
    UIView *__trailingBorderView;
    UIView *__sourceTransitionView;
    UIView *__destTransitionView;
    UIVisualEffectView *__leadingBackgroundView;
    UIVisualEffectView *__trailingBackgroundView;
    struct CGSize __lastViewSize;
}

@property (weak, nonatomic) UIViewController *owningViewController;
@property (retain, nonatomic) UILayoutContainerView *view;
@property (retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState;
@property (retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState;
@property (copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState;
@property (copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates;
@property (nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize;
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView;
@property (retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView;
@property (retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView;
@property (retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView;
@property (retain, nonatomic, setter=_setLeadingBackgroundView:) UIVisualEffectView *_leadingBackgroundView;
@property (retain, nonatomic, setter=_setTrailingBackgroundView:) UIVisualEffectView *_trailingBackgroundView;
@property (nonatomic, setter=_setHasUpdatedForTraitCollection:) _Bool _hasUpdatedForTraitCollection;
@property (nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) _Bool _needsFirstTimeUpdateForTraitCollection;
@property (nonatomic, setter=_setChangingViewControllerParentage:) _Bool _changingViewControllerParentage;
@property (retain, nonatomic) UIViewController *mainViewController;
@property (retain, nonatomic) UIViewController *leadingViewController;
@property (retain, nonatomic) UIViewController *trailingViewController;
@property (retain, nonatomic) UIViewController *preservedDetailController;
@property (weak, nonatomic) id <UIPanelControllerDelegate> delegate;
@property (copy, nonatomic) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) NSArray *uncachedPossibleStates;
@property (copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, readonly) UIViewController *collapsedViewController;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic, readonly) long long collapsedState;
@property (nonatomic, readonly, getter=isCollapsed) _Bool collapsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_withDisabledAppearanceTransitions:(_Bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)isAnimating;
- (id)allViewControllers;
- (void)__viewWillLayoutSubviews;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)_stopObservingKeyboardNotifications;
- (void)_setBorderViewsObserveViewBackgroundColor:(_Bool)arg1;
- (void)setMainViewController:(id)arg1 changingParentage:(_Bool)arg2;
- (void)_removeIdentifiedChildViewController:(id)arg1;
- (void)_addIdentifiedChildViewController:(id)arg1;
- (void)setLeadingViewController:(id)arg1 changingParentage:(_Bool)arg2;
- (void)setTrailingViewController:(id)arg1 changingParentage:(_Bool)arg2;
- (void)_setNeedsDeferredUpdate;
- (_Bool)_willCollapseWithNewTraitCollection:(id)arg1;
- (void)_collapseWithTransitionCoordinator:(id)arg1;
- (_Bool)_willExpandWithNewTraitCollection:(id)arg1;
- (void)_expandWithTransitionCoordinator:(id)arg1;
- (_Bool)_needsWorkaroundForCoordinatorBlocks;
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;
- (void)_updateForTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldRunOurRotationAlongSideAnimationBeforeClientAlongSideAnimation;
- (void)_setNeedsLayoutAndPerformImmediately:(_Bool)arg1;
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;
- (void)_adjustForKeyboardInfo:(id)arg1;
- (void)_performDeferredUpdate;
- (void)_performSingleDeferredUpdatePass;
- (void)setNeedsUpdate;
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;
- (id)_createBorderView;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;
- (id)initWithOwningViewController:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (_Bool)isLeadingViewControllerVisibleAfterAnimation;
- (_Bool)isTrailingViewControllerVisibleAfterAnimation;
- (void)animateToRequest:(id)arg1;

@end
