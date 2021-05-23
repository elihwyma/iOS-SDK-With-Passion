/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPopoverPresentationController.h>

@class NSString, UIPresentationController, UIView, _UISearchPresentationAssistant;

@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPopoverPresentationController : UIPopoverPresentationController

{
    _UISearchPresentationAssistant *_assistant;
    struct CGRect finalFrameForContainerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) UIView *searchBarContainerView;
@property (nonatomic, readonly) _Bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (nonatomic, readonly) _Bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) _Bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) _Bool searchBarCanContainScopeBar;
@property (nonatomic, readonly) _Bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) struct CGRect finalFrameForContainerView;
@property (nonatomic, readonly) _Bool animatorShouldLayoutPresentationViews;
@property (nonatomic, readonly) _Bool forceObeyNavigationBarInsets;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (long long)adaptivePresentationStyle;
- (void)presentationTransitionWillBegin;
- (id)_popoverHostingWindow;
- (void)_transitionFromWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionToDidEnd;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_912cb5d2)arg1;
- (void)setContentVisible:(_Bool)arg1;

@end
