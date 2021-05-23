/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISearchPresentationController.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchCarPlayPresentationController : _UISearchPresentationController

{
    UIVisualEffectView *_blurView;
}

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (void)traitCollectionDidChange:(id)arg1;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (id)backgroundObscuringView;
- (_Bool)searchBarToBecomeTopAttached;
- (double)resultsControllerContentOffset;
- (double)statusBarAdjustment;
- (void)showBackgroundObscuringView;
- (void)hideBackgroundObscuringView;
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_912cb5d2)arg1;
- (_Bool)shouldAccountForStatusBar;
- (_Bool)resultsUnderlapsSearchBar;
- (_Bool)searchBarCanContainScopeBar;
- (_Bool)searchBarShouldClipToBounds;
- (id)adaptivePresentationController;
- (struct CGRect)finalFrameForContainerView;
- (void)setContentVisible:(_Bool)arg1;
- (_Bool)animatorShouldLayoutPresentationViews;
- (_Bool)forceObeyNavigationBarInsets;
- (unsigned long long)edgeForHidingNavigationBar;

@end
