/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDimmingView, UIPresentationController, UIView;

@protocol UIViewControllerTransitionCoordinator, _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationAssistant : NSObject

{
    UIPresentationController *_searchPresentationController;
    UIView *_searchBarContainerView;
    UIDimmingView *_dimmingView;
    _Bool _isFormSheetPresentation;
    _Bool _presentationWasAnimated;
    UIPresentationController<_UISearchControllerPresenting> *_adaptivePresentationController;
    id <UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;
}

@property (nonatomic) _Bool presentationWasAnimated;
@property (nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (retain, nonatomic) id <UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;

- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)dimmingView;
- (id)searchBarContainerView;
- (_Bool)searchBarToBecomeTopAttached;
- (double)resultsControllerContentOffset;
- (double)statusBarAdjustment;
- (_Bool)shouldAccountForStatusBar;
- (id)initWithSearchPresentationController:(id)arg1;
- (void)ensureAppropriatelySizedSearchBar:(id)arg1;
- (_Bool)presentationIsPopoverToOverFullScreenAdaptation;
- (id)_searchBarContainerSuperview;
- (struct CGRect)optimalFrameForSearchBar:(id)arg1;
- (_Bool)_currentTransitionIsRotating;
- (_Bool)searchBarWillResizeForScopeBar;
- (id)_searchControllerPresenting;
- (struct CGRect)_containerFrame;
- (_Bool)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1;
- (id)locateNavigationController;
- (double)_statusBarHeightChangeDueToRotation;
- (_Bool)_statusBarPreferredHidden;
- (void)removeContainerViewFromSuperview;
- (struct CGSize)updateSearchBarContainerFrame;

@end
